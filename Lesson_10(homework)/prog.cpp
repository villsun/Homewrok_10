#include "function.h"

#define INTEGER 10

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
	double arr[5];
	Show();
	Fill_Double(arr, 5);
	Show_Double(arr, 5);
	/*int p = Find_Max_Element_Int(arr, 5);
	int p_1 = Find_Min_Element_Int(arr, 5);
	cout << p << ' ' << p_1;*/
	Sort_Double(arr, 5);
	Show_Double(arr, 5);

}