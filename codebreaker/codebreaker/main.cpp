#include"result.h"
#include"judge.h"
#include"Judgeresult.h"
#include"RandomGenerator.h"
#include"Input.h"
#include<iostream>


int main()
{
	RandomGenerator rg;
	judge j;
	result r;
	int count = 0;

	std::cout << "４桁の数あてゲームを開始" << std::endl;
	while (true)
	{
		Input input;
		int nums[4];
		input.getInput(nums);

		j.compare(rg.getNumber(), input.getNumber());
		const judgeresult& jr = j.getResult();
		r.print(jr);
		count++;

		if (jr.isClear())
		{
			std::cout << "クリア" << std::endl;
			std::cout << "正解までの試行回数" << count << std::endl;
			break;
		}
	}
	return 0;
}