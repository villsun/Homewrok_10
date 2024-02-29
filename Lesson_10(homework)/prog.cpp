#include "function.h"

int main()
{
	int arr[5];
	Fill_Int(arr, 5);
	Show_Int(arr, 5);
	int p = Find_Max_Element_Int(arr, 5);
	int p_1 = Find_Min_Element_Int(arr, 5);
	cout << p << ' ' << p_1;
}