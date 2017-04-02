#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRD=0xff;
int a[]={0x02,0x04,0x08,0x01};
int b[]={0x03,0x06,0x0c,0x09};
while(1)
{
for (int i=0;i<4;i++)
{
/*PORTD=a[i];
_delay_ms(2000);
*/
for (int k=0;k<5;k++)
{
_delay_ms(100);
switch (i)
{
case 1:PORTD=a[k];
_delay_ms(100);break;
case 2:PORTD=b[k];
_delay_ms(100);break;
case 3:PORTD=a[k];
_delay_ms(100);PORTD=b[k];
_delay_ms(100);break;

}

}



}
}
}
