#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int greenLED = 4;
const int yellowLED = 3;
const int redLED = 2;
const int buzzer = 5;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Breathing Device");
  delay(2000);
}

void loop() {

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Session Started");
  delay(1000);

  unsigned long startTime = millis();
  unsigned long sessionDuration = 60000; // دقيقة

  while (millis() - startTime < sessionDuration) {

    // --- Inhale ---
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Inhale");
    digitalWrite(greenLED, HIGH);
    tone(buzzer, 1000);
    delay(4000);
    noTone(buzzer);
    digitalWrite(greenLED, LOW);

    // --- Hold ---
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hold");
    digitalWrite(yellowLED, HIGH);
    delay(7000);
    digitalWrite(yellowLED, LOW);

    // --- Exhale ---
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Exhale");
    digitalWrite(redLED, HIGH);
    tone(buzzer, 600);
    delay(8000);
    noTone(buzzer);
    digitalWrite(redLED, LOW);
  }

  // نهاية الجلسة
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Session Done!");
  delay(3000);
}