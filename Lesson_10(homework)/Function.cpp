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