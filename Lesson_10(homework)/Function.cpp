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


int Find_Min_Element_Int(const int* p_arr, int size)
{
	int min_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min_element > p_arr[i])
		{
			min_element = p_arr[i];
		}
	}

	return min_element;
}

int Find_Max_Element_Int(const int* p_arr, int size)
{
	int min_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min_element < p_arr[i])
		{
			min_element = p_arr[i];
		}
	}

	return min_element;
}


double Find_Min_Element_Double(const double* p_arr, int size)
{
	double max_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max_element > p_arr[i])
		{
			max_element = p_arr[i];
		}
	}

	return max_element;
}

double Find_Max_Element_Double(const double* p_arr, int size)
{
	double max_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max_element < p_arr[i])
		{
			max_element = p_arr[i];
		}
	}

	return max_element;
}

char Find_Min_Element_Char(const char* p_arr, int size)
{
	char max_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max_element > p_arr[i])
		{
			max_element = p_arr[i];
		}
	}

	return max_element;
}

char Find_Max_Element_Char(const char* p_arr, int size)
{
	char max_element = p_arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max_element < p_arr[i])
		{
			max_element = p_arr[i];
		}
	}

	return max_element;
}

void Sort_Int(int* p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (p[i] > p[j])
			{
				int temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

void Sort_Double(double* p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (p[i] > p[j])
			{
				double temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

void Sort_Char(char* p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (p[i] > p[j])
			{
				char temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}