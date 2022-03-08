#include <iostream>
#include <string>

using namespace std;

class TPers // ќбъ€вл€ем класс
{
public:
    string Name; // открытые пол€
    int Year;
private:
    int Salary; // закрытое поле
public:
    TPers(string Name, int Year, int Salary) // конструктор имена параметров совпадают с пол€ми
    {
        this->Name = Name; // сохран€ем данные, использу€ this
        this->Year = Year;
        this->Salary = Salary;
    }

    void Print() // метод дл€ печати 
    {
        cout << "Name: " << Name << endl; // печатаем в нужном формате
        cout << "Year: " << Year << endl;
        cout << "Salary: " << Salary << endl;
    }

    TPers* Copy()
    {
        TPers *P = new TPers(this->Name, this->Year, this->Salary);
        return P;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    TPers Pers = TPers("–оман", 1975, 120); // объ€вл€ем переменную и класса и
                                            // вызываем конструктор
    Pers.Print(); // вызываем метод

    TPers *P = Pers.Copy();
    P->Print(); // обращаемс€ к методу объекта
    delete P; // освобождаем пам€ть
}