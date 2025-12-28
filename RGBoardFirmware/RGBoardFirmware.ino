#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ws2812.pio.h"

#define WS2812_PIN 25
#define NUM_PIXELS 1
#define IS_RGBW false

static inline uint32_t urgb_u32(uint8_t r, uint8_t g, uint8_t b) {
    return ((uint32_t)(g) << 16) |
           ((uint32_t)(r) << 8)  |
           (uint32_t)(b);
}

void put_pixel(PIO pio, uint sm, uint32_t pixel_grb) {
    pio_sm_put_blocking(pio, sm, pixel_grb << 8u);
}

void hsv_to_rgb(float h, uint8_t *r, uint8_t *g, uint8_t *b) {
    float s = 1.0f, v = 1.0f;
    int i = (int)(h * 6);
    float f = h * 6 - i;
    float p = v * (1 - s);
    float q = v * (1 - f * s);
    float t = v * (1 - (1 - f) * s);
    switch (i % 6) {
        case 0: *r=v*255; *g=t*255; *b=p*255; break;
        case 1: *r=q*255; *g=v*255; *b=p*255; break;
        case 2: *r=p*255; *g=v*255; *b=t*255; break;
        case 3: *r=p*255; *g=q*255; *b=v*255; break;
        case 4: *r=t*255; *g=p*255; *b=v*255; break;
        case 5: *r=v*255; *g=p*255; *b=q*255; break;
    }
}

int main() {
    stdio_init_all();

    PIO pio = pio0;
    int sm = 0;

    uint offset = pio_add_program(pio, &ws2812_program);

    ws2812_program_init(
        pio,
        sm,
        offset,
        WS2812_PIN,
        800000,    
        IS_RGBW
    );

    float hue = 0.0f;

    while (true) {
        uint8_t r, g, b;
        hsv_to_rgb(hue, &r, &g, &b);

        for (int i = 0; i < NUM_PIXELS; i++) {
            put_pixel(pio, sm, urgb_u32(r, g, b));
        }

        hue += 0.002f;
        if (hue >= 1.0f) hue = 0.0f;

        sleep_ms(10);
    }
}

