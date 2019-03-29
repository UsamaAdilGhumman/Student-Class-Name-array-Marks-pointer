#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student();
	explicit Student(int, char[], int*);
	~Student();
	void setID(int);
	int getID();
	void setName(char[]);
	char getName();
	void setMarks(int*);
	int* getMarks();
	void Display();
private:
	int id, *marks;
	char name[20];
};