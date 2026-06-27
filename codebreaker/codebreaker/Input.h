#ifndef Input_H
#define Input_H

class Input
{
private:
	int Number[4];
public:
	Input();
	void getInput(int n[4]);
	const int* getNumber() const;
};
#endif