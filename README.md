Arduino Potentiometer LED & Buzzer Control

🇬🇧 English

A simple Arduino project that uses a potentiometer to control the brightness of an LED and turn a buzzer on or off according to the potentiometer value.

Components

* Arduino Uno
* Potentiometer
* LED
* 220Ω resistor
* Active buzzer (TMB12A05)
* Jumper wires
* Breadboard

Connections

Component	Arduino Pin
Potentiometer middle pin	A0
Potentiometer side pin	5V
Potentiometer other side pin	GND
LED	D3
Buzzer (+)	D8
Buzzer (-)	GND

How It Works

The Arduino reads the potentiometer value using analogRead().

The value is converted from 0–1023 to 0–255 and used with PWM to control the LED brightness.

When the potentiometer value goes above a certain level, the active buzzer is turned on.

Arduino Concepts Used

* analogRead()
* analogWrite()
* digitalWrite()
* pinMode()
* if / else
* PWM
* Analog input

⸻

🇹🇷 Türkçe

Bu proje, potansiyometre kullanarak LED parlaklığını ve buzzer’ın açılıp kapanmasını kontrol eden basit bir Arduino projesidir.

Kullanılan Malzemeler

* Arduino Uno
* Potansiyometre
* LED
* 220Ω direnç
* Aktif buzzer (TMB12A05)
* Jumper kablolar
* Breadboard

Bağlantılar

Komponent	Arduino pini
Potansiyometre orta bacak	A0
Potansiyometre dış bacak	5V
Potansiyometre diğer dış bacak	GND
LED	D3
Buzzer (+)	D8
Buzzer (-)	GND

Nasıl Çalışıyor?

Arduino, potansiyometreden gelen değeri analogRead() ile okur.

Okunan 0–1023 arasındaki değer 0–255 aralığına dönüştürülür ve PWM kullanılarak LED’in parlaklığı kontrol edilir.

Potansiyometre belirli bir seviyeyi geçtiğinde aktif buzzer çalışır.

Öğrenilen Arduino Konuları

* analogRead()
* analogWrite()
* digitalWrite()
* pinMode()
* if / else
* PWM
* Analog giriş
