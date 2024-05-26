//Incluir os arquivos da biblioteca
#define BLYNK_PRINT Serial
//Biblioteca para conectar o módulo ESP8266 a uma rede Wi-Fi
#include <ESP8266WiFi.h>
//Biblioteca para uso do ESP8266 na plataforma Blynk
#include <BlynkSimpleEsp8266.h> 

//Auth token
#define BLYNK_AUTH_TOKEN "########"

//Armazena o AuthToken
char auth[] = BLYNK_AUTH_TOKEN;
//Rede WiFi
char ssid[] = "########";
//Senha da rede WiFi
char pass[] = "########"; 

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D3, param.asInt());
}

void setup() {
  //Define o pino do LED como pino de saída
  pinMode(D3, OUTPUT);
  //Inicializa a biblioteca Blynk
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Execute a biblioteca Blynk
  Blynk.run();
}
