#include"Marks.h"
Marks::Marks()
{
	this->English = 0;
	this->OOP = 0;
	this->Calculus = 0 ;
	this->Physics = 0;
}
Marks::Marks(int English, int OOP, int Calculus, int Physics)
{
	setEnglish(English);
	setOOP(OOP);
	setCalculus(Calculus);
	setPhysics(Physics);
}
void Marks::setEnglish(int English)
{
	this->English = English;
}
void Marks::setOOP(int OOP)
{
	this->OOP = OOP;
}
void Marks::setCalculus(int Calculus)
{
	this->Calculus = Calculus;
}
void Marks::setPhysics(int Physics)
{
	this->Physics = Physics;
}
int Marks::getEnglish() const
{
	return this->English;
}
int Marks::getOOP() const
{
	return this->OOP;
}
int Marks::getCalculus() const
{
	return this->Calculus;
}
int Marks::getPhysics() const
{
	return this->Physics;
}
void Marks::Display() const
{
	cout << "English : " << getEnglish() << endl;
	cout << "OOP : " << getOOP() << endl;
	cout << "Calculus :  " << getCalculus() << endl;
	cout << "Physics : " << getPhysics() << endl;

}
int Marks::Average() const
{
	return (getEnglish() + getOOP() + getCalculus() + getPhysics()) / 4;
}