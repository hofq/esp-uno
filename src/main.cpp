#define btn 18
int btnstate = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(btn, INPUT);


}

void loop() {
  
btnstate = digitalRead(btn);
if (btnstate == 1) {
  Serial.println("Button is Pressed.");
}
delay(300);



}
