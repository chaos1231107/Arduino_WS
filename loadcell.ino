
#include "HX711.h"

#define calibration_factor -19500.0 //This value is obtained using the SparkFun_HX711_Calibration sketch

#define LOADCELL_DOUT_PIN  2 //DT
#define LOADCELL_SCK_PIN  3 //SCK
HX711 scale;
int cnt = 1;
void setup() {
  Serial.begin(115200);
  Serial.println("HX711 scale demo");

  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0

  Serial.println("Readings:");
}


void loop() {
 //int cnt = 1;
  //cnt
  Serial.print("Reading: ");
  float N = scale.get_units()*0.454; // lb value * ->kg * ->N
  Serial.print(N, 2); //scale.get_units() returns a float
  Serial.print(" KG"); //You can change this to kg but you'll need to refactor the calibration_factor
 // Serial.println(cnt);
  Serial.println();
  //cnt = cnt + 1;
 
  delay(12.5);
}
