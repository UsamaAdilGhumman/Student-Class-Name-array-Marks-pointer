#include"Student.h"
#include<cstring>
Student::Student()
{
	this->id = 0;
	this->marks = NULL;
	this->name[20] = {'\0'};
}
Student::Student(int id, char name[], int *marks)
{
	setID(id);
	setName(name);
	setMarks(marks);
}
void Student::setID(int id)
{
	this->id = id;
}
int Student::getID()
{
	return this->id;
}
void Student::setName(char name[20])
{
	*(this->name) = *name;
}
char Student::getName()
{
	return *name;
}
void Student::setMarks(int *marks)
{
	this->marks = new int[4];
	this->marks = marks;
}
int* Student::getMarks()
{
	return this->marks;
}
void Student::Display()
{
	cout << "Name : " << getName();
	cout << "ID : " << getID();
	cout << "Marks : ";
	for (int i = 0; i < 4; i++)
	{
		cout <<marks[i];
	}
}
Student::~Student()
{
	delete marks;
}