#include <iostream>
#include <cmath>
#include <iomanip>

// Для Windows — підтримка української кодової сторінки
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
    // Налаштування кодової сторінки для коректного відображення української мови
#ifdef _WIN32
    SetConsoleCP(1251);          // Ввід з консолі
    SetConsoleOutputCP(1251);    // Вивід у консоль
#endif

   
    return 0;
}