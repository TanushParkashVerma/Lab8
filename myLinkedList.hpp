//
// Created by tanus on 2019-11-21.
//

#ifndef LAB8_MYLINKEDLIST_HPP
#define LAB8_MYLINKEDLIST_HPP

#include <iostream>
#include "node.hpp"

using namespace std;

/*myLinkedlist class implementation using templates*/
template<typename T>
class myLinkedList {
public:
    /* Constructor function for linkedlist*/
    myLinkedList();

    /* pushFront function that pushes new node with its data to front of linked list */
    void pushFront(T);

    /* backFront function that pushes new node with its data to back of linked list */
    void pushBack(T);

    /* insertAfter function to insert the new node with its data at middle of list */
    void insertAfter(node<T> *prev_node, T);

    /* Print function to display the contents of linkedlist */
    void print();

    /* Check if the linkedlist is empty */
    bool isEmpty();

    /* destructor function for linkedlist*/
    ~myLinkedList();

    node<T> *head;
    node<T> *tail;
};

/* Constructor function for linkedlist*/
template<typename T>
myLinkedList<T>::myLinkedList() {
    head = NULL;
    tail = NULL;
}

/* pushFront function that pushes new node with its data to the front of linked list */
template<typename T>
void myLinkedList<T>::pushFront(T dataIn) {
    if (isEmpty()) {
        node<T> *newPointer = new node<T>(dataIn);
        head = newPointer;
        tail = newPointer;
    } else {
        node<T> *newPointer = new node<T>(dataIn);
        newPointer->next = head;
        head = newPointer;
    }
}

/* pushBack function that pushes new node with its data to the back of the linked list */
template<typename T>
void myLinkedList<T>::pushBack(T dataIn) {
    if (isEmpty()) {
        node<T> *newPointer = new node<T>(dataIn);
        head = newPointer;
    } else {
        node<T> *newPointer = new node<T>(dataIn);
        tail->next = newPointer;
        tail = newPointer;
    }
}

/* insertAfter function to insert the new node with its data at middle of list */
template<typename T>
void myLinkedList<T>::insertAfter(node<T> *prev_node, T dataIn) {
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }
    node<T> *new_node = new node<T>(dataIn);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

/* Print function to display the contents of linkedlist */
template<typename T>
void myLinkedList<T>::print() {
    if (isEmpty()) {
        cout << "The list is empty" << endl;
    } else {
        node<T> *currentPointer = head;
        while (currentPointer != NULL) {
            cout << currentPointer->data << ' ';
            currentPointer = currentPointer->next;
        }
    }
}

/* Check if the linkedlist is empty */
template<typename T>
bool myLinkedList<T>::isEmpty() {
    if (head == NULL && tail == NULL)
        return 1;
    else
        return 0;
}

/* destructor function for linkedlist*/
template<typename T>
myLinkedList<T>::~myLinkedList() {
    if (!isEmpty()) {
        node<T> *currentPointer = head;
        node<T> *tempPointer;

        while (currentPointer != 0) {
            tempPointer = currentPointer;
            currentPointer = currentPointer->next;
            delete tempPointer;
        }
    }
}

#endif //LAB8_MYLINKEDLIST_HPP
