
int dioda = 13;
int przerwa = 500;
int krotki_sygnal=100;
int dlugi_sygnal = 700;
void setup(){
    pinMode(dioda, OUTPUT);
}
void loop(){
/* litera H */
      for (int i = 0; i < 4; i = i + 1)
      {
        digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);
      }
    delay(3000);
/* litera E */
        digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);

    delay(3000);
/* litera L */
            digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);

                digitalWrite(dioda, HIGH);
        delay(dlugi_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);

      for (int i = 0; i < 2; i = i + 1)
      {
        digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);
      }
    delay(3000);
    /* litera P */
                digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);
              for (int i = 0; i < 2; i = i + 1)
      {
        digitalWrite(dioda, HIGH);
        delay(dlugi_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);
      }
                      digitalWrite(dioda, HIGH);
        delay(krotki_sygnal);
        digitalWrite(dioda, LOW);
        delay(przerwa);

         delay(10000);

}
