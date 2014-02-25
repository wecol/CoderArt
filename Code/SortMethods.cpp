#include "stdafx.h"
#include "SortMethods.h"


SortMethods::SortMethods()
{
}
void SortMethods::QuickSorter(int *Array, int left, int right)
{
	int i = left;
	int j = right;
	int flag = Array[left];
	while (i<j)
	{
		while (i<j&&Array[j]>=flag)
		{
			j--;

		}

		if (i < j)
		{
			Array[i++] = Array[j];
		}


		while (i < j&&Array[i] <=flag)
		{
			i++;
		}

		if (i < j)
		{
			Array[j--] = Array[i];
		}


	}
	Array[i] = flag;
	if (left<i)
		QuickSorter(Array, left, i - 1);
	if (right>i)
		QuickSorter(Array, i + 1, right);
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
