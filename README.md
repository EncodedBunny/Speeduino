# Speeduino

This simple project aims to increase the speed of common functions used when programming with arduino such as `digitalWrite`,`digitalRead` and `pinMode`.

## How To Install

Speeduino can be installed like any other Arduino libary, just download this GitHub project and add it to your `/libraries/` folder inside your Arduino sketches folder. Once added, simply add `#include <Speeduino.h>` in the beggining of your code and you're ready to go!

## Speeduino Functions

Once installed, Speeduino will add new functions with the same effect as the ones from Arduino, only faster. Below are the original Arduino functions and their Speeduino counterpart:

Arduino Function | Speeduino Function
---------------- | ------------------
`digitalWrite(pin, HIGH)` | `digitalHigh(pin)`
`digitalWrite(pin, LOW)` | `digitalLow(pin)`
`digitalRead(pin)` | `digitalState(pin)`
`pinMode(pin, INPUT)` | `inputPin(pin)`
`pinMode(pin, OUTPUT)` | `outputPin(pin)`
`pinMode(pin, INPUT_PULLUP)` | `inputPullUpPin(pin)`
`digitalRead(pin) == HIGH` | `isHigh(pin)`
`digitalRead(pin) == LOW` | `isLow(pin)`

## But How Fast?

Below is a comparaison of the speed of diferent operations done using Arduino vs. Speeduino:

Function | Arduino Speed | Speeduino Speed
-------- | ------------- | ---------------
`digitalWrite(13, HIGH)` | 4 - 8 μs | 0* - 4 μs
`pinMode(13, OUTPUT)` | 8 μs | 4 μs
`digitalRead(13)` | 4 - 8 μs | 0* - 4 μs
_*Since Arduino can't measure nanoseconds, the microseconds measurement will appear to be 0, meaning that the function took less than a microsecond to execute_
