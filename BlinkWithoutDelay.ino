// constants won't change. Used here to set a pin number:
const int pinHijau = 23 ;
const int pinKuning = 26 ;
const int pinMerah = 25 ;// the number of the LED pin

int hijauState = LOW;
int kuningState = LOW;
int merahState = LOW;

long startingTime = 0;        // awal led nyala pada 0ms
long interval = 10000;           // panjang millis

void setup() {
  //set lampunya sebagai output
  pinMode(pinHijau, OUTPUT);
  pinMode(pinKuning, OUTPUT);
  pinMode(pinMerah, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - startingTime > interval) {
    startingTime = currentMillis;
  }
    
    if (currentMillis - startingTime < 4500) {
      hijauState = HIGH;
      kuningState = LOW;
      merahState = LOW;
    }
    if(currentMillis - startingTime > 4500 && currentMillis - startingTime < 6000){
      hijauState = LOW;
      kuningState = HIGH;
      merahState = LOW;
    }
    if(currentMillis - startingTime > 6000){
      hijauState = LOW;
      kuningState = LOW;
      merahState = HIGH;
    }

    //merubah status led, nyala (high) atau mati (low)
    digitalWrite(pinHijau, hijauState);
    digitalWrite(pinKuning, kuningState);
    digitalWrite(pinMerah, merahState);
 }
