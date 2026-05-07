#ifndef myoptions_h
#define myoptions_h

/* Язык интерфейса */
#define L10N_LANGUAGE RU

/* Настройки OLED Дисплея (SSD1306 128x64) */
#define DSP_MODEL DSP_SSD1306
#define I2C_ADDR 0x3C
#define I2C_SDA 33
#define I2C_SCL 35

/* Настройки для аудиоплаты VS1053 (Красная) */
/* Подключай SPI к стандартным пинам: SCK(12), MISO(13), MOSI(11) */
#define VS1053_CS    27   // Пин XCS на плате
#define VS1053_DCS   14   // Пин XDCS на плате (вместо 33)
#define VS1053_DREQ  34   // Пин DREQ на плате

/* Настройки основного энкодера */
#define ENC_BTNR     36   // Правый поворот
#define ENC_BTNL     38   // Левый поворот (сменил с 34, т.к. 34 занят DREQ)
#define ENC_BTNB     39   // Кнопка
#define ENC_HALFQUARD true

/* Выключаем встроенный ЦАП (т.к. используем VS1053) */
#define I2S_DOUT 255

#endif
