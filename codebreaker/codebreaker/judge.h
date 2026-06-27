#ifndef Judge_H
#define Judge_H
#include "Judgeresult.h"

class judge
{
private:
	judgeresult result;
public:
	judge();
	void compere(const int* answer, const int* input);
	const judgeresult& getResult() const;
};

#endif