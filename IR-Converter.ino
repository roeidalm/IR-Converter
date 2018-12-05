//2017.06.22
#include <IRremote.h>

using namespace std;

int receiverpin = 10;
//READ:
IRrecv irrecv(receiverpin);
decode_results results;

//SEND:
IRsend irsend;

void setup()
{
  //READ:
  pinMode(receiverpin, INPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
  Serial.println("Start");
}

void loop()
{ //
  // You need to Switch and number 123456 in the origenal hax code Send
  // You need to Switch and number 1-4 in the origenal hax code Racive
  //
  if (irrecv.decode(&results))
  {
    Serial.println("Read: " + String(results.value, HEX));
    irrecv.resume();

    switch (results.value)
    {
    case 0x7e8154ab:
      irsend.sendNEC(0x4b36d32c, 32);
      Serial.println("z1.Power->z1.Power");
      break;
    case 0x5ea138c7:      
      irsend.sendNEC(0x4bb6a05f, 32);
      Serial.println("z1.Mute up->z1.vollume Mute");
      break;
    case 0x5ea158a7:      
      irsend.sendNEC(0x4bb640bf, 32);
      Serial.println("z1.vollume up->z1.vollume up");
      break;
    case 0x5ea1d827:      
      irsend.sendNEC(0x4bb6c03f, 32);
      Serial.println("z1.vollume down->z1.vollume down");
      break;
    case 0x5ea1e21c:      
      irsend.sendNEC(0x4b3631ce, 32);
      Serial.println("z1.HDMI 1->z1.BD\DVD");
      break;
    case 0x5ea152ac:      
      irsend.sendNEC(0x4bb6708f, 32);
      Serial.println("z1.HDMI 2->z1.CBL\SAT");
      break;
    case 0x5ea1b24c:      
      irsend.sendNEC(0x4bb630cf, 32);
      Serial.println("z1.HDMI 3->z1.Strmbox");
      break;
    case 0x5ea10af4:
            irsend.sendNEC(0x4bb6b04f, 32);
      Serial.println("z1.HDMI 4->z1.PC");
      break;
    case 0x5ea10ef0:
      //z1.HDMI 5->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.HDMI 5");
      break;
    case 0x5ea1aa55:
      //z1.v AUX->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.v AUX");
      break;
    case 0x5ea1ca34:
      //z1.AV 1->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 1");
      break;
    case 0x5ea16a94:
      //z1.AV 2->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 2");
      break;
    case 0x5ea19a64:
      //z1.AV 3->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 3");
      break;
    case 0x5ea13ac4:
      //z1.AV 4->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 4");
      break;
    case 0x5ea1fa04:
      //z1.AV 5->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 5");
      break;
    case 0x5ea146b8:
      //z1.AV 6->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.AV 6");
      break;
    case 0x5ea100fe:
      //z1.BD DVD->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.BD DVD");
      break;
    case 0x5ea1c03e:
      //z1.TV->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.TV");
      break;
    case 0x5ea1609e:
      //z1.CD->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.CD");
      break;
    case 0x5ea1906e:
      //z1.Radio->z1.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z1.Radio");
      break;

  case 0x5ea1a25c:
      //z2.Power->z2.Power
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.Power");
      break;
    case 0x5ea13bc4:
      //z2.Mute up->z2.vollume Mute
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.vollume Mute");
      break;
    case 0x5ea15ba4:
      //z2.vollume up->z2.vollume up
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.vollume up");
      break;
    case 0x5ea1db24:
      //z2.vollume down->z2.vollume down
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.vollume down");
      break;
    case 0x5ea112ec:
      //z2.HDMI 1->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.HDMI 1");
      break;
    case 0x5ea1d22c:
      //z2.HDMI 2->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.HDMI 2");
      break;
    case 0x5ea1728c:
      //z2.HDMI 3->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.HDMI 3");
      break;
    case 0x5ea18a74:
      //z2.HDMI 4->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.HDMI 4");
      break;
    case 0x5ea18e70:
      //z2.HDMI 5->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.HDMI 5");
      break;
    case 0x5ea11be4:
      //z2.v AUX->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.v AUX");
      break;
    case 0x5ea12ad4:
      //z2.AV 1->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 1");
      break;
    case 0x5ea1ea14:
      //z2.AV 2->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 2");
      break;
    case 0x5ea15aa4:
      //z2.AV 3->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 3");
      break;
    case 0x5ea1ba44:
      //z2.AV 4->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 4");
      break;
    case 0x5ea106f8:
      //z2.AV 5->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 5");
      break;
    case 0x5ea1c638:
      //z2.AV 6->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.AV 6");
      break;
    case 0x5ea1807e:
      //z2.BD DVD->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.BD DVD");
      break;
    case 0x5ea120de:
      //z2.TV->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.TV");
      break;
    case 0x5ea1e01e:
      //z2.CD->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.CD");
      break;
    case 0x5ea150ae:
      //z2.Radio->z2.look the first connetion name
      irsend.sendNEC(0xFD708F, 32);
      Serial.println("z2.Radio");
      break;

    default:
      //Serial.println("default Mode: " + String(results.value));
      break;
    }
    Serial.println("End Loop ");
    irrecv.enableIRIn();
  }
}
