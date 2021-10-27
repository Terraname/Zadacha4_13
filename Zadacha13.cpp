﻿// Zadacha13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "This program finds number of max conections we can get using entered arry of extension cords\n";
    int n, S;
    int* a;
    std::cout << "Enter number of extension cords\n";
    std::cin >> n;
    while (std::cin.fail() || n <= 0)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Wrong number!\n";
        std::cout << "Enter number another time\n";
        std::cin >> n;
    }
    a = new int[n];
    std::cout << "Enter number of extension connectors\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        while (std::cin.fail() || a[i] < 0)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong connectors value!\n";
            std::cout << "Enter  № " << (i + 1) << "  of connectors another time\n";
            std::cin >> a[i];
        }
    }

    S = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            S += (a[i] - 1);
        }
    }
    std::cout << "\n";
    std::cout << "Number of connections is " << S << "\n";
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
