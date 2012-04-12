#include <arduino.h>

#if defined (BOARD1) || defined(BOARD5) || defined(BOARD6) || defined(BOARD7) || defined(BOARD9) 
#define BOARD6
#endif

#ifdef BOARD0
#define ON LOW
#define OFF HIGH
#else
#define ON HIGH
#define OFF LOW
#endif

#if defined(BOARD0) || defined(BOARD6) 
 const bool hasTwoButtons = true;
 const int buttonPin = 12;
 const int buttonPin2 = 13;
#elif defined(BOARD3)
 const bool hasTwoButtons = false;
 const int buttonPin = 3;
 const int buttonPin2 = 0;
#elif defined(BOARD4) || defined(BOARD8)
 const bool hasTwoButtons = false;
 const int buttonPin = 12;
 const int buttonPin2 = 13;
#endif

#if defined(BOARD0) || defined(BOARD6) || defined (BOARD8)
 int pins[] = {4,5,6,7,A0,A1,2,3,8,9,10,11};
#elif defined(BOARD4)
 int pins[] = {4,5,6,7,8,9,10,11,A0,A1,2,3};
#elif defined(BOARD3)
 int pins[] = {5,7,10,A0,4,6,11,13,8,9,12,2};
#endif







#ifdef BOARD2
 const bool hasTwoButtons = false;
 const int buttonPin = 12;
 int pins[] = {4,5,6,7,0,1,2,3,8,9,10,11};
#endif


