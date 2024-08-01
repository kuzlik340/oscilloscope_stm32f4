#include        <stdint.h>
#include        <stdio.h>
#include        <stm32f411xe.h>
#include        "uart.h"
#include        "adc.h"

uint32_t sensor_value;

int main()
{ 
  uar2_tx_init();
  pa1_adc_init();


  while(1)
  {
    start_conversion();
    sensor_value = adc_read();
    printf("Sensor value: %ld \n\r", sensor_value);
 
  }
}