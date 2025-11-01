#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
    setlocale(LC_ALL, "Ukrainian");


    
     double x1, y1, x2, y2, x3, y3;

        // Ввід координат з підписами
     std::cout << "Введіть координату x1: ";
     if (!(std::cin >> x1)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }
     std::cout << "Введіть координату y1: ";
     if (!(std::cin >> y1)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }
     std::cout << "Введіть координату x2: ";
     if (!(std::cin >> x2)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }
     std::cout << "Введіть координату y2: ";
     if (!(std::cin >> y2)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }
     std::cout << "Введіть координату x3: ";
     if (!(std::cin >> x3)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }
     std::cout << "Введіть координату y3: ";
     if (!(std::cin >> y3)) {
         std::cout << "Помилка! Ви ввели не число.\n";
         return 1;
     }

        // Обчислення довжин сторін
        double a = hypot(x2 - x3, y2 - y3); // BC
        double b = hypot(x1 - x3, y1 - y3); // AC
        double c = hypot(x1 - x2, y1 - y2); // AB

        // Перевірка на виродженість (площа ≈ 0)
        double s = (a + b + c) / 2.0;
        double area = (s > 0) ? sqrt(s * (s - a) * (s - b) * (s - c)) : 0.0;

        std::cout << std::fixed << std::setprecision(10);

        if (area < 1e-10 || a < 1e-10 || b < 1e-10 || c < 1e-10) {
            std::cout << "Результат: Трикутник є виродженим" << std::endl;
            return 0;
        }

        // Квадрати сторін
        double a2 = a * a, b2 = b * b, c2 = c * c;

        // Знаходження найбільшого кута (за найбільшою стороною)
        double cos_max;

        if (a2 >= b2 && a2 >= c2) {
            // кут при A (проти сторони a = BC)
            cos_max = (b2 + c2 - a2) / (2 * b * c);
        }
        else if (b2 >= a2 && b2 >= c2) {
            // кут при B (проти сторони b = AC)
            cos_max = (a2 + c2 - b2) / (2 * a * c);
        }
        else {
            // кут при C (проти сторони c = AB)
            cos_max = (a2 + b2 - c2) / (2 * a * b);
        }

        // Визначення типу трикутника
        if (abs(cos_max) < 1e-10) {
            std::cout << "Результат: Трикутник є прямокутним" << std::endl;
        }
        else if (cos_max > 0) {
            std::cout << "Результат: Трикутник є гострокутним" << std::endl;
        }
        else {
            std::cout << "Результат: Трикутник є тупокутним" << std::endl;
        }

        return 0;
    }