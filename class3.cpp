#include <iostream>
#include <string>

using namespace std;

class TLamp // объ€вл€ем класс
{
public:
    int Number; // номер каждого экземпл€ра
    static int Count; // статическое поле Ц общее количество экземпл€ров класса
    TLamp() // конструктор без параметров
    {
        Count++; // увеличиваем количество экземпл€ров
        Number = Count; // текущий номер присваиваем последнему объекту
    }
};

int TLamp::Count = 0; // статическое поле необходимо дополнительно объ€вить

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    TLamp* L1 = new TLamp(); // создаем новый экземпл€р
    TLamp* L2 = new TLamp(); // создаем новый экземпл€р
    TLamp* L3 = new TLamp(); // создаем новый экземпл€р
    
    cout << L1->Number << "\t" << L2->Number << "\t" << L3->Number << endl;
    cout << "¬сего: " << TLamp::Count << endl; // используем статическое поле
}