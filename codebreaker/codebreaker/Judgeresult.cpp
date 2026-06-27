#include "Judgeresult.h"
#include<iostream>

bool judgeresult::isClear() const
{
	return hit == 4;
}
//IsClearの確認
//int main()
//{
//	judgeresult test;
//
//	// テスト: クリアしていない場合
//	test.hit = 2;
//	test.blow = 1;
//	std::cout << "hit=2, blow=1 -> isClear: " << test.isClear() << std::endl; // 0 (false)
//
//	// テスト: クリアした場合
//	test.hit = 4;
//	test.blow = 0;
//	std::cout << "hit=4, blow=0 -> isClear: " << test.isClear() << std::endl; // 1 (true)
//
//	return 0;
//}
