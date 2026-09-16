#include <iostream>
#include <string>
using namespace std;

// Тема : Понятие конструктора . Проблема -> решение 

class Book
{
    //private: // реализация, состояние объекта 
    string name;
    string author;
    int pages;
public: // интерфейс
	Book() // конструктор по умолчанию Book obj;
	{
		name = "NoName";
		author = "NoAuthor";
		pages = 0;
		cout << "Constructor by default is called\n";
	}
};

int main() // Клиент
{
	




}
