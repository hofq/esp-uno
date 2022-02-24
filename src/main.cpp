#define R 25
#define G 33
#define B 32

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);


  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
}

void loop() {


  digitalWrite(G, LOW);
  delay(1000);
  digitalWrite(G, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(R, LOW);
  delay(1000); 
  digitalWrite(G, HIGH);
  digitalWrite(R, HIGH);
  digitalWrite(R, LOW);
  delay(1000);
  digitalWrite(R, HIGH);
  delay(1000);

}
