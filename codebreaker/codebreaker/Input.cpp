#include"Input.h"
#include<iostream>

Input::Input()
{
	for (int i = 0; i < 4; i++)
	{
		Number[i] = 0;
	}
}

void Input::getInput(int n[4])
{
	std::cout << "４つの数字を入力" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> Number[i];
	}
	for (int i = 0; i < 4; i++)
	{
		n[i] = Number[i];
	}
}
const int* Input::getNumber() const
{
	return Number;
}
//入力のテスト
//int main()
//{
//	Input input;
//	int nums[4];
//
//	input.getInput(nums);
//
//	std::cout << "入力された数値: ";
//	for (int i = 0; i < 4; ++i) {
//		std::cout << nums[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}