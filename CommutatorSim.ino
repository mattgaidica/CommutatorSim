// randomizes an inhibit BNC input to the TDT ACO32 commutator
// the commutator therefore must be set to rotate, and this pauses the rotation
// at random intervals

const int triggerPort = 13;
bool triggerState = false;
int randNumber;

void setup() {
  // setup IO
  pinMode(triggerPort,OUTPUT);
  // init ports
  digitalWrite(triggerPort,0);
  digitalWrite(triggerIndPort,0);
}

void loop() {
  randNumber = random(1,5) * 1000;
  // flip state
  triggerState = !triggerState;
  digitalWrite(triggerPort,triggerState);
  delay(randNumber);
}
