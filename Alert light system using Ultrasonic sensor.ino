const int trig = 13;
const int echo = 12;
const int led1 = 6;
const int led2 = 5;
const int led3 = 4;
const int led4 = 3;
const int led5 = 2;

int duration = 0;
int distance = 0;


void setup() {
  // put your setup code here, to run once:
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, HIGH);
delay(100);
digitalWrite(trig, LOW);

if (distance <= 5)
{ 
digitalWrite( led1, HIGH);
}
else
{
digitalWrite(led1, LOW);
}

if (distance <= 10)
{ 
digitalWrite( led2, HIGH);
}
else
{
digitalWrite(led2, LOW);
}

if (distance <= 15)
{ 
digitalWrite( led3, HIGH);
}
else
{
digitalWrite(led3, LOW);
}

if (distance <= 20)
{ 
digitalWrite( led4, HIGH);
}
else
{
digitalWrite(led4, LOW);
}

if (distance <= 25)
{ 
digitalWrite( led5, HIGH);
}
else
{
digitalWrite(led5, LOW);
}
duration = pulseIn( echo, HIGH);
distance = (duration/2)/ 28.5;
Serial.println(distance);
}
