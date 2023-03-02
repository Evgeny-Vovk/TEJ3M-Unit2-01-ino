/* Copyright(c) 2023 Evgeny Vovk All rights reserved.
   Created by : Evgeny Vovk
   Created on : Fabruary 2023
   TEJ3M-Unit2-01.ino File.
 */
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
