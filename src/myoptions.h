#ifndef myoptions_h
#define myoptions_h

/* Настройки дисплея LCD1602 */
#define DSP_MODEL               DSP_1602I2C
#define I2C_SDA                 21     
#define I2C_SCL                 22     
#define I2C_ADDR                0x27   

/* Настройки для PCM5102 */
#define L10N_LANGUAGE           RU
#define I2S_COMMFMT             0      

#define I2S_BCK                 26     
#define I2S_WS                  25     // Провод с 22 переткнуть в D2 (IO25)
#define I2S_DOUT                17     // Провод с 21 переткнуть в D3 (IO17)

/* Дополнительные опции */
#define VOLUME_STEP             5
#define BUFLEN                  190
// Параметр bitrate_full удален, так как он вызывает ошибку компиляции в этой версии
#define VOLUME_LOGARITHMIC      true 

#endif
