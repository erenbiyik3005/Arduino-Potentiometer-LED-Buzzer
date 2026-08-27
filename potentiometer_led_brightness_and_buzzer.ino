#define led 3
#define pot A0
#define buzzer 8

void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(pot,INPUT);

}

void loop() {
  int deger = analogRead(pot);
  int parlaklik = deger/4;

  analogWrite(led,parlaklik);

  if(deger>500){
    digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }

}
