#define btn 5
int btnstate = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(btn, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);


}

void loop() {
  
btnstate = digitalRead(btn);
if (btnstate == 1) {
  Serial.println("Button is Pressed.");

  if (digitalRead(LED_BUILTIN) == 1) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
} else {
  digitalWrite(LED_BUILTIN, LOW);
}
delay(50);



}
