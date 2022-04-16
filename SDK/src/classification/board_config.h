#ifndef _BOARD_CONFIG_
#define _BOARD_CONFIG_
// pin definitions
/* OV2640 */
#define		OV_RST_PIN					42
#define		OV_VSYNC_PIN				43
#define		OV_PWDN_PIN					44
#define		OV_HREF_PIN					45
#define		OV_PCLK_PIN					47
#define		OV_XCLK_PIN					46
#define		OV_SCCB_SCLK_PIN			41
#define		OV_SCCB_SDA_PIN				40	


/* LCD */
#define		LCD_CS_PIN					36
#define		LCD_DC_PIN					38
#define		LCD_RW_PIN					39
#define		LCD_RST_PIN					37


// IO definitions
#define     LCD_DC_IO                   1
#define     LCD_RST_IO                  0

/*****************************FUNC-GPIO************************************/
// GPIO口的功能，绑定到硬件IO口
#define FUNC_LCD_CS             (FUNC_SPI0_SS3)
#define FUNC_LCD_RST            (FUNC_GPIOHS0 + LCD_RST_IO)
#define FUNC_LCD_DC             (FUNC_GPIOHS0 + LCD_DC_IO)
#define FUNC_LCD_RW             (FUNC_SPI0_SCLK)





#endif
