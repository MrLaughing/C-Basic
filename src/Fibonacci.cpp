/*
 * Fibonacci.cpp
 *
 *  Created on: 2016年5月25日
 *      Author: Laughing_Lz
 */

#include <iostream>
using namespace std;

/**
 *输入n，返回第n个斐波那契数
 */
double Fibonacci(int n) {
	double fi;
	if (n <= 0) {
		return -1;//错误
	} else if (n == 1 || n == 2) {
		fi = 1;
	} else {
		fi = Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	return fi;
}

int main(int argc, char **argv) {
	double result = Fibonacci(50);
	cout << result << endl;
	return 0;
}

