#include"Student.h"
int main()
{
	int id, *marks;
	char name[20];
	Student S1;
	cin.getline(name, 20);
	cin >> id;
	marks = new int[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> marks[i];
	}
	S1.setName(name);
	S1.setID(id);
	S1.setMarks(marks);
	S1.Display();
}