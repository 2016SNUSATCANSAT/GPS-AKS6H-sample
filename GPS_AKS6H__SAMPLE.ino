void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);  
  //Serial2.begin(9600);
}  
    char ch;
void loop(){
    if(Serial1.available()){
        ch = Serial1.read();
        Serial.write(ch);
    }
    else
      return;
}
