#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author kk161205
 * @date 2026-02-20
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

/* ===========================
   Global Definitions
   =========================== */

const uint8_t RED_PIN   = 9;
const uint8_t GREEN_PIN = 10;
const uint8_t BLUE_PIN  = 11;

void setup() {

    Serial.begin(9600);
    while (!Serial) {}

    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    Serial.println("=================================");
    Serial.println(" Embedded RGB LED Control System ");
    Serial.println(" RGB Initialized (Common Cathode) ");
    Serial.println("=================================");
}

void loop() {

    Serial.println("DIGITAL MODE: RED ON");

    // Turn ON red
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(BLUE_PIN, LOW);

    delay(1000);

    Serial.println("DIGITAL MODE: RED OFF");

    // Turn OFF red
    digitalWrite(RED_PIN, LOW);

    delay(1000);