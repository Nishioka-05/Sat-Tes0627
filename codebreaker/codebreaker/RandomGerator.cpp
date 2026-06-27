#include "RandomGenerator.h"
#include <iostream>

RandomGenerator::RandomGenerator() : gen(rd()), dist(0, 9) 
{
	generate();
}

void RandomGenerator::generate() 
{
	bool used[10] = { false };
	for (int i = 0; i < 4; ++i) 
	{
		//数字の重複を防ぎつつ数字を生成
		int n;
		do {
			n = dist(gen);
		} while (used[n]);
		used[n] = true;
		number[i] = n;
	}
}

const int* RandomGenerator::getNumber() const 
{
	return number;
}
//ランダム生成のテスト
//int main()
//{
//	RandomGenerator rg;
//	const int* nums = rg.getNumber();
//
//	std::cout << "生成された数値: ";
//	for (int i = 0; i < 4; ++i) {
//		std::cout << nums[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
