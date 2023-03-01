#include "main.h"

char
*leet(char *s)
{
	char *a = "AaEeLlOoTt";
	char num[10] = "4433110077";
	int counta = 0;
	int count = 0;

	while(s[count])
	{
		while (a[counta])
		{
			if (s[count] == a[counta])
			{
				s[count] = num[counta];
			}
			counta++;
		}
		counta = 0;
		count++;

	}
	return(s);
}
