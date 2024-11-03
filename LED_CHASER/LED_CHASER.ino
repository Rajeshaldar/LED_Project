#define led1 0
#define led2 2
#define led3 4
#define led4 5
#define led5 15
#define led6 16
#define led7 17
#define led8 18
#define led9 19
#define led10 21
#define led11 22
#define led12 23
#define led13 25

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
}

void loop() {
  blink_1();
  blink_1();

  blink_2();
  blink_2();

  blink_3();
  blink_3();

  blink_4();
  blink_4();

  blink_5();
  blink_5();


  blink_6();
  blink_6();


  blink_7();
  blink_7();

  blink_8();
  blink_8();

  blink_9();
  blink_9();

  blink_10();
  blink_10();

  blink_11();
  blink_11();

  blink_12();
  blink_12();

  blink_13();
  blink_13();

  blink_14();
  blink_14();

  blink_15();
  blink_15();

  blink_16();
  blink_16();
}







// /////////////pattern 5///////////////////////
// void blink_5() {
//   int t = 70;

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, HIGH);
//   delay(t);
//   digitalWrite(led9, LOW);
//   digitalWrite(led10, HIGH);
//   delay(t);
//   digitalWrite(led10, LOW);
//   digitalWrite(led11, HIGH);
//   delay(t);
//   digitalWrite(led11, LOW);
//   digitalWrite(led12, HIGH);
//   delay(t);
//   digitalWrite(led12, LOW);
//   digitalWrite(led13, HIGH);
//   delay(t);


//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, HIGH);
//   delay(t);
//   digitalWrite(led9, LOW);
//   digitalWrite(led10, HIGH);
//   delay(t);
//   digitalWrite(led10, LOW);
//   digitalWrite(led11, HIGH);
//   delay(t);
//   digitalWrite(led11, LOW);
//   digitalWrite(led12, HIGH);
//   delay(t);


//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, HIGH);
//   delay(t);
//   digitalWrite(led9, LOW);
//   digitalWrite(led10, HIGH);
//   delay(t);
//   digitalWrite(led10, LOW);
//   digitalWrite(led11, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, HIGH);
//   delay(t);
//   digitalWrite(led9, LOW);
//   digitalWrite(led10, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);
//   digitalWrite(led1, LOW);
//   digitalWrite(led2, HIGH);
//   delay(t);

//   digitalWrite(led1, HIGH);
//   delay(t);

//   digitalWrite(led1, LOW);
//   digitalWrite(led2, LOW);
//   digitalWrite(led3, LOW);
//   digitalWrite(led4, LOW);
//   digitalWrite(led5, LOW);
//   digitalWrite(led6, LOW);
//   digitalWrite(led7, LOW);
//   digitalWrite(led8, LOW);
//   digitalWrite(led9, LOW);
//   digitalWrite(led10, LOW);
//   digitalWrite(led11, LOW);
//   digitalWrite(led12, LOW);
//   digitalWrite(led13, LOW);
// }

/////////////pattern 6///////////////


/////////////pattern 8/////////////////////////////

/////////////pattern 9/////////////////////////////
void blink_9() {
  int t = 70;

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

/////////////pattern 10///////////////////////////
void blink_10() {
  int t = 100;


  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}

/////////////pattern 11//////////////////////////////
void blink_11() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);

  digitalWrite(led3, HIGH);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led12, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  digitalWrite(led11, LOW);
  delay(t);

  digitalWrite(led12, LOW);
  delay(t);

  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led13, HIGH);
  delay(t);

  digitalWrite(led12, HIGH);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led12, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led11, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led3, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

/////////////pattern 12////////////////////
void blink_12() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led12, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led11, HIGH);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led9, HIGH);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

/////////////pattern 13////////////////////
void blink_13() {
  int t = 90;
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}
/////////////pattern 14/////////////
void blink_14() {
  int t = 80;

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

/////////////pattern 15////////////////////////
void blink_15() {
  int t = 80;
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}

void blink_16() {
  int t = 80;
}
