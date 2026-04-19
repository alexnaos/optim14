#ifndef myoptions_h
#define myoptions_h

/* Настройки для PCM5102 */
#define L10N_LANGUAGE           RU
#define I2S_COMMFMT             0      // Формат I2S (0 - стандарт для PCM5102)

/* Пины для вашей платы (распаянные внутренние ряды) */
#define I2S_BCK                 26     // Правый ряд, 3-й сверху
#define I2S_WS                  22     // Левый ряд, 3-й сверху
#define I2S_DOUT                21     // Левый ряд, 4-й сверху (используем IO21 вместо нераспаянного IO25)

/* Дополнительные опции */
#define VOLUME_STEP             5
#define BUFLEN                  190
#define BITRATE_FULL            1
#define VOLUME_LOGARITHMIC      true 

#endif

