#include <wiringPi.h>
int main(void)
{
	wiringPiSetup();
	pinMode(26, OUTPUT);
	for(;;)
	{
		digitalWrite(26, HIGH);
		delay(500);
		digitalWrite(26, LOW);
		delay(500);
	}
}
