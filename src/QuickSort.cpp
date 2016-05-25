//============================================================================
// Name        : C++Basic.cpp
// Author      : Laughing
// Version     :
// Copyright   : All Right Reserved
// Description : 快速排序：采用分治法
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/**
 *快速排序：采用分治法
 */
int partition(int array[], int start, int end) { //返回基准的下标
	if (array == NULL) {
		cout << "数组为空" << endl;
		throw new exception();
	}
	int base = rand() % (end - start + 1); //若基准为随机元素，则递归次数不定，即时间复杂度有差别！★
//	int base = 0;//若基准为数组第一个元素或某个固定元素，则递归次数固定。
	cout << "基准为:" << base << endl;
	int basic = array[base];//basic为基准
	while (start < end) {
		while (start < end && array[end] > basic) {
			end--;
		}
		if (start < end) { //★
			array[base] = array[end];
			base = end; //改变基准指向的下标
		}
		while (start < end && array[start] < basic) {
			start++;
		}
		if (start < end) { //★
			array[base] = array[start];
			base = start; //改变基准指向的下标
		}
	}
	array[base] = basic;
	return base;
}
void QuickSort(int array[], int start, int end) {
	if (start < end) {
		int base = partition(array, start, end);
		QuickSort(array, 0, base - 1);
		QuickSort(array, base + 1, end);
	}
}
/*int main() {
//	srand((int)time(0));//初始化随机种子：若不初始化，每次递归的随机种子不会变化，递归次数固定。
	int array[] = { 4, 3, 2, 1, 9, 7, 5, 8, 6 };
	int size = sizeof(array) / sizeof(*array); //求数组长度
	QuickSort(array, 0, size - 1);
	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}
	return 0;
}*/
