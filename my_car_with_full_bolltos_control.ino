//Motor A
const int motorPin1  = 5; 
const int motorPin2  = 6; 
//Motor B
const int motorPin3  = 9; 
const int motorPin4  = 10;

const int led1 = 13;
const int led2 = 12;
 
int vSpeed;
int state;
void setup() 
{

   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);   
  Serial.begin(9600);
}

void loop()
{ 
if(Serial.available() >0)
  {
    state = Serial.read();
  }
   if (state == '0'){
      vSpeed=0; }
    else if (state == '1'){
      vSpeed=25;}
    else if (state == '2'){
      vSpeed=50;}
    else if (state == '3'){
      vSpeed=75;}
    else if (state == '4'){
      vSpeed=100;}
    else if (state == '5'){
      vSpeed=125;}
    else if (state == '6'){
      vSpeed=150;}
    else if (state == '7'){
      vSpeed=175;}
    else if (state == '8'){
      vSpeed=200;}
    else if (state == '9'){
      vSpeed=225;}
    else if (state == 'q'){
      vSpeed=255;}


if(state=='F')
{
  analogWrite(motorPin3, vSpeed);
analogWrite(motorPin4, 0);
}
else if(state=='B')
{
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
}
else if(state=='R')
{
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0); 
}
else if(state=='L')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
}
else if(state=='I')
{
 analogWrite(motorPin3, vSpeed);
 analogWrite(motorPin4, 0);
 analogWrite(motorPin1, vSpeed);
 analogWrite(motorPin2, 0); 
}
else if(state == 'G')
{
 analogWrite(motorPin3, vSpeed);
 analogWrite(motorPin4, 0);
 analogWrite(motorPin1, 0);
 analogWrite(motorPin2, vSpeed);
}
else if(state=='J')
{
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0); 
}

else if(state=='H')
{
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
}

else if(state == 'S')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);  
}

else if(state == 'W')
{
  digitalWrite(led1,HIGH);
}

else if(state == 'w')
{
  digitalWrite(led1,LOW);
}

else if(state == 'U')
{
  digitalWrite(led2,HIGH);
}

else if(state == 'u')
{
  digitalWrite(led2,LOW);
}









}
