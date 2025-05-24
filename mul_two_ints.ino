#include <my_liberary.h>


//we use double quotes to include liberay if it is in same folder
/*
*
*explanation of our example
*/
void setup()
{
  //Setup Serial communication to print result on serial monitor
  Serial.begin(9600);
   //get the multiplication  of 2 ints into another int
  int result = mulTwoInts(4,3);
  Serial.println(result);

}
void loop()
{}
