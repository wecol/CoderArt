#include "stdafx.h"
#include "SortMethods.h"


SortMethods::SortMethods()
{
}

void SortMethods::BarelSorter(int *Array ,int length)
{
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (max < Array[i])
			max = Array[i];

	}

	int *Barell = new int[max];
	for (int i = 0; i < max; i++)
	{
		Barell[i] = 0;
		int kk = 0;
	}

	for (int i = 0; i < length; i++)
	{
		int j = Array[i]-1;
		Barell[j]++;
		int jj = 0;
	}

	int k = 0;
	for (int i = 0; i < max; ++i)
	{
		for (int j = 0; j < Barell[i];j++)
		{
			Array[k] = i+1;
			k++;
		}
	}

	

}
SortMethods::~SortMethods()
{
}
