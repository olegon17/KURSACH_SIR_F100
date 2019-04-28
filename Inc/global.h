#define MIN 5
#define SEC 0
#define MSEC 0

#define GPIOKEY GPIOB
#define BUTTON_1 GPIO_PIN_12
#define BUTTON_2 GPIO_PIN_13
#define BUTTON_3 GPIO_PIN_14


extern volatile unsigned short Enable_Player1;
extern volatile unsigned short Enable_Player2;
extern volatile enum {Timer1=0,Timer2=1,Off=2} Timer;
extern volatile unsigned short T1_min,T1_sec,T1_msec,T2_min,T2_sec,T2_msec;



static void clockTime(int x)
{
	switch(x)
	{
		case 0:
		{
			lcdPuts("0");
			break;
		}
		case 1:
		{
			lcdPuts("1");
			break;
		}
		case 2:
		{
			lcdPuts("2");
			break;
		}
		case 3:
		{
			lcdPuts("3");
			break;
		}
		case 4:
		{
			lcdPuts("4");
			break;
		}
		case 5:
		{
			lcdPuts("5");
			break;
		}
		case 6:
		{
			lcdPuts("6");
			break;
		}
		case 7:
		{
			lcdPuts("7");
			break;
		}
		case 8:
		{
			lcdPuts("8");
			break;
		}
		case 9:
		{
			lcdPuts("9");
			break;
		}
	}
}
