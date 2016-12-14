// i need speed and time
//number of blobs vary the speed of the rotation
//time of the stop vary the direction of the rotation

int sensorValue = 0;//1-1023 mapped into a range from 0-255
int transistorPin = 3;//send to transistor

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(transistorPin, OUTPUT);
}

void loop() {
   // if we get a valid byte, read analog ins:
  while (Serial.available() > 0) {
    long val = Serial.parseInt(); // assume an integer
    if (Serial.read() == '\n') {
      Serial.println(val);
      delay(1000);
//      sensorValue = val /4 ;
//      analogWrite(transistorPin, sensorValue);
//      
//        if (sensorValue >= 120)
//        {
//          //example
//          digitalWrite(8, HIGH);
//          digitalWrite(9, LOW);
//        }
//      
//        else
//        { 
//          digitalWrite(9, HIGH);
//          digitalWrite(8, LOW);
//        }
//      
     }
  }
    
}
 

