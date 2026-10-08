

#include <iostream>
#include <iomanip>//для 2 задания и  нужен для setprecision
#include <cmath> //№5
using namespace std;
int main()

{
    setlocale(LC_ALL, "RUS");
    //1
    double start = 12.5;
    double end = 75.0;
    double duration = end - start;
    double duration_minutes = duration / 60.0;

    cout << "Длительность: " << duration << " сек" << endl;
    cout << "Длительность в минутах: " << duration_minutes << " мин" << endl;
    //2
    double weight = 70.0; // кг
    double height = 1.75; // м
    double bmi = weight / (height * height);

    // Печать с одним знаком после запятой
    cout << fixed << setprecision(1);
    cout << "Индекс массы тела: " << bmi << endl;
    //3
    double price = 2599.90;
    int p = 15;
    double final_price = price * (100 - p) / 100.0;

    cout << fixed << setprecision(2);
    cout << "К оплате: " << final_price << endl;
    // Выведет: 2209.91
    //4
    double r1 = 10.0;
    double r2 = 20.0;
    double serial = r1 + r2;
    double parallel = 1.0 / (1.0 / r1 + 1.0 / r2);

    cout << "Последовательно: " << serial << " Ом" << endl;
    cout << "Параллельно: " << parallel << " Ом" << endl;
  //5
    double x = 4.5;
    double res_pow = pow(x, 3);
    double res_mul = x * x * x;

    cout << "Библиотечная pow: " << res_pow << endl;
    cout << "Умножение x*x*x:   " << res_mul << endl;
    //6
    double sum = 0.1 + 0.2;
    double target = 0.3;
    double error = std::fabs(sum - target);

    // Выводим 20 знаков, чтобы увидеть микроскопическую погрешность double
    cout << fixed << setprecision(20);
    cout << "Модуль ошибки: " << error << endl;
    //7
    double rate = 92.45;     // рублей за 1 доллар
    double dollars = 150.50;  // сумма в долларах
    double rubles = dollars * rate;
    cout << std::fixed << setprecision(2);
    cout << "Сумма в рублях: " << rubles << " руб."<< endl;
    //8
    int tickets = 45;
    double hours = 2.5;
    double density = tickets / hours;
    cout << "Плотность потока: " << density << " заявок/час" << endl;
    //9
    double v_kmh = 90.0;
    double v_ms = v_kmh * 1000.0 / 3600.0;
    cout << "Скорость: " << v_ms << " м/с" << endl;

   
}

