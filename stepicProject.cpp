﻿// stepicProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	cin >> a;

	vector <int> n(a);
	//считывание
	for (int i = 0; i < a; i++) {
		cin >> n[i];
	}
	int smaller;
	//сортировка
	for (int i = 0; i < a; i++) {
		int next = i + 1;
		if (n[next] < n[i]) {
			smaller = n[nxt];
		}
	}
	cout << smaller;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть же, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.