/*
---------------------------------------------------------------------------------------------------
Este exemplo demonstra como utilizar a biblioteca para 2 ou mais leds
Autor: Hercules Montenegro @ mar2024
---------------------------------------------------------------------------------------------------

Requer a biblioteca: timerwithoutdelay: https://github.com/casaautomacao/timerwithoutdelay.git

*/

#include <BlinkLed.h>


BlinkLed led1(2);  
BlinkLed led2(3);

void setup() {

  // Inicializa os temporizadores, define o pino do led como OUTPUT e LOW (desligado)
  led1.begin();
  led2.begin();
}

void loop() {

  // Chamada da função principal que inicia o ciclo de ligado/desligado
  led1.blink();
  led2.blink();
}
