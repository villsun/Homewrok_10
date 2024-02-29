#include "function.h"

#define INTEGER 10


// Це не можу додати в function.h тому що видає помилку
#ifdef INTEGER
void Show()
{
	cout << "Yesssssssssss!" << endl;
}
#else
void Show()
{
	cout << "Noooooooooo!" << endl;
}
#endif // INTEGER

int main()
{
	const int SIZE = 5;
	char arr[SIZE];

	Show();

	Fill_Char(arr, SIZE);
	Show_Char(arr, SIZE);

	/*int p = Find_Max_Element_Int(arr, 5);
	int p_1 = Find_Min_Element_Int(arr, 5);
	cout << p << ' ' << p_1;*/

	Sort_Char(arr, SIZE);
	Show_Char(arr, SIZE);

	Egit_Char(arr, SIZE);
	Show_Char(arr, SIZE);

	return 0;
}