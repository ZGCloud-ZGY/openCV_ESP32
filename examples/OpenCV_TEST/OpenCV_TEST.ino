#include "Arduino.h"
#include "opencv.h"
#include <iostream>

using namespace cv;
using namespace std;

void setup()
{
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  delay(5000);
  /* Matrices initialization tests */
  Mat M1(2, 2, CV_8UC3, Scalar(0, 0, 255));
  cout << "M1 = " << endl << " " << M1 << endl << endl;
}

void loop()
{
  delay(2000);
  Serial.println(CV_VERSION);
  Serial.println("OpenCV works!");
}
