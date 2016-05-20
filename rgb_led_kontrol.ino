int Kirmizi_Pin = 9;
 
int Yesil_Pin = 10;
 
int Mavi_Pin = 11;
 
void setup()
 
{
 
pinMode(Kirmizi_Pin, OUTPUT);
 
pinMode(Yesil_Pin, OUTPUT);
 
pinMode(Mavi_Pin, OUTPUT);
 
}
 
void loop()
 
{
 
Renk_Ayarla(255, 0, 0);
 
delay(1000);
 
Renk_Ayarla(0, 255, 0);
 
delay(1000);
 
Renk_Ayarla(0, 0, 255);
 
delay(1000);
 
Renk_Ayarla(255, 255, 0);
 
delay(1000);
 
Renk_Ayarla(80, 0, 80);
 
delay(1000);
 
Renk_Ayarla(0, 255, 255);
 
delay(1000);
 
Renk_Ayarla(255, 255, 255);
 
delay(1000);
 
}
 
void Renk_Ayarla(int Kirmizi_Renk, int Yesil_Renk, int Mavi_Renk)
 
{
 
Kirmizi_Renk = 255 - Kirmizi_Renk;
 
Yesil_Renk = 255 - Yesil_Renk;
 
Mavi_Renk = 255 - Mavi_Renk;
 
analogWrite(Kirmizi_Pin, Kirmizi_Renk);
 
analogWrite(Yesil_Pin, Yesil_Renk);
 
analogWrite(Mavi_Pin, Mavi_Renk);
 
}
