#include <Arduino.h>
#include <LiquidCrystal.h>
#include "DHT.h"
#define DHT_PIN 7

DHT dht;
LiquidCrystal lcd(10, 11, 12, 2, 3, 4, 5);

void setup(){

dht.setup(DHT_PIN);
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("T: ");
lcd.setCursor(0,1);
lcd.print("H: ");
}

void loop(){

int temp = dht.getTemperature();
int humid = dht.getHumidity();
lcd.setCursor(2,0);
lcd.print(temp);
lcd.print("C");
lcd.setCursor(2,1);
lcd.print(humid);
lcd.print("%");
delay(1500);
}
