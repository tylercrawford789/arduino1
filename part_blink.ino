int led1 = 8;
int led2 = 3;
int led3 = 5;
int button = 6;

void setup() {
  pinMode(button,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
    }

void loop() {
int ButtonStatus = digitalRead(button);


  digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led3,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);
  digitalWrite(led2,LOW);
  delay(100);
  digitalWrite(led3,LOW);
  delay(100);  
  }