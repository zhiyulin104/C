

int pinA = 3;      //Arduino pin 3
int pinB = 4;      //Arduino pin 4..
int pinC = 5;
int pinD = 6;
int pinE = 7;
int pinF = 8;
int pinG = 9;
boolean numberLED[10][7] = {
                             {1,1,1,1,1,1,0}, //0
                             {0,1,1,0,0,0,0}, //1
                             {1,1,0,1,1,0,1}, //2
                             {1,1,1,1,0,0,1}, //3
                             {0,1,1,0,0,1,1}, //4
                             {1,0,1,1,0,1,1}, //5
                             {1,0,1,1,1,1,1}, //6
                             {1,1,1,0,0,0,0}, //7
                             {1,1,1,1,1,1,1}, //8
                             {1,1,1,1,0,1,1}, //9
                           };

//show the specific number on num-LED for 0 ~ 9 according to the inputs                    
void ShowNumber(int num);

void setup() {
  // declare the ledPin as an OUTPUT:
  //Serial.begin(9600);
  pinMode( pinA, OUTPUT );  
  pinMode( pinB, OUTPUT );  
  pinMode( pinC, OUTPUT );  
  pinMode( pinD, OUTPUT );  
  pinMode( pinE, OUTPUT );  
  pinMode( pinF, OUTPUT );  
  pinMode( pinG, OUTPUT );  

}

void loop() {
    // read the value from the sensor:
    //sensorValue = analogRead( sensorPin );    
  
    //Serial.println( sensorValue );
  
    //show the number from 0 to 9
    for( int i = 0; i <= 9; i++ )
    {
          ShowNumber(i);
          delay(500);
    }
  
    delay(60);                  
}

void ShowNumber( int num )
{
    digitalWrite(  pinA, numberLED[num][0]  );
    digitalWrite(  pinB, numberLED[num][1]  );
    digitalWrite(  pinC, numberLED[num][2]  );
    digitalWrite(  pinD, numberLED[num][3]  );
    digitalWrite(  pinE, numberLED[num][4]  );
    digitalWrite(  pinF, numberLED[num][5]  );
    digitalWrite(  pinG, numberLED[num][6]  );
  
    return;
}

