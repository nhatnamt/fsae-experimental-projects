/**
  ******************************************************************************
  * @file    driver.hpp
  * @author  Nam Tran
  * @version 1.0
  * @brief   Hardware backen driver source for the STM32469I-Discovery with custom "disco" board
  *          - TEAM SWINBURNE
  ******************************************************************************
  * @details Ultilising the mbed platform, ported from the TS_19 dash code
  * ----------------------------
  * Definitions and declarations
  *     CAN objects
  * 	Tickers
  * ----------------------------
  * Functions
  *     fafa
  *
  ******************************************************************************
*/

#include "driver.hpp"

CAN                     can1(PB_5, PB_13);
DigitalOut              can1_rx_led(LED1);
DigitalOut              can1_tx_led(LED2);
CANMessage              can1_msg;

CAN                     can2(PB_8, PB_9);
DigitalOut              can2_rx_led(LED3);
DigitalOut              can2_tx_led(LED4);
CANMessage              can2_msg;

Ticker                  ticker_heartbeat;
Ticker                  ticker_can_transmit;

VehicleInfo vehicle_info;
void backend_init(){

}

void backend_loop()
{
	//keep the backend running
	while(1)
	{

	}
}