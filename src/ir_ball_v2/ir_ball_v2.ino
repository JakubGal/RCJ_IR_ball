//just qvick test made in 5 minutes will be improved soon

// #include <Adafruit_NeoPixel.h>
#include <Wire.h>
//#include <Adafruit_LIS3DH.h>
//#include <Adafruit_Sensor.h>
#include <math.h>

const int buzzerPin = 1;
//Adafruit_LIS3DH lis = Adafruit_LIS3DH();
//2 3 4 5
void setup(void) {
  pinMode(2, OUTPUT); //1/4
  pinMode(3, OUTPUT); //1/16
  pinMode(4, OUTPUT); //1/64
  pinMode(5, OUTPUT); //1
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  //lis.begin(0x18);
  //lis.setRange(LIS3DH_RANGE_4_G);
  //lis.setDataRate(LIS3DH_DATARATE_50_HZ);

}

void loop() {
  /*lis.read();
    if(abs(lis.x)+abs(lis.y)+abs(lis.z)>11000){
    //moving
    }
    else{
    //not moving
    }*/

  /*tone(buzzerPin, 1000); // A4
    delay(1000);

    tone(buzzerPin, 1500); // B4
    delay(1000);

    tone(buzzerPin, 2000); // C4
    delay(1000);

    tone(buzzerPin, 4000); // D4
    delay(1000);
    tone(buzzerPin, 8000); // E4
    delay(1000);

    tone(buzzerPin, 15000); // F4
    delay(1000);
    tone(buzzerPin, 20000); // G4
    delay(1000);


    noTone(buzzerPin);
    delay(1000);*///25us  //3.7us
  for (int i = 0; i < 8; i++) {
    digitalWrite(5, HIGH);
    delayMicroseconds(8.8) ;
    digitalWrite(5, LOW);
    delayMicroseconds(8.8) ;
  }
  for (int i = 0; i < 4; i++) {
    digitalWrite(2, HIGH);
    delayMicroseconds(8.8) ;
    digitalWrite(2, LOW);
    delayMicroseconds(8.8) ;
  }
  for (int i = 0; i < 4; i++) {
    digitalWrite(3, HIGH);
    delayMicroseconds(8.8) ;
    digitalWrite(3, LOW);
    delayMicroseconds(8.8) ;
  }
  for (int i = 0; i < 4; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(8.8) ;
    digitalWrite(4, LOW);
    delayMicroseconds(8.8) ;
  }
  delayMicroseconds(346);
}
