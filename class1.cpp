#include <iostream>
#include <string>

using namespace std;

class TPers // Объявляем класс
{
public:
    string Name; // открытые поля
    int Year;
private:
    int Salary; // закрытое поле
public:
    TPers(string aName, int aYear, int aSalary) // конструктор обратите внимание на public
    {
        Name = aName; // сохраняем данные
        Year = aYear;
        Salary = aSalary;
    }

    void Print() // метод для печати 
    {
        cout << "Name: " << Name << endl; // печатаем в нужном формате
        cout << "Year: " << Year << endl;
        cout << "Salary: " << Salary << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    TPers Pers = TPers("Роман", 1975, 120); // объявляем переменную и класса и
                                            // вызываем конструктор
    Pers.Print(); // вызываем метод

    TPers *P; // создаем указатель на класс
    P = new TPers("Сергей", 1991, 75); // выделяем память и вызываем конструктор
    P->Print(); // обращаемся к методу объекта
    delete P; // освобождаем память
}