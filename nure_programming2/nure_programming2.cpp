#include <iostream>
#include <cmath>
#include <iomanip>

// ��� Windows � �������� ��������� ������ �������
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
    // ������������ ������ ������� ��� ���������� ����������� ��������� ����
#ifdef _WIN32
    SetConsoleCP(1251);          // ��� � ������
    SetConsoleOutputCP(1251);    // ���� � �������
#endif

   
    return 0;
}