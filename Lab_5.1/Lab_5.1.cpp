// 12. ϳ��������� ������� �䒺���� �������� � ������ ������������ �����.//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size;
    int* array;
    int k = 0;

    cout << "������ ����� ������: ";
    cin >> size;
    srand(time(0));

    array = new int[size];
    cout << "�����:" << endl;
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 41 - 20;
        cout << array[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            k += 1;
        }
    }
     cout << "\nʳ������ ��'����� �������� � �����: " << k;
     cout << endl;

     delete[] array;

     return 0;
  
}