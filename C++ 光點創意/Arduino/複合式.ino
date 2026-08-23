int val;

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
// void Temperature_to_num(int num);

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
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);

}

void loop() {
    // read the value from the sensor:
    val = analogRead(A0);
    if (val < 450) {
      ShowNumber(0);
    }
    else if (val < 470) {
      ShowNumber(1);
    }
    else if (val < 490) {
      ShowNumber(2);
      analogWrite(10, 30);
    }
    else if (val < 510) {
      ShowNumber(3);
      analogWrite(10, 60);
    }
    else if (val < 530) {
      ShowNumber(4);
      analogWrite(10, 90);
    }
    else if (val < 550) {
      ShowNumber(5);
      analogWrite(10, 120);
    }
    else if (val < 570) {
      analogWrite(10, 130);
    }
    else if (val < 590) {
      ShowNumber(7);
      analogWrite(10, 140);
    }
    else if (val < 610) {
      ShowNumber(8);
      analogWrite(10, 150);
    }
    else {
      ShowNumber(9);
      analogWrite(10, 150);
    }
    
    delay(60);                  
}

// void temperature_to_num( int num) {
//     int numtwo;
//     numtwo = (num-350) / 20;
//     if (numtwo==10) {
//         numtwo = 9;
//     }
//     return (numtwo);
// }



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

