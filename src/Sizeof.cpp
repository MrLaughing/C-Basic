//============================================================================
// Name        : JZ-C-03.cpp
// Author      : Laughing_Lz
// Version     :
// Copyright   : All Right Reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int GetSize(int data[]) { //参数虽然是整型数组，但数组做函数传递时，会自动退化为同类型的指针
	return sizeof(data); //所以在32位系统s下都是返回4
}
int main2() {
	int data1[] = { 1, 2, 3, 4, 5 };
	int size1 = sizeof(data1); //此处返回数组data1所占内存字节数：5*4 = 20
	cout << size1 << endl; //20
	int *f = data1;
	int size2 = sizeof(f); //在32位系统下，任何指针所占内存字节数都为4
	cout << size2 << endl; //4
	int size3 = GetSize(data1);
	cout << size3 << endl; //4
//	cout << "Hello World!!!" << endl; // prints Hello World!!!
	return 0;
}
