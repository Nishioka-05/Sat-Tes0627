#ifndef RandomGenerator_H
#define RandomGenerator_H

#include<random>

class RandomGenerator
{
private:
	int number[4]; // 4桁のランダムな数字を格納する配列
	std::random_device rd; // 乱数生成器の初期化
	std::mt19937 gen; // 乱数生成器
	std::uniform_int_distribution<> dist; // 0から9までの一様分布

public:
	RandomGenerator();
	void generate();
	const int* getNumber() const;
};



#endif
#pragma once
