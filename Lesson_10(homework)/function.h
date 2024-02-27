#pragma once
#include <ctime>
#include <iostream>
using namespace std;

int Get_Value_Int();
double Get_Value_Double();
char Get_Value_Char();
template <typename T>
void Fill(T* p_arr, int size, T(*p_function)());
template <typename T>
void Show(const T* p_arr, int size);
