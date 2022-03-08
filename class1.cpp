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
    TPers(string aName, int aYear, int aSalary) // ����������� �������� �������� �� public
    {
        Name = aName; // ��������� ������
        Year = aYear;
        Salary = aSalary;
    }

    void Print() // ����� ��� ������ 
    {
        cout << "Name: " << Name << endl; // �������� � ������ �������
        cout << "Year: " << Year << endl;
        cout << "Salary: " << Salary << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    TPers Pers = TPers("�����", 1975, 120); // ��������� ���������� � ������ �
                                            // �������� �����������
    Pers.Print(); // �������� �����

    TPers *P; // ������� ��������� �� �����
    P = new TPers("������", 1991, 75); // �������� ������ � �������� �����������
    P->Print(); // ���������� � ������ �������
    delete P; // ����������� ������
}