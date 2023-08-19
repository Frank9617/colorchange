// int led = 13;
// int buttonPin = 11;
// bool valor;

// void setup() {
//   pinMode(led, OUTPUT);
//   pinMode(buttonrPin, INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   valor = digitalRead(buttonPin);

//   if (valor == true) {
//     digitalWrite(led, HIGH);
//   } else {
//     digitalWrite(led, LOW);
//   }

//   Serial.println(valor, DEC);

//   delay(100);  
// }



// const int ledPin = 13;
// const int sensorPin = 11;

// void setup() {
//   pinMode(ledPin, OUTPUT);
//   pinMode(sensorPin, INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   int sensorValue = digitalRead(sensorPin);

//   digitalWrite(ledPin, sensorValue);

//   Serial.println(sensorValue, DEC);

//   delay(100);  
// }



// int led = 11;


// void setup() {
//   pinMode(led, OUTPUT);
  
//   Serial.begin(9600);
// }

// void loop() {
  

  
//     digitalWrite(led, HIGH);  // Enciende el LED si el sensor está activo (pin 11 HIGH)
//     delay(1000);  // Espera 1 segundo

//     // Cambia el color del LED (rojo a verde)
//     digitalWrite(led, LOW);   // Apaga el LED
//     delay(10000);   // Espera 0.5 segundos
//     digitalWrite(led, HIGH);  // Enciende el LED (color verde)
//     delay(1000);  // Espera 1 segundo


//   Serial.println(sensorValue, DEC);

//   delay(100);  // Agrega un pequeño retraso para evitar lecturas rápidas y fluctuaciones
// }}
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool valor = digitalRead(11);  // Leer el valor del sensor en el pin 11

  
    digitalWrite(led, HIGH); // Enciende el LED (color 1)
    delay(10000);  // Espera 1 segundo
    digitalWrite(led, LOW);  // Apaga el LED
    delay(10000);   // Espera 0.5 segundos
    digitalWrite(led, HIGH); // Enciende el LED (color 2)
    delay(10000);  // Espera 1 segundo
    digitalWrite(led, LOW);  // Apaga el LED
    delay(10000);   // Espera 0.5 segundos
  

  Serial.println(valor, DEC);

  delay(100);  // Agrega un pequeño retraso para evitar lecturas rápidas y fluctuaciones
}

