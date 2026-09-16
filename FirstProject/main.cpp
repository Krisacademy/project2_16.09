#include <iostream>
#include <string>
using namespace std;

// Тема : Понятие конструктора . Проблема -> решение 

class Person
{
    //private: // реализация, состояние объекта 
    string name;
    int age;
public: // интерфейс
	Person(string n, int a) // конструктор
	{
		name = n;
		age = a;
	}
	void show() // метод
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main() // Клиент
{
	




}
