#include "stdafx.h"
#include <string>
using namespace std;
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

void rotateShift(string &str, int m)
{
	int n = str.length();
	if (n < 0 || m < 0)
		return;
	if (m%n <= 0)
		return;
	int p1 = 0;
	int p2 = m;
	int k = n - m - n%m;
	while (k--)
	{
		swap(str[p1], str[p2]);
		p1++;
		p2++;

	}
	int r = n - p2;
	
	while (r--)
	{
		int j =p2;
		while (j>p1)
		{
			swap(str[j - 1], str[j]);
			j--;
		}
		p1++;
		p2++;
	}
	

}