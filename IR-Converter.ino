//2017.06.22

#include <IRremote.h>

using namespace std;

int receiverpin = 10;
//READ:
IRrecv irrecv(receiverpin);
decode_results results;

//SEND:
IRsend irsend;

void setup() {
  //READ:
  pinMode(receiverpin, INPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
  Serial.println("Start");
  delay(10000);
}

void loop() {
  //READ
  if (irrecv.decode(&results))
  {
    Serial.println("Read: " + (results.value, HEX));
    irrecv.resume();
    //
    // You need to Switch and number 123456 in the origenal hax code Send
    // You need to Switch and number 1-4 in the origenal hax code Racive
    //
    //SEND:
    if (results.value == 0xFDC23D) {
      //Power//
      irsend.sendNEC(0xFD708F, 32); //Power Code
      Serial.println("Power");
      //delay(250);
    }
    else if (results.value ==  0xFDC23D) {
      //Volume Up//
      irsend.sendNEC(0xFD708F, 32); //Volume Up Code
      Serial.println("Volume Up");
      //delay(250);
    }
    else if (results.value == 3) {
      //Volume Down//
      irsend.sendNEC(0x16630333, 32); //Volume Down Code
      Serial.println("Volume Down");
      //delay(250);
    }
    else if (results.value == 4) {
      //Netflix//
      irsend.sendNEC(0x16630333, 32); //Netflix Code
      Serial.println("Netflix");
      //delay(250);
    }
    else {
      Serial.println("default Mode: " + String(results.value));
      Serial.println("Delay 1500:");
      delay(1500);
      irsend.sendNEC(results.value, 32); //Netflix Code
      Serial.println("Sent");
    }
    delay(250);
    Serial.println("End Loop ");
    irrecv.enableIRIn();
  }
}
