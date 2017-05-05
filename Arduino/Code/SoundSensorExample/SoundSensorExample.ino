
/*Sound Sensor Example*/
int led = 13;
int threshold = 500; //Change this value if you want change the sensibility of sensor
int sound;
int led_value;

void setup() 
{                
    pinMode(led, OUTPUT); 
    digitalWrite(led,LOW);  
    led_value=0;
}

void loop() 
{
    sound = analogRead(A0); // Reads the value from the Analog PIN A0
    if(sound>=threshold){
        led_value=!led_value;}
    digitalWrite(led, led_value);
    delay(100);
}


