#include<iostream>
using namespace std;

//class Human
//{
//protected:
//	string name;
//	int age;
//public:
//	Human() {}
//	Human(string n, int a)
//	{
//		name = n;
//		age = a;
//		cout << "Human constructor";
//	}
//	void Print()
//	{
//		cout << "Name: " << name << "\tAge: " << age << endl;
//	}
//};
//
//class Student : public Human
//{
//	/*string name;
//	int age;*/
//	int year;
//	double Average;
//public:
//	Student() {}
//	Student(string n, int a, int y, double Av) : Human(n, a)
//	{
//		year = y;
//		Average = Av;
//		cout << "Student constructor";
//	}
//	void Print()
//	{
//		Human::Print();
//		cout << "Year: " << year << "\t Average: " << Average << endl;
//	}
//};
//
//class teacher : public Human {
//	string subject;
//	double sallay;
//	string academy;
//
//public:
//	teacher(string sub, double sal, string acad) {
//
//		subject = sub;
//		sallay = sal;
//		academy = acad;
//	}
//	void Print() {
//		Human::Print();
//		cout << "Subject" << subject << "\t Sallay" << sallay << "\t Academy";
//	}
//};



class Animal {
protected:
	string vid;
	int ves;
	int dlina;
	int population;
	int age;
public:
	Animal() {}

	void Init()
	{
		cout << "Enter vid: ";
		cin >> vid;
		cout << "Enter ves: ";
		cin >> ves;
		cout << "Enter dlina: ";
		cin >> dlina;
		cout << "Enter population: ";
		cin >> population;
		cout << "Enter age: ";
		cin >> age;
	}

	void Print()
	{
		cout << "Vid: " << vid << endl;
		cout << "Ves: " << ves << endl;
		cout << "Dlina: " << dlina << endl;
		cout << "Population: " << population << endl;
		cout << "Age: " << age << endl;
	}

	void Eat()
	{
		cout << "Animal eat: ";
	}

	void Move()
	{
		cout << "Animal move";
	}

};


class Elefant :public Animal {
	int lenght_xobot;
	string mainland;
public:
	Elefant(){}
	void Init()
	{
		Animal::Init();
		cout << "Enter a lenght xobot: ";
		cin >> lenght_xobot;
		cout << "Enter a name mainland: ";
		cin >> mainland;
	}

	void Print()
	{
		Animal::Print();
		cout << "Lenght hobot: " << lenght_xobot << endl;
		cout << "Mainland: " << mainland << endl;
	}
};

class Penguin : public Animal {

	string mainland_penguin;
	string color;
public:
	Penguin(){}

	void Init()
	{
		Animal::Init();
		cout << "Enter name mainland: ";
		cin >> mainland_penguin;
		cout << "Enter a color: ";
		cin >> color;
	}

	void Print()
	{
		Animal::Print();
		cout << "Mainland: " << mainland_penguin << endl;
		cout << "Color: " << color << endl;
	}

};


class Parrot : public Animal {
	int say;
	string color;
public:

	Parrot(){}

	void Print()
	{
		Animal::Print();
		cout << "Say: " << Check_say() << endl;
		cout << "Color: " << color << endl;
	}

	void Init()
	{
		Animal::Init();
		cout << "Enter a say 1- yes 2 - no";
		cin >> say;
	}

	bool Check_say()
	{
		if (say == 1)
		{
			cout << "\nSaying";
			return true;
		}
		else if (say == 2)
		{
			cout << "Ne saying";
			return false;
		}
	}
};

int main()
{

	Animal obj;
	obj.Init();
	cout << "\n";
	obj.Print();

	//cout << "\n";
	//Elefant obj2;
	//obj2.Init();
	//cout << "\n";
	//obj2.Print();


	//cout << "\n";
	//Penguin obj3;
	//obj3.Init();
	//cout << "\n";
	//obj3.Print();

	cout << "\n";
	Parrot obj4;
	obj4.Init();
	cout << "\n";
	obj4.Print();

}