#include "arduino.h"

class Blink {
private:
  int port;
  int blink;
  int sleep;
public:
  Blink(){}

  Blink(int port){
    this->port = port;
  }

  Blink(int port, int blink, int sleep) {
    this->port = port;
    this->blink = blink;
    this->sleep = sleep;
  }

  void doBlink() {
    digitalWrite(port, HIGH);
    delay(this->blink);
  }

  void doSleep() {
    digitalWrite(port, LOW);
    delay(this->sleep);
  }

  void doBlink(int millis) {
    digitalWrite(port, HIGH);
    delay(millis);
  }

  void doSleep(int millis) {
    digitalWrite(port, LOW);
    delay(millis);
  }
};
