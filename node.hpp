//
// Created by tanus on 2019-11-21.
//

#ifndef LAB8_NODE_HPP
#define LAB8_NODE_HPP
#include "myLinkedList.hpp"

template<typename T>

/*Node implementation using templates*/
class node {

public:
    T data;
    node *next;
    node(T);
};

/*node constructor with generic dataIn input*/
template<typename T>
node<T>::node(T dataInput) {
    data = dataInput;
    next = 0;
}


#endif //LAB8_NODE_HPP
