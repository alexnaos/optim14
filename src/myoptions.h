#ifndef myoptions_h
#define myoptions_h

/* Настройки дисплея OLED SSD1306 128x64 I2C */
#define DSP_MODEL DSP_SSD1306   // Меняем модель на SSD1306
#define I2C_SDA 33               // На S2 Mini SDA обычно на 33 (или используйте удобные вам)
#define I2C_SCL 35               // На S2 Mini SCL обычно на 35
#define I2C_ADDR 0x3C            // Стандартный адрес для OLED 0.96

/* Настройки для PCM5102 */
#define L10N_LANGUAGE RU
#define I2S_COMMFMT 0
#define I2S_BCK 26 
#define I2S_WS 25  
#define I2S_DOUT 17 

/* Дополнительные опции */
#define VOLUME_STEP 5
#define BUFLEN 190 
#define VOLUME_LOGARITHMIC true

#endif
