#pragma once
#include <ctime>
#include <iostream>
using namespace std;

void Fill_Int(int* p_arr, int size);
void Fill_Double(double* p_arr, int size);
void Fill_Char(char* p_arr, int size);

void Show_Int(const int* p_arr, int size);
void Show_Double(const double* p_arr, int size);
void Show_Char(const char* p_arr, int size);

int Find_Min_Element_Int(const int* p_arr, int size);
int Find_Max_Element_Int(const int* p_arr, int size);
double Find_Min_Element_Double(const double* p_arr, int size);
double Find_Max_Element_Double(const double* p_arr, int size);
char Find_Min_Element_Char(const char* p_arr, int size);
char Find_Max_Element_Char(const char* p_arr, int size);

void Sort_Int(int* p, int size);
void Sort_Double(double* p, int size);
void Sort_Char(char* p, int size);
