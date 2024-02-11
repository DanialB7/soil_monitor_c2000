# Soil Monitoring System

## Project Overview

This project was developed as part of an Embedded Programming course, aimed at creating a basic Real-Time Operating System (RTOS) based soil monitoring system. It leverages various sensors and a microcontroller to collect data on soil moisture levels, temperature, humidity, and water level, transmitting this data to the cloud for monitoring and analysis.

### Components Used
- Texas Instruments Microcontroller: C2000 32-bit TMS320F28379D
- Capacitive Soil Moisture Sensor: Measures the moisture levels in the soil.
- Ultrasonic Sensor: Used to measure the water level in the tank.
- DC Water Pump: Activated based on the soil moisture level to water plants automatically.
- Temperature/Humidity Sensor: Monitors environmental conditions affecting soil moisture.
- ESP32 Microcontroller: Facilitates data collection and transmission to the cloud.

### Communication Protocols
- I2C: Used for temperature/humidity sensor communication.
- GPIO: Controls the DC water pump.
- UART: Manages communication with the ESP32 for data transmission.
- eCap: Interfaces with the Ultrasonic sensor.
- ADC: Reads the soil moisture sensor data.

