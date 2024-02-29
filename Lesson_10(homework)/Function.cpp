#include "function.h"

void Fill_Int(int* p_arr, int size)
{
	srand(static_cast<unsigned>(time(nullptr)));
	for (int i = 0; i < size; i++)
	{
		p_arr[i] = rand() % 101;
	}
}

void Fill_Double(double* p_arr, int size)
{
	srand(static_cast<unsigned>(time(nullptr)));
	for (int i = 0; i < size; i++)
	{
		p_arr[i] = (rand() % 101) + ((rand() % 101) / 100.0);
	}
}

void Fill_Char(char* p_arr, int size)
{
	srand(static_cast<unsigned>(time(nullptr)));
	for (int i = 0; i < size; i++)
	{
		p_arr[i] = rand() % ('Z' - 'A') + 'A';
	}
}


void Show_Int(const int* p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << ' ';
	}
	cout << endl;
}

void Show_Double(const double* p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << ' ';
	}
	cout << endl;
}

void Show_Char(const char* p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << ' ';
	}
	cout << endl;
}

//template <typename T>
//T Find_Min_Element(const T* p_arr, int size)
//{
//	T min_element = p_arr[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (min_element> p_arr[i])
//		{
//			min_element = p_arr[i];
//		}
//	}
//
//	return min_element;
//}
//
//template <typename T>
//T Find_Max_Element(const T* p_arr, int size)
//{
//	T max_element = p_arr[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (max_element < p_arr[i])
//		{
//			max_element = p_arr[i];
//		}
//	}
//
//	return max_element;
//}