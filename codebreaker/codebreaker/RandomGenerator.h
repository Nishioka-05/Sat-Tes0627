#ifndef RandomGenerator_H
#define RandomGenerator_H

#include<random>

class RandomGenerator
{
private:
	int number[4];
	std::random_device rd;
	std::mt19937 gen;
	std::uniform_int_distribution<> dist;

public:
	RandomGenerator();
	void generate();
	const int* getNumber() const;
};



#endif
#pragma once
