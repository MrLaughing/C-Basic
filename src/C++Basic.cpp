//============================================================================
// Name        : C++Basic.cpp
// Author      : Laughing
// Version     :
// Copyright   : All Right Reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void funA(int i) {
	i = i + 1;
}
void funB(int *j) {
	*j = *j + 20;
}
void funC(int &k) {
	k = k + 30;
}
int main1() {
	int a = 1;
	funA(a);
	cout << "a=" << a << endl; //1
	funB(&a);
	cout << "a=" << a << endl; //21
	funC(a);
	cout << "a=" << a << endl;
	cout << "Hello World!!!" << endl; // prints Hello World!!!
	return 0;
}
