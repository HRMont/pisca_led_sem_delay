/*
---------------------------------------------------------------------------------------------------
Este exemplo demonstra como utilizar a biblioteca definindo apenas o pino do led
Autor: Hercules Montenegro
---------------------------------------------------------------------------------------------------

Requer a biblioteca: timerwithoutdelay: https://github.com/casaautomacao/timerwithoutdelay.git

*/

#include <BlinkLed.h>


BlinkLed led(2);  // É possivel declarar apenas o pino do led | Padrões: tempo LIGADO = 1000, tempo DESLIGADO = 1000

void setup() {

  // Inicializa os temporizadores, define o pino do led como OUTPUT e LOW (DESLIGADO)
  led.begin();
}

void loop() {

  // Chamada da função principal que inicia o ciclo de ligado/desligado
  led.blink();
}
