# RGBoard
An RP2040-based devboard with an integrated neopixel. Designed based off the Blueprint starter project tutorial, I made this to get better at integrating my own MCUs into projects to make them more streamlined instead of spamming devboards of all kinds everywhere. In the process, I learned a lot, especially with using KiCad in a more efficient way and JLCPCB assembly services. I'll be able to apply this knowledge to lots of things in the future, such as flight computers or motherboards.

<img width="407" height="817" alt="image" src="https://github.com/user-attachments/assets/92b9ffb7-6612-4105-8216-bff67d2ca0c8" />
<img width="1181" height="818" alt="image" src="https://github.com/user-attachments/assets/5061edc2-dc27-4537-a6ad-9fb0291cb5de" />
<img width="443" height="973" alt="image" src="https://github.com/user-attachments/assets/08e530fe-05e9-4f0d-8f65-63cb61c8f94a" />

| Id | Designator | Footprint | Quantity | Comment | Supplier and ref |
|----|------------|-----------|----------|---------|------------------|
| 1 | R3, R4 | R_0402_1005Metric | 2 | 27 | |
| 2 | C7, C9, C2, C11, C6, C17, C5, C8, C12, C4, C3 | C_0402_1005Metric | 11 | 0.1uF | |
| 3 | C13, C14 | C_0603_1608Metric | 2 | 10uF | |
| 4 | Y1 | Crystal_SMD_3225-4Pin_3.2x2.5mm | 1 | 12MHz | |
| 5 | U1 | QFN-56-1EP_7x7mm_P0.4mm_EP3.2x3.2mm | 1 | RP2040 | |
| 6 | C1, C10 | C_0402_1005Metric | 2 | 1uF | |
| 7 | R7, R5 | R_0402_1005Metric | 2 | 1K | |
| 8 | U3 | Winbond_USON-8-1EP_3x2mm_P0.5mm_EP0.2x1.6mm | 1 | W25Q128JVS | |
| 9 | U4 | SOT-23 | 1 | MCP1700x-330xxTT | |
| 10 | SW1 | SW_SPST_TS-1088-xR020 | 1 | SW_Push | |
| 11 | J4 | PinHeader_1x03_P2.54mm_Vertical | 1 | Conn_01x03 | |
| 12 | R2, R1 | R_0402_1005Metric | 2 | 5.1K | |
| 13 | J3, J2 | PinHeader_1x20_P2.54mm_Vertical | 2 | Conn_01x20 | |
| 14 | C16, C15 | C_0402_1005Metric | 2 | 33pF | |
| 15 | J1 | USB_C_Receptacle_HRO_TYPE-C-31-M-12 | 1 | USB_C_Receptacle_USB2.0_14P | |
| 16 | D1 | LED_WS2812B-2020_PLCC4_2.0x2.0mm | 1 | NeoPixel_THT | |
| 17 | R6 | R_0402_1005Metric | 1 | 10K | |
