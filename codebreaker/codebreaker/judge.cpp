#include"judge.h"
#include<iostream>

judge:: judge()
{
	result.hit = 0;
	result.blow = 0;
}

void judge::compare(const int* answer, const int* input)
{
	result.hit = 0;
	result.blow = 0;
	for (int i = 0; i < 4; i++)
	{
		if (answer[i] == input[i])
		{
			result.hit++;//Œ…‚à”‚à‚ ‚Á‚Ä‚¢‚éê‡‚É‰ÁZ
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j && answer[i] == input[j])
			{
				result.blow++; //Œ…‚ªˆá‚¤‚ª”‚ª‚ ‚Á‚Ä‚¢‚éê‡‚É‰ÁZ
			}
		}
	}
}

const judgeresult& judge::getResult()const
{
	return result;
}