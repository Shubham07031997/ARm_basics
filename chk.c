#include<lpc214x.h>

void delay( unsigned int d)
{ unsigned int x,y;
   for(x=0;x<d;x++)
   {
     for(y=0;y<1275;y++)
	 {
	 }
	 }
	 }
int main()
{  
PINSEL0=0x00000000;//pin 0.0 to 0.15 will work as general input output
 PINSEL1=0x00000000;
 PINSEL2=0x00000000;
 IO0DIR=0xffffffff; 
 IODIR1=0xffffffff;
 IO0SET=0x00000000;
 IOSET1=0x00000000;

 
  while(1)
  { 
  IOSET1=0xffffffff;
  delay(100);
  IOCLR1=0xffffffff;
  IOSET0=0xffffffff;
  delay(100);
  IOCLR0=0xffffffff;
  }

 }
