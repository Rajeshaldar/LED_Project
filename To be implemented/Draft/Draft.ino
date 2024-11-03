#include <Arduino.h>

// Define the number of LEDs
#define NUM_LEDS 13

// Define LED pins (change the values as per your connection)
const int ledPins[NUM_LEDS] = {0, 2, 4, 5, 15, 16, 17, 18, 19, 21, 22, 23, 25};

void setup() {
  // Set all LEDs as OUTPUT
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Turn off all LEDs initially
  }
}
void loop() {
  pattern1(); 
  pattern2(); 
}


//Pattern14: 
void pattern14() {
  int t = 70;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
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







// Pattern 4: Fade In/Out (On/Off Slowly)
// void pattern4() {
//   for (int brightness = 0; brightness <= 255; brightness++) {
//     for (int i = 1; i <= 13; i++) {
//       analogWrite(i == 13 ? led13 : i == 12 ? led12 : i == 11 ? led11 : i == 10 ? led10 : i == 9 ? led9 : i == 8 ? led8 : i == 7 ? led7 : i == 6 ? led6 : i == 5 ? led5 : i == 4 ? led4 : i == 3 ? led3 : i == 2 ? led2 : led1, brightness);
//     }
//     delay(60);
//   }
//   for (int brightness = 255; brightness >= 0; brightness--) {
//     for (int i = 1; i <= 13; i++) {
//       analogWrite(i == 13 ? led13 : i == 12 ? led12 : i == 11 ? led11 : i == 10 ? led10 : i == 9 ? led9 : i == 8 ? led8 : i == 7 ? led7 : i == 6 ? led6 : i == 5 ? led5 : i == 4 ? led4 : i == 3 ? led3 : i == 2 ? led2 : led1, brightness);
//     }
//     delay(5);
//   }
// }