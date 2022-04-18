#include "Arduino.h"
#include "opencv.h"

using namespace cv;

void setup()
{
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  Serial.println(CV_VERSION);
}

void loop()
{
  delay(2000);
  Serial.println(CV_VERSION);
  Serial.println("OpenCV works!");
}