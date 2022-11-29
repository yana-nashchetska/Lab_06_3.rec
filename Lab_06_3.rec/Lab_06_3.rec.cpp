#include <iostream> 
#include <windows.h> // ����������� ���Ѳ�

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

// ������� �������

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
	cout << "������ ������� �������� ������:" << endl;
	cin >> size;

	double* m = new double[size];
	cout << "������ �������� ������:" << endl;
	Create(m, size, 0);
	cout << endl;
	cout << "�����: " << endl;
	printCreate(m, size, 0);
	cout << "��������� �����:" << endl;
	Inverse(m, size, 0);
	printCreate(m, size, 0);

	delete[] m;
	return 0;

}