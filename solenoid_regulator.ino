//Arduino code to turn solenoid valve on/off to precisely regulate distillation column reflux ratio

int solenoidPin = 4;    //Output pin on Arduino
 
void setup() {
  pinMode(solenoidPin, OUTPUT);  //Set pin as an output
}
 

#define SECOND 1000UL
#define MINUTE (SECOND * 60UL)
#define HOUR (MINUTE * 60UL)

void loop() {
  // Infinite loop.
  //Waiting time in milliseconds. Use variables defined above.
  //For example, if you want the solenoid on for 15 minutes, write delay(MINUTE*15);
  digitalWrite(solenoidPin, HIGH);    //Switch Solenoid ON
  delay(HOUR * 3);                      
  digitalWrite(solenoidPin, LOW);     //Switch Solenoid OFF
  delay(HOUR * 4);                      
}

//LP

