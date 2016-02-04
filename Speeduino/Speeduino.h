#ifndef Speeduino_h
#define Speeduino_h

#include "Arduino.h"

#define pinPort(P)\
  (((P)>=0&&(P)<8)?&PORTD:(((P)>7&&(P)<14)?&PORTB:&PORTC))
#define pinDDR(P)\
  (((P)>=0&&(P)<8)?&DDRD:(((P)>7&&(P)<14)?&DDRB:&DDRC))
#define pinOfPin(P)\
  (((P)>=0&&(P)<8)?&PIND:(((P)>7&&(P)<14)?&PINB:&PINC))
#define pinIndex(P)((uint8_t)(P>13?P-14:P&7))
#define pinMask(P)((uint8_t)(1<<pinIndex(P)))

#define inputPin(P) *(pinDDR(P))&=~pinMask(P)
#define inputPullUpPin(P) *(pinDDR(P))&=~pinMask(P);digitalHigh(P)
#define outputPin(P) *(pinDDR(P))|=pinMask(P)
#define digitalLow(P) *(pinPort(P))&=~pinMask(P)
#define digitalHigh(P) *(pinPort(P))|=pinMask(P)
#define isHigh(P)((*(pinOfPin(P))& pinMask(P))>0)
#define isLow(P)((*(pinOfPin(P))& pinMask(P))==0)
#define digitalState(P)((uint8_t)isHigh(P))

#endif