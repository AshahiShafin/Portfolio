byte temp = 20;
char myArray[8];

void setup()
{
  Serial.begin(9600);
  bitPrint(temp);
}

void loop()
{
}

void bitPrint(byte temp)
{
  Serial.print("0b");
  for (byte i = 0; i < 8; i++)
  {
    Serial.print(bitRead(temp, i)? "1" : "0" );
    myArray[i] = bitRead(temp, i)? "1" : "0";
  }
  Serial.println();
}
