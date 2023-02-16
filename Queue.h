#pragma once
#include <stack>
#include <iostream>
using namespace std;
template <class T>
class Queue
{
private:
	stack<T> stack1, stack2;
	T first;
public:
	Queue();
	bool isEmpty();
	void clear();
	T getFirst();
	void enqueue(T item);
	void dequeue();
	void print();

};


