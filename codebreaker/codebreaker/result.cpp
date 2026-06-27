#include "result.h"
#include<iostream>

void result::print(const judgeresult& result) const
{
	std::cout << "ヒット: " << result.hit << "、ブロー: " << result.blow << std::endl;
}