#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
	};
	node *head = NULL;
	node *posisi;
	int option = 0;
int init(int nilai){
	node *baru;
	baru = new node;
