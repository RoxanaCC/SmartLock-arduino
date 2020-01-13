#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Time.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

byte zero1[8] = {
  B00111,
  B00111,
  B01100,
  B11000,
  B11000,
  B11000,
  B11001,
};

byte zero2[8] = {
  B11100,
  B11100,
  B00110,
  B00011,
  B01111,
  B01111,
  B10011,
};

byte zero3[8] = {  
  B11001,
  B11110,
  B11110,
  B11000,
  B01100,
  B00111,
  B00111,
};

byte zero4[8] = {
  B10011,
  B00011,
  B00011,
  B00011,
  B00110,
  B11100,
  B11100,
};

byte unu1[8] = {
  B00001,
  B00001,
  B00111,
  B00111,
  B00001,
  B00001,
  B00001,
};

byte unu2[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
};

byte unu3[8] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00111,
  B00111,
};

byte unu4[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B11100,
  B11100,
};

byte doi1[8] = {
  B00111,
  B00111,
  B01100,
  B11000,
  B11000,
  B11000,
  B00000,
};

byte doi2[8] = {
  B11100,
  B11100,
  B00110,
  B00011,
  B00011,
  B00111,
  B01100,
};

byte doi3[8] = {
  B00000,
  B00001,
  B00011,
  B00110,
  B01110,
  B11111,
  B11111,
};

byte doi4[8] = {
  B11100,
  B10000,
  B10000,
  B00000,
  B00000,
  B11111,
  B11111,
};

byte trei1[8] = {
  B11111,
  B11111,
  B00000,
  B00000,
  B00001,
  B00001,
  B00000,
};

byte trei2[8] = {
  B11111,
  B11111,
  B01100,
  B11100,
  B10000,
  B10000,
  B10000,
};

byte trei3[8] = {
  B00000,
  B00000,
  B00000,
  B11000,
  B11100,
  B00111,
  B00111,
};

byte trei4[8] = {
  B11100,
  B01100,
  B00111,
  B00011,
  B00111,
  B11100,
  B11100,
};

byte patru1[8] = {
  B00000,
  B00000,
  B00001,
  B00001,
  B00111,
  B00110,
  B11100,
};

byte patru2[8] = {
  B01100,
  B01100,
  B11100,
  B11100,
  B01100,
  B01100,
  B01100,
};

byte patru3[8] = {
  B11000,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte patru4[8] = {
  B01100,
  B11111,
  B11111,
  B01100,
  B01100,
  B01100,
  B01100,
};

byte cinci1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte cinci2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte cinci3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte cinci4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sase1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sase2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sase3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sase4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sapte1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sapte2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sapte3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte sapte4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte opt1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte opt2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte opt3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte opt4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte noua1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte noua2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte noua3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte noua4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

byte point[8] = {
  B00000,
  B00000,
  B01110,
  B01110,
  B01110,
  B00000,
  B00000,
};

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'0', 'F', 'E', 'D'}
};

byte rowPins[ROWS] = {37, 35, 33, 31}; 
byte colPins[COLS] = {45, 43, 41, 39}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

int stare = 0; //In ce stare se afla incuietoarea
              //0 - asteapta inceperea
              //1 - generaza si trimite nr random
              //2 - asteapta si verifica input-ul
int rasp = 0; //In ce stare se afla rezultatul
              //0 - nedefinit
              //1 - corect
              //2 - gresit
byte sequence[6];
byte seqLen = 6;
byte inputCount = 0; // pozitia din secventa
byte warning = 0; // numar de warning-uri
byte expect = 0; // input asteptat
char customKey;
byte errorPin = 22;
byte openPin = 23;
byte buzzPin = A13;
time_t t;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(errorPin, OUTPUT);
  pinMode(openPin, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.createChar(0, unu1);
  lcd.createChar(1, unu2);
  lcd.createChar(2, unu3);
  lcd.createChar(3, unu4);
  lcd.createChar(4, zero1);
  lcd.createChar(5, zero2);
  lcd.createChar(6, zero3);
  lcd.createChar(7, zero4);
  lcd.createChar(8, unu1);
  lcd.createChar(9, unu2);
  lcd.createChar(10, unu3);
  lcd.createChar(11, unu4);
  lcd.createChar(12, doi1);
  lcd.createChar(13, doi2);
  lcd.createChar(14, doi3);
  lcd.createChar(15, doi4);
  lcd.createChar(16, trei1);
  lcd.createChar(17, trei2);
  lcd.createChar(18, trei3);
  lcd.createChar(19, trei4);
  lcd.createChar(20, patru1);
  lcd.createChar(21, patru2);
  lcd.createChar(22, patru3);
  lcd.createChar(23, patru4);
  lcd.createChar(24, cinci1);
  lcd.createChar(25, cinci2);
  lcd.createChar(26, cinci3);
  lcd.createChar(27, cinci4);
  lcd.createChar(28, sase1);
  lcd.createChar(29, sase2);
  lcd.createChar(30, sase3);
  lcd.createChar(31, sase4);
  lcd.createChar(32, sapte1);
  lcd.createChar(33, sapte2);
  lcd.createChar(34, sapte3);
  lcd.createChar(35, sapte4);
  lcd.createChar(36, opt1);
  lcd.createChar(37, opt2);
  lcd.createChar(38, opt3);
  lcd.createChar(39, opt4);
  lcd.createChar(40, noua1);
  lcd.createChar(41, noua2);
  lcd.createChar(42, noua3);
  lcd.createChar(43, noua4);
  lcd.createChar(44, point);
}

void Open(){
  for(int x = 0; x < 3; x++){
    digitalWrite(openPin, HIGH); 
  	delay(300);
  	digitalWrite(openPin, LOW);
  	delay(100);
  }
}

void Warning(){
  for(int x = 0; x < 3; x++){
    digitalWrite(errorPin, HIGH); 
  	delay(300);
  	digitalWrite(errorPin, LOW);
  	delay(100);
  }
}

void Alarm(){
  for(int x = 0; x < 7; x++){
    for(int hz = 440; hz < 1000; hz++){
      tone(buzzPin, hz, 50);
      delay(5);
    }
    for(int hz = 1000; hz > 440; hz--){
      tone(buzzPin, hz, 50);
      delay(5);
    } 
  }
}

void printLCD(int nr, int poz){
  
  byte print1 = nr*4;
  byte print2 = nr*4+1;
  byte print3 = nr*4+2;
  byte print4 = nr*4+3;
  
  if(poz == 1){
    lcd.setCursor(0, 0);
    lcd.write(byte(print1));
    lcd.write(byte(print2));
    lcd.setCursor(0, 1);
    lcd.write(byte(print3));
    lcd.write(byte(print4));
  }
  else if(poz == 2){
    lcd.setCursor(2, 0);
    lcd.write(byte(print1));
    lcd.write(byte(print2));
    lcd.setCursor(2, 1);
    lcd.write(byte(print3));
    lcd.write(byte(print4));
  }
  else if(poz == 3){
    lcd.setCursor(5, 0);
    lcd.write(byte(print1));
    lcd.write(byte(print2));
    lcd.setCursor(5, 1);
    lcd.write(byte(print3));
    lcd.write(byte(print4));
  }
  else if(poz == 4){
    lcd.setCursor(7, 0);
    lcd.write(byte(print1));
    lcd.write(byte(print2));
    lcd.setCursor(7, 1);
    lcd.write(byte(print3));
    lcd.write(byte(print4));
  }
  else if(poz == 5){
    lcd.setCursor(9, 0);
    lcd.print(nr);
  }
  else if(poz == 6){
    lcd.setCursor(10, 0);
    lcd.print(nr);
  }
  lcd.setCursor(4, 0);
  lcd.print(byte(44));
  lcd.setCursor(4, 1);
  lcd.print(byte(44));
  
  lcd.setCursor(11, 0);
  lcd.print('"');
}

void loop() {
  Serial.write(customKey);
  if (stare == 0){
    customKey = customKeypad.getKey(); // Citirea caracterului de la keypad
    if(customKey == 'F'){
      stare = 1; 
    }
  }
  else if (stare == 1){
    randomSeed(analogRead(A8)); // Generarea parolei
    for(int i = 0; i < 6; i++){
      sequence[i] = random(10);
    }
    Serial1.write(sequence, seqLen); // Trimiterea parolei prin bluetooth
    inputCount = 0;
    warning = 0;
    rasp = 0;
    stare =2;
  }
  else if (stare == 2){
    customKey = customKeypad.getKey();
    expect = sequence[inputCount];
    if(customKey != NO_KEY){ // Un buton este apasat
      if(customKey == expect){
        rasp = 1;
      }
      else{
        rasp = 2;
      }
    }
    else if(rasp != 0 && customKey == NO_KEY){ // Sa dat drumul la buton
      if(rasp == 1){
        inputCount++;
        if(inputCount == seqLen){
          Open();
        }
      }
      else if(rasp == 2){
        inputCount = 0;
        warning++;
        if(warning == 3){
          Alarm();
        }
        else{
          Warning();
        }
      }
      rasp = 0;
    }
  }
  time_t t = now();
  printLCD((hour(t)/10), 1);
  printLCD((hour(t)%10), 2);
  printLCD((minute(t)/10), 3);
  printLCD((minute(t)%10), 4);
  printLCD((second(t)/10), 5);
  printLCD((second(t)%10), 6);
  
}
