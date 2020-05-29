//ZODAIC SIGNAL

#include<stdio.h>
int main ()
{
	int m, d;

	printf("Enter your the number of your birth month:\n");
	scanf("%d",&m);

	printf("Enter the day of your birth:\n");
	scanf("%d",&d);

	if ((m == 12 && d >= 22) || (m == 1 && d <= 19))
	{
		printf("Your Zodiac Sign is Capricorn\n");
	}
	else if ((m == 1 && d >=20) || (m == 2 && d <= 17))
	{
		printf("Your Zodiac Sing is Aquarius\n");
	}
	else if ((m == 2 && d >= 10 ) || (m == 3 && d <= 19))
	{
		printf("Your Zodiac Sing is Pisces\n");
	}
	else if ((m == 3 && d >= 20 ) || (m == 4 && d <= 19))
	{
		printf("Your Zodiac Sing is Aries\n");
	}
	else if ((m == 4 && d >= 20 ) || (m == 5 && d <= 19))
	{
		printf("Your Zodiac Sing is Taurus\n");
	}
	else if ((m == 5 && d >= 21 ) || (m == 6 && d <= 20))
	{
		printf("Your Zodiac Sing is Gemini\n");
	}
	else if ((m == 6 && d >= 21 ) || (m == 7 && d <= 22))
	{
		printf("Your Zodiac Sing is Cancer\n");
	}
	else if ((m == 7 && d >= 23 ) || (m == 8 && d <= 22))
	{
		printf("Your Zodiac Sing is Leo\n");
	}
	else if ((m == 8 && d >= 23 ) || (m == 9 && d <= 22))
	{
		printf("Your Zodiac Sing is Virgo\n");
	}
	else if ((m == 9 && d >= 23 ) || (m == 10 && d <= 22))
	{
		printf("Your Zodiac Sing is Libra\n");
	}
	else if ((m == 10 && d >= 18 ) || (m == 11 && d <= 21))
	{
		printf("Your Zodiac Sing is Scorpio\n");
	}
	else if ((m == 11 && d >= 22 ) || (m == 12 && d <= 21))
	{
		printf("Your Zodiac Sing is Sagitarius\n");
	}

	return 0;
}
