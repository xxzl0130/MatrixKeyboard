#include <MatrixKeyboard.h>

MatrixKeyboard keys(2,5,6,9);
uint8_t buf[16], count;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  keys.getKeyPresing(buf, &count);
  for(int i = 0;i < count;++i)
  {
    Serial.print("Key ");
    Serial.print(i + 1);
    Serial.print(":row ");
    Serial.print(buf[i] >> 4);
    Serial.print("  col ");
    Serial.println(buf[i] & 0x0f);
  }
  if(count != 0)
  {
    Serial.println("*****************");
  }
}
