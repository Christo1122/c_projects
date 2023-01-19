#include <iostream>
using namespace std;


class person
{
	char name[40];
	int age;
	public:
		void getdata(void);
		void display(void);
};		

void person :: getdata(void)
{
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
}

void person :: display(void)
{
	cout << "\n Name: " << name << "\n Age: " << age;
}

int main()
{
	person a;
	a.getdata();
	a.display();
}
