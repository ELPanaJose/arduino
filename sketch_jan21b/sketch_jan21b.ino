void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}
void loop(){

  Serial.println("parpadea tx y l");
  digitalWrite(13, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(13, LOW);  // sets the digital pin 13 off
  delay(2000);       
  
}
