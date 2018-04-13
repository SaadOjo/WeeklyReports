#include "rpiDecoder.h"

rpiDecoder myDecoder;

char direction;
unsigned char distance;
unsigned char orientation;
bool leavingFlagStatus;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
if(myDecoder.update())
{
  distance = myDecoder.getDistance();
  direction = myDecoder.getDirection();
  orientation = myDecoder.getOrientation();
  leavingFlagStatus = myDecoder.getLeavingFlagStatus();

  Serial.println(String("Distance: ") + distance );
}
 
}

