#include "RGBMatrix.h"
/****************************************************
Main Functions zone
****************************************************/
int hour = 23;
int minute = 59;
void setup()
{
  RGBMatrixInit();
  hour = 23;
  minute = 59;
}
void loop()
{
  DispShowPic(hour);
  unsigned int oneSecond = 985*60;
  for (int x = minute; x < 60; x++){
    delay(oneSecond);
  }
  if (++hour == 24){
    hour = 0;
  }
  minute = 0;
}
