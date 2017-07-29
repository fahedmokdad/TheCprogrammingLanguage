#include <stdio.h>

//Fahrenheit to Celsius converter

int main()
{
	float fahrenheit, celsius;
	int lower, upper, step;
	
	lower = 0; //min temperature
	upper = 300; //max temperature
	step = 20; //change in temperature
	
	printf("F     C\n\n");
	fahrenheit = lower;
	while (fahrenheit <= upper)	{
		celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
		printf("%3.0f %6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}	
}
