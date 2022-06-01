
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>

using namespace std;



class Animal
{

public:
	string name;
	string poroda;
	int age;

	Animal() = default;

	Animal(string name, string poroda, int age) : Animal()
	{
		this->name = name;
		this->poroda = poroda;
		this->age = age;
	}

	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;



};

class Sebek : virtual public Animal //sobaka
{
public:
	Sebek() {
		name = "Вася";
		poroda = "Вівчарка";
		age = 5;
	}

	Sebek(string name , string poroda, int age) : Animal()
	{
		this->name = name;
		this->poroda = poroda;
		this->age = age;
	}
	void Sound() override {
		cout << name << " Говорить (Гав-Гав)" << endl;
	}
	void Show() override {
		cout << " Пса звати: " << name << endl;
	}
	void Type() override {
		cout << "Собака породи: " << poroda << "\nКількісь років тварині: " << age << endl;
	}

};

class Kit : virtual public Animal
{
public:
	Kit() {
		name = "Мурчик";
		poroda = "Сіамський";
		age = 3;
	}

	Kit(string name, string poroda, int age) : Animal()
	{
		this->name = name;
		this->poroda = poroda;
		this->age = age;
	}
	void Sound() override {
		cout << name << " Говорить (Мяу Мяу)" << endl;
	}
	void Show() override {
		cout << "Кота звати: " << name << endl;
	}
	void Type() override {
		cout << "Котяра породи: " << poroda << "\nКількісь років тварині: " << age << endl;
	}

};
class Papygau : virtual public Animal {

public:
	Papygau() {
		name = "Григорій";
		poroda = "Жмеринський";
		age = 1;
	}

	Papygau(string name, string poroda, int age) : Animal()
	{
		this->name = name;
		this->poroda = poroda;
		this->age = age;
	}
	void Sound() override {
		cout << name << " Говорить (Кар Кар)" << endl;
	}
	void Show() override {
		cout << "Папугу звати: " << name << endl;
	}
	void Type()override {
		cout << "Папуга породи: " << poroda << "\nКількісь років тварині: " << age << endl;
	}

};

class Homak : virtual public Animal {

public:
	Homak() {
		name = "Петро";
		poroda = "Землений";
		age = 1;
	}

	Homak(string name, string poroda, int age) : Animal()
	{
		this->name = name;
		this->poroda = poroda;
		this->age = age;
	}
	void Sound() override {
		cout << name << " Говорить (Бжик Бжик)" << endl;
	}
	void Show() override {
		cout << "Хомяк звати:" << name << endl;
	}
	void Type() override {
		cout << "Хомяк породи: " << poroda << "\nКількісь років тварині: " << age << endl;
	}


};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size = 4;
	Animal** inst1 = new Animal *[size] {
		new Sebek(),
		new Kit(),
		new Papygau(),
		new Homak(),
	};
	for (size_t i = 0; i < size; i++)
	{
		cout << "Animal\t" << i + 1 << endl;
		inst1[i]->Sound();
		inst1[i]->Show();
		inst1[i]->Type();
		cout << endl << endl;
	}


	_getch();
	return 0;
}

