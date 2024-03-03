/*
---------------------------------------------------------------------------------------------------
Este exemplo demonstra como utilizar a biblioteca definindo apenas o pino do led
Autor: Hercules Montenegro @ mar-2024
---------------------------------------------------------------------------------------------------

Requer a biblioteca: timerwithoutdelay: https://github.com/casaautomacao/timerwithoutdelay.git

*/

#include <BlinkLed.h>


BlinkLed led(2);  // DEFINA O PINO DO LED | temporização padrão: ligado = 1000, desligado = 1000

void setup() {

  // Inicializa os temporizadores, define o pino como OUTPUT e LOW
  led.begin();
  
}

void loop() {

  // Chamada da função principal que inicia o ciclo de piscar
  led.blink();
  
}
