/*
---------------------------------------------------------------------------------------------------
Este exemplo demonstra como utilizar a biblioteca definindo o pino e a temporização
Autor: Hercules Montenegro @ mar-2024
---------------------------------------------------------------------------------------------------

Requer a biblioteca: timerwithoutdelay: https://github.com/casaautomacao/timerwithoutdelay.git

*/

#include <BlinkLed.h>


BlinkLed led(2, 2000, 3000);  // definição: pino do led, tempo LIGADO, tempo DESLIGADO

void setup() {

  // Inicializa os temporizadores, define o pino como OUTPUT e LOW
  led.begin();
}

void loop() {

  // Chamada da função principal que inicia o ciclo de piscar
  led.blink();
}
