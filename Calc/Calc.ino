String num1 = "";
String num2 = "";

bool opPressed = false;

#define Button0 0
#define Button1 1
#define Button2 2
#define Button3 3
#define Button4 4
#define Button5 5
#define Button6 6
#define Button7 7
#define Button8 8
#define Button9 9

#define ButtonD 10
#define ButtonSF 11
#define ButtonSN 12
#define ButtonE 13

void setup() {
  // put your setup code here, to run once:
  pinMode(Button0, INPUT_PULLUP);
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);
  pinMode(Button5, INPUT_PULLUP);
  pinMode(Button6, INPUT_PULLUP);
  pinMode(Button7, INPUT_PULLUP);
  pinMode(Button8, INPUT_PULLUP);
  pinMode(Button9, INPUT_PULLUP);

  pinMode(ButtonD, INPUT_PULLUP);
  pinMode(ButtonSF, INPUT_PULLUP);
  pinMode(ButtonSN, INPUT_PULLUP);

  Serial.begin(9600);
}

//Seperating the string into an array of ints 
int seperate(String num1) {
  int seperated[num1.length()];
  for(int i = 0; i < num1.length(); i++) {
    if(num1.charAt(i) == ".") {
      seperated[i] = -1;
    }
    else {
      seperated[i] = num1.charAt(i);
    }
  }
  return seperated;
}

int scientificNotation(int seperated[]) {
  bool back = false;
  bool found = false;
  //Checking to see if need to move forwards or backwards
  for(int i = 0; seperated[i] != -1; i++) {
    if(seperated[i] == 0) back = true; break;
  }
  if(back) {
    //Need to move backwards
    for(int i = 2; found == false; i++) {
      if(seperated[i] != 0) found = true; int zeros = i - 1; break;
    }
    if(found) {
      //Found where the decimal place needs to go
      //Now need num x 10 zeros - 1
      for(int i = 2; i < sizeof(seperated); i++) {
        if(seperated[i] != 0) {
          
        }
      }
    }
    else {
      //Already in Scientific Notation
    }
    
  }
  else {
    //Need to move forwards
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Button0) == LOW) {
    if (!opPressed) num1 += "0";
    else num2 += "0";
  }
  else if(digitalRead(Button1) == LOW) {
    if (!opPressed) num1 += "1";
    else num2 += "1";
  }
  else if(digitalRead(Button2) == LOW) {
    if (!opPressed) num1 += "2";
    else num2 += "2";
  }
  else if(digitalRead(Button3) == LOW) {
    if (!opPressed) num1 += "3";
    else num2 += "3";
  }
  else if(digitalRead(Button4) == LOW) {
    if (!opPressed) num1 += "4";
    else num2 += "4";
  }
  else if(digitalRead(Button5) == LOW) {
    if (!opPressed) num1 += "5";
    else num2 += "5";
  }
  else if(digitalRead(Button6) == LOW) {
    if (!opPressed) num1 += "6";
    else num2 += "6";
  }
  else if(digitalRead(Button7) == LOW) {
    if (!opPressed) num1 += "7";
    else num2 += "7";
  }
  else if(digitalRead(Button8) == LOW) {
    if (!opPressed) num1 += "8";
    else num2 += "8";
  }
  else if(digitalRead(Button9) == LOW) {
    if (!opPressed) num1 += "9";
    else num2 += "9";
  }
  else if(digitalRead(ButtonD) == LOW) {
    if (!opPressed) num1 += ".";
    else {
      //Trying to add a decimal to amount of sig figs
      //Give some error
    }
  }
  else if(digitalRead(ButtonE) == LOW) {
    //Done
  }
  else if(digitalRead(ButtonSF) == LOW) {
    int seperated = seperate(num1);
    if(opPressed) {
      //Already Done an action
      //Give some error
    }
    else {
      !opPressed;
    }
  }
  else if(digitalRead(ButtonSN) == LOW) {
    int seperated = seperate(num1);
    
  }
}
