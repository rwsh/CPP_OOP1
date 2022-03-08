#include <iostream>
#include <string>

using namespace std;

class TLamp // ��������� �����
{
public:
    int Number; // ����� ������� ����������
    static int Count; // ����������� ���� � ����� ���������� ����������� ������
    TLamp() // ����������� ��� ����������
    {
        Count++; // ����������� ���������� �����������
        Number = Count; // ������� ����� ����������� ���������� �������
    }
};

int TLamp::Count = 0; // ����������� ���� ���������� ������������� ��������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    TLamp* L1 = new TLamp(); // ������� ����� ���������
    TLamp* L2 = new TLamp(); // ������� ����� ���������
    TLamp* L3 = new TLamp(); // ������� ����� ���������
    
    cout << L1->Number << "\t" << L2->Number << "\t" << L3->Number << endl;
    cout << "�����: " << TLamp::Count << endl; // ���������� ����������� ����
}