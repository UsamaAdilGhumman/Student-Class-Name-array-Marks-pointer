#include<iostream>
using namespace std;
class Marks
{
	int English;
	int OOP;
	int Calculus;
	int Physics;
public:
	Marks();
	explicit Marks(int, int, int, int);
	void setEnglish(int);
	void setOOP(int);
	void setCalculus(int);
	void setPhysics(int);
	int getEnglish() const;
	int getOOP() const;
	int getCalculus() const;
	int getPhysics() const;
	void Display() const;
	int Average() const;
};