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
  pattern1(); // Sequential Chaser
  pattern2(); // Inverse Chaser 
  pattern3(); // Sequential & Inverse Chaser 
  pattern4(); // Outer-to-Inner Glow
  pattern5(); // Inner-to-Outer Glow
  pattern6(); // Snake Effect
  pattern7(); // LED Waves
  pattern8(); // Heartbeat Effect
  pattern9(); // Sequentially with a delay
  pattern10(); // Odd Even Chaser
  pattern11(); // Cascade Glow
  pattern12(); // Cascade Glow reverse
  pattern13(); // Forward-Backward Cascade Glow
}

// Pattern1: Sequential Chaser
void pattern1() {
  int time = 100;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
  }
}

// Pattern2: Inverse Chaser 
void pattern2() {
  int time = 100;  
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = NUM_LEDS - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(time); 
      digitalWrite(ledPins[i], LOW);
    }
  }
}

// Pattern3: Sequential & Inverse Chaser (Fast)
void pattern3() {
  int time = 50;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
    for (int i = NUM_LEDS - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
  }
}

// Pattern4: Outer-to-Inner Glow
void pattern4() {
  int time = 100;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS / 2; i++) {
      digitalWrite(ledPins[i], HIGH);
      digitalWrite(ledPins[NUM_LEDS - 1 - i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
      digitalWrite(ledPins[NUM_LEDS - 1 - i], LOW);
    }
  }
}

// Pattern5: Inner-to-Outer Glow
void pattern5() {
  int time = 100;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = NUM_LEDS / 2 - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      digitalWrite(ledPins[NUM_LEDS - 1 - i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
      digitalWrite(ledPins[NUM_LEDS - 1 - i], LOW);
    }
  }
}

// Pattern6: Snake Effect
void pattern6() {
  int time = 50;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      if (i > 0) {
        digitalWrite(ledPins[i - 1], LOW);
      }
    }
    digitalWrite(ledPins[NUM_LEDS - 1], LOW); // Turn off the last LED
  }
}

// Pattern7: LED Waves
void pattern7() {
  int time = 75;
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
    }
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], LOW);
      delay(time);
    }
  }
}

// Pattern8: Heartbeat Effect
void pattern8() {
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(100);
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(100);
  }
}

// Pattern9: Sequentially with a delay
void pattern9() {
  int time = 200; 
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
  }
}

// Pattern10: Odd Even Chaser
void pattern10() {
  int time = 100;  
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i += 2) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
    for (int i = 1; i < NUM_LEDS; i += 2) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
      digitalWrite(ledPins[i], LOW);
    }
  }
}

// Pattern11: Cascade Glow
void pattern11() {
  int time = 100; 
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
    }
    for (int i = NUM_LEDS - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], LOW);
      delay(time);
    }
  }
}

// Pattern12: Cascade Glow reverse
void pattern12() {
  int time = 100;  
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = NUM_LEDS - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
    }
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], LOW);
      delay(time);
    }
  }
}

// Pattern13: Forward-Backward Cascade Glow
void pattern13() {
  int time = 100;  
  for (int repeat = 0; repeat < 3; repeat++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(time);
    }
    for (int i = NUM_LEDS - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], LOW);
      delay(time);
    }
  }
}








