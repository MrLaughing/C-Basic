/*
 * InsertArray.cpp
 *
 *  Created on: 2016年5月17日
 *      Author: Laughing_Lz
 */

#include <iostream>
#include <string.h>
#include <iomanip>
#include <string>
using namespace std;
/**
 *两个有序数组的合并：从后至前，依次将较大的数放入新数组的末端
 */
void InsertArray(int array1[], int array2[]) {
	int length1 = 0;
	while (array1[length1] != '\0') {
		length1++;
	}
	int length2 = 0;
	while (array2[length2] != '\0') {
		length2++;
	}
	int newLength1 = length1 + length2;
	while (newLength1 >= 1) {
		if (newLength1 == 1) {//退出循环★
			if (length1 == 0) {
				array1[newLength1 - 1] = array2[length2 - 1];
				break;
			} else if (length2 == 0) {
				array1[newLength1 - 1] = array1[length1 - 1];
				break;
			}
		} else {
			if (array2[length2 - 1] > array1[length1 - 1]) { //每次将两数组中较大的数放入新数组的末端
				array1[newLength1 - 1] = array2[length2 - 1];
				length2--;
				newLength1--;
			} else {
				array1[newLength1 - 1] = array1[length1 - 1];
				length1--;
				newLength1--;
			}
		}
	}
	int i = 0;
	while (array1[i] != '\0') {
		cout << array1[i++] << setw(3);
	}
}
void TestsadInsert() {
	int array1[100] = { 2, 3, 5, 7, 9, 11 };
	int array2[50] = { 1, 4, 6, 8, 10, 12 };
	InsertArray(array1, array2);
}
int main3(int argc, char **argv) {
	TestsadInsert();
	return 0;
}

