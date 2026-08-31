#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned int n; // Количество блоков
    unsigned int k; // количество блоков на башню
    unsigned int t; // Максимальное количество башен
    unsigned int b; // Количесво использованных блоков
    // русская локаль для терминала Windows 11
    system("chcp 1251 >nul"); // 1-й способ
    std::locale rus_locale = std::locale("russian.1251");
    // Выбор кодировки терминала  2-й способ
    std::cout.imbue(std::locale::global(rus_locale));
    /*Ввод значений переменных с клавиатуры*/
    std::cout << "Введите количество блоков: ";
    std::cin >> n;
    std::cout << "Введите количество блоков на башню: ";
    std::cin >> k;
    t = n / k; // Максимальное количесво башен
    b = t * k; // Количество использованных блоков
    /*Вывод информации на экран*/
    std::cout << "Из " << n << " блоков можно построить максимум "
              << t << " башен(ни))\r\n";
    std::cout << "На это уйдёт " << b << " блоков\r\n";
    std::cin.ignore(); // Очистка буфера ввода
    std::cin.get(); // Задержка вывода до нажатия клавиши "Ввод".
}
