#include <iostream>
using namespace std;
void input(int*, int*);

int main()
{
    setlocale(LC_ALL, "rus");
    int num1, nim2;

    input(&num1, &num2);
    cout <<"�����"<< num1 << "; " <<num2 << end1;

    return 0;
}
void input(int *a, int *b)
{
    cout <<"������� ������ �����:";
    cin >> *a;
    cout <<"������� ������ �����:";
    cin >> *b;
}
