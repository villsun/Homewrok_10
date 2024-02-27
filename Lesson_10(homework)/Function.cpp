#include "function.h"

int Get_Value_Int()
{
	srand(static_cast<unsigned>(time(nullptr)));
	return rand() % 101;
}

double Get_Value_Double()
{
	srand(static_cast<unsigned>(time(nullptr)));
	return rand() % 101  + rand() % 101 / 100;
}

char Get_Value_Char()
{
	srand(static_cast<unsigned>(time(nullptr)));
	return rand() % ('Z' - 'A') + 'A';
}

template <typename T>
void Fill(T* p_arr, int size, T(*p_function)())
{
	for (int i = 0; i < size; i++)
	{
		p_arr[i] = p_function();
	}
}

template <typename T>
void Show(const T* p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << ' ';
	}
	cout << endl;
}

template <typename T>
T Find_Min_Element(const T* p_arr, int size)
{
	T min_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min_element> p_arr[i])
		{
			min_element = p_arr[i];
		}
	}

	return min_element;
}

template <typename T>
T Find_Max_Element(const T* p_arr, int size)
{
	T max_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max_element < p_arr[i])
		{
			max_element = p_arr[i];
		}
	}

	return max_element;
}