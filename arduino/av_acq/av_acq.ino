int pinState = 0;
String MyString = "0";
int camPin = 11;
int micPin = 12;
int MyDelay = 9926;

void setup() {
  // put your setup code here, to run once:
  pinMode(camPin, OUTPUT);
  pinMode(micPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    MyString = Serial.readString();
    pinState = MyString.toInt();
  }
  digitalWrite(micPin,pinState);
  digitalWrite(camPin,pinState);
  delayMicroseconds(MyDelay);
  digitalWrite(camPin,LOW);
  delayMicroseconds(MyDelay);

}