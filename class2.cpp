#include <iostream>
#include <string>

using namespace std;

class TPers // ��������� �����
{
public:
    string Name; // �������� ����
    int Year;
private:
    int Salary; // �������� ����
public:
    TPers(string Name, int Year, int Salary) // ����������� ����� ���������� ��������� � ������
    {
        this->Name = Name; // ��������� ������, ��������� this
        this->Year = Year;
        this->Salary = Salary;
    }

    void Print() // ����� ��� ������ 
    {
        cout << "Name: " << Name << endl; // �������� � ������ �������
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
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    TPers Pers = TPers("�����", 1975, 120); // ��������� ���������� � ������ �
                                            // �������� �����������
    Pers.Print(); // �������� �����

    TPers *P = Pers.Copy();
    P->Print(); // ���������� � ������ �������
    delete P; // ����������� ������
}