#include <Servo.h>

Servo thumbServo;  // Палец №1 (большой палец)
Servo indexServo;  // Палец №2 (указательный палец)
Servo middleServo; // Палец №3 (средний палец)
Servo ringServo;   // Палец №4 (безымянный палец)
Servo pinkyServo;  // Палец №5 (мизинец)

int thumbPin = 11;   // Пин для управления сервоприводом большого пальца
int indexPin = 8;   // Пин для управления сервоприводом указательного пальца
int middlePin = 7;  // Пин для управления сервоприводом среднего пальца
int ringPin = 5;    // Пин для управления сервоприводом безымянного пальца
int pinkyPin = 3;   // Пин для управления сервоприводом мизинца

int openPos = 0;    // Угол открытия пальцев
int closePos = 90;  // Угол закрытия пальцев

void setup() {
  thumbServo.attach(thumbPin);    // Подключение сервопривода большого пальца
  indexServo.attach(indexPin);    // Подключение сервопривода указательного пальца
  middleServo.attach(middlePin);  // Подключение сервопривода среднего пальца
  ringServo.attach(ringPin);      // Подключение сервопривода безымянного пальца
  pinkyServo.attach(pinkyPin);    // Подключение сервопривода мизинца

  // Добавлено
  pinMode(13, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);
}

void loop() {
  // Управление пальцами с помощью кнопок
  if (digitalRead(13) == HIGH) {  // Кнопка для управления большим пальцем
    thumbServo.write(closePos);  // Закрыть палец
  } else {
    thumbServo.write(openPos);   // Открыть палец
  }

  if (digitalRead(A5) == HIGH) {  // Кнопка для управления указательным пальцем
    indexServo.write(closePos);  // Закрыть палец
  } else {
    indexServo.write(openPos);   // Открыть палец
  }

  if (digitalRead(A3) == HIGH) {  // Кнопка для управления средним пальцем
    middleServo.write(closePos);  // Закрыть палец
  } else {
    middleServo.write(openPos);   // Открыть палец
  }

  if (digitalRead(A1) == HIGH) {  // Кнопка для управления безымянным пальцем
    ringServo.write(closePos);  // Закрыть палец
  } else {
    ringServo.write(openPos);   // Открыть палец
  }

  if (digitalRead(A0) == HIGH) {  // Кнопка для управления мизинцем
    pinkyServo.write(closePos);  // Закрыть палец
  } else {
    pinkyServo.write(openPos);   // Открыть палец
  }
}