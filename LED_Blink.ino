#define my_led 7

void setup() {
  Serial.begin(9600);
 pinMode(my_led,OUTPUT) ;// put your setup code here, to run once:

}

void loop() {
  digitalWrite(my_led,HIGH);
  Serial.println("LED is ON");
  digitalWrite(my_led,LOW);
  Serial.println("LED is OF");
  delay(1000);// put your main code here, to run repeatedly:

}