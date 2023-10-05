#include <Filters.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

float testFrequency = 50;                     // test signal frequency (Hz)
float windowLength = 40.0 / testFrequency;     // how long to average the signal, for statistics

int sensor = 0; // Sensor analog input, here it's A0

float intercept = -0.04; // to be adjusted based on calibration testing
float slope = 0.0405; // to be adjusted based on calibration testing
float current_volts; // Voltage

unsigned long printPeriod = 1000; // Refresh rate
unsigned long previousMillis = 0;

// Bulb rate in watts (change this to match your bulb's wattage)
float bulbRate = 60.0;  // Example: 60 watts



// Initialize the I2C LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // Replace 0x27 with the correct I2C address of your LCD

void setup() {
  Serial.begin(9600); // start the serial port
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the backlight (if supported)
  lcd.setCursor(0, 0); // Set the cursor to the first row, first column
  lcd.print("Voltage:");
  lcd.setCursor(0, 1); // Set the cursor to the second row, first column
  lcd.print("Power:");
  delay(5000);
}

void loop() {
  RunningStatistics inputStats;
  inputStats.setWindowSecs(windowLength);

  while (true) {
    sensor = analogRead(A0); // read the analog in value:
    inputStats.input(sensor); // log to Stats function

    if ((unsigned long)(millis() - previousMillis) >= printPeriod) {
      previousMillis = millis(); // update time every second

      // Calculations part
      current_volts = intercept + slope * inputStats.sigma();
      current_volts = current_volts * 40.3231;

      // Calculate power based on voltage and bulb rate
      float power = current_volts * bulbRate;

      // Update voltage and power on the I2C LCD
      lcd.setCursor(9, 0); // Set the cursor to the first row, 10th column (after "Voltage:")
      lcd.print("       "); // Clear the previous voltage reading
      lcd.setCursor(9, 0); // Set the cursor again
      lcd.print(current_volts, 3); // Display voltage with 3 decimal places

      lcd.setCursor(7, 1); // Set the cursor to the second row, 8th column (after "Power:")
      lcd.print("        "); // Clear the previous power reading
      lcd.setCursor(7, 1); // Set the cursor again
      lcd.print(power, 2); // Display power with 2 decimal places

      // Print voltage and power to the serial monitor as well
      Serial.print("\tVoltage: ");
      Serial.println(current_volts); // Displays the voltage
      Serial.print("\tPower: ");
      Serial.println(power); // Displays the power
    }
  }
}
