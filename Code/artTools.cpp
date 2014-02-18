#include "stdafx.h"
void letfShiftOne(char *s, int n)
{
	char holder = s[0];
	for (int i = 1; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[n - 1] = holder;

}

void leftShift(char *s, int n, int m)
{
	while (m--)
	{
		letfShiftOne(s, n);

	}
}