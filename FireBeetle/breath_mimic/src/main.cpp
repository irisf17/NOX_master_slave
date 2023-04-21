#include <Arduino.h>
//
const int ledPin = D9;
const int motorPin1 = D2;
const int motorPin2 = D3;

// pwm 0-255

void setup()
{
  // put your setup code here, to run once:
  // setup pin 5 as a digital output pin
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void breath_signals(int value)
{
  for (int i = 0; i < value; i++)
  {
    analogWrite(motorPin2, 95); // breath in  ---  turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin2, 95); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin2, 95); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin2, 190); // turn on the motor2, using pwm
    delay(1000);
    analogWrite(motorPin2, 95); // turn on the motor2, using pwm
    delay(300);
    analogWrite(motorPin2, 90); // turn on the motor2, using pwm
    delay(300);
    analogWrite(motorPin2, 80); // turn on the motor2, using pwm
    delay(300);
    analogWrite(motorPin2, 0); // motor2 using pwm
    delay(1000);

    analogWrite(motorPin1, 95); // breath out --- turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 105); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 115); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 180); // turn on the motor2, using pwm
    delay(1000);
    analogWrite(motorPin1, 115); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 105); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 95); // turn on the motor2, using pwm
    delay(100);
    analogWrite(motorPin1, 0); // motor2 using pwm
    delay(1000);
  }
}

// motorpin1 breath out
// motorpin2 breath in

void loop()
{
  // analogWrite(motorPin1, 250); // BREATH OUT  ---  turn on the motor1, using pwm
  delay(1000);
  analogWrite(motorPin1, 0);
  delay(1500);
  // analogWrite(motorPin2, 250);
  delay(1000);
  analogWrite(motorPin2, 0);
  delay(1500);

  // breath_signals(5);      // can change number of for loops with value inside brackets.
}