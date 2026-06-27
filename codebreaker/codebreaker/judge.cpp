#include"judge.h"
#include<iostream>

judge:: judge()
{
	result.hit = 0;
	result.blow = 0;
}

void judge::compere(const int* answer, const int* input)
{
	result.hit = 0;
	result.blow = 0;
	for (int i = 0; i < 4; i++)
	{
		if (answer[i] == input[i])
		{
			result.hit++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j && answer[i] == input[j])
			{
				result.blow++;
			}
		}
	}
}

const judgeresult& judge::getResult()const
{
	return result;
}