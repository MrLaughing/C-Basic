/*
 * InsertArray.cpp
 *
 *  Created on: 2016年5月17日
 *      Author: Laughing_Lz
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct SNode { //结点定义
	int data; //数据域
	struct SNode* next; //指向下一结点
} NODE;
/*将新结点添加在链表尾部*/
void AddToTail(NODE **head, int data) { //这里干嘛要用 **head?★★
	NODE *node = new NODE(); //先定义出结点
	node->data = data;
	node->next = NULL;
	if (*head == NULL) { //链表为空：则新结点即头结点
		*head = node; //因为当链表为空时候，会改变头指针，所以参数为**head，否则出了函数之后链表仍为空
	} else { //移动next到尾端，将新结点添加到链表尾端
		NODE *p = *head;
		if (p->next != NULL) {
			p = p->next; //移动指针，指向最后一个结点
		}
		p->next = node; //将新结点放在尾端
	}
}
/*删除含某数据元素的结点*/
void RemoveNode(NODE **head, int data) {
	if (*head == NULL || head == NULL) { //
		return;
	}
	NODE *p = *head;
	NODE *deleteNode = NULL;
	if (p->data == data) {
		deleteNode = p; //将deleteNode指针指向这个要删除的结点
		p->next = p->next->next;//删除结点后重新定位下一结点
	} else {
		while (p->next != NULL && p->next->data != data) {
			p = p->next;
		}
		if (p->next != NULL && p->next->data == data) {
			deleteNode = p->next;
			p->next = p->next->next;
		}
	}
	if (deleteNode != NULL) {
		delete deleteNode;
		deleteNode = NULL;
	}
}
//int main(int argc, char **argv) {
////	head = (NODE *)malloc(sizeof(NODE));//?C语言使用这个实现动态内存分配
//	NODE *head = new NODE(); //C++用这个实现动态分配内存
////	AddToTail(*head, 2);??参数怎么写
//	return 0;
//}

/*void change(char* p)
 {
 p = "bbb";
 }

 int main(int argc, char* argv[])
 {
 char *v = "aaa";
 change(v);
 cout<<v<<endl;
 return 0;

 }*/
/*void change(char** p) {
 *p = "bbb";
 }

 int main(int argc, char* argv[]) {
 char *v = "aaa";
 change(&v);
 cout << v << endl;
 return 0;

 }*/
