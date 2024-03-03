# pisca_led_sem_delay

Esta biblioteca Arduino permite piscar um LED sem interromper o fluxo do código, não utilizando a função `delay()`. A biblioteca se torna útil em situações em que é necessário indicar visualmente que o Arduino está processando, enquanto o código continua a ser executado.

## Características

- **Piscar LED sem delay:** Os métodos implementados permitem piscar um LED sem a utilização da função `delay()`, mantendo o fluxo do programa.
- **Indicação de processamento:** Ideal para indicar visualmente que o Arduino está ocupado executando tarefas.
- **[Piscar LEDs múltiplos:]** A biblioteca suporta o piscar de múltiplos LEDs de forma simultânea, com diferentes ciclos.

```cpp

#include <BlinkLed.h>

BlinkLed led(2, 1000, 1000);  // (LED_PIN, time ON, time OFF)

void setup() {
  led.begin();
}

void loop() {
  led.blink();
}
```
**Veja mais [examplos](/examples) no diretorio.** 

