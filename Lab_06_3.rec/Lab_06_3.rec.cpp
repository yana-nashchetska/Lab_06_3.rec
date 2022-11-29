#include <iostream> 
#include <windows.h> // РЕКУРСИВНИЙ СПОСІБ

using namespace std;

void Create(int* m, int size, int i)
{
	cout << "m[" << i << "] = "; cin >> m[i];

	if (i < size - 1)
		Create(m, size, i + 1);
	else
		cout << endl;
}

void printCreate(int* m, int size, int i)
{
	cout << m[i] << "  ";

	if (i < size - 1)
		printCreate(m, size, i + 1);
	else
		cout << endl;
}

void Inverse(int* m, int size, int i)
{
	int tmp = m[i];
	m[i] = m[size - 1 - i];
	m[size - 1 - i] = tmp;

	if (i < size / 2 - 1)
		Inverse(m, size, i + 1);
}

// Шаблони функцій

template <typename T>

void Create(T* m, int size, int i)
{
	cout << "m[" << i << "] = "; cin >> m[i];

	if (i < size - 1)
		Create(m, size, i + 1);
	else
		cout << endl;
}

template <typename T>

void printCreate(T* m, int size, int i)
{
	cout << m[i] << "  ";

	if (i < size - 1)
		printCreate(m, size, i + 1);
	else
		cout << endl;
}

template <typename T>

void Inverse(T* m, int size, int i)
{
	T tmp = m[i];
	m[i] = m[size - 1 - i];
	m[size - 1 - i] = tmp;

	if (i < size / 2 - 1)
		Inverse(m, size, i + 1);
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	int i;
	cout << "Введіть кількість елементів масиву:" << endl;
	cin >> size;

	double* m = new double[size];
	cout << "Введіть елементи масиву:" << endl;
	Create(m, size, 0);
	cout << endl;
	cout << "Масив: " << endl;
	printCreate(m, size, 0);
	cout << "Обернений масив:" << endl;
	Inverse(m, size, 0);
	printCreate(m, size, 0);

	delete[] m;
	return 0;

}