# Piscar LED sem delay

Esta biblioteca Arduino permite piscar um LED sem interromper o fluxo do código, não utilizando a função `delay()`. A biblioteca torna-se útil em situações em que é necessário indicar visualmente que o Arduino está processando, enquanto o código continua a ser executado.

## Características

- **Piscar LED sem delay:** Os métodos implementados permitem piscar um LED sem a utilização da função `delay()`, mantendo o fluxo do programa.
- **Indicação de processamento:** Útil para evidenciar visualmente o funcionamento do Arduino, seja para indicar a execução de uma seção específica do código, como o loop principal, ou até mesmo para sinalizar a ocorrência de erros e garantir que o código não esteja travado.
- **Piscar LEDs múltiplos:** A biblioteca suporta múltiplos LEDs de forma simultânea, com diferentes ciclos.

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
**Veja mais [exemplos](/examples) no diretorio.** 

