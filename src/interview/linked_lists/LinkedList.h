/*
 * LinkedList.h
 *
 *  Created on: Nov 22, 2014
 *      Author: adam
 */

#ifndef INTERVIEW_LINKED_LISTS_LINKEDLIST_H_
#define INTERVIEW_LINKED_LISTS_LINKEDLIST_H_

class LinkedList {

	struct Node {
		int data_;
		Node* next_;

		Node(int data) : data_(data), next_(nullptr) {};
	};

	void deleteList(Node* node);

	Node* root_;
	int size_;

public:
	LinkedList() : root_(nullptr), size_(0) {};

	~LinkedList() {
		deleteList(root_);
	}

	bool isEmpty() {
		return size_ == 0;
	}

	int size() {
		return size_;
	}

	void push_front(int data);
	void push_back(int data);
	bool remove(int data);
};

#endif /* INTERVIEW_LINKED_LISTS_LINKEDLIST_H_ */
