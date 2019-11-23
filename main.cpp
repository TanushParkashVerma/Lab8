#include <iostream>
#include "myLinkedList.hpp"

using namespace std;

int main() {
    //linked list parameterized with int named intList
    myLinkedList<int> intList;
    intList.pushBack(3);
    intList.pushFront(1);
    intList.insertAfter(intList.head, 2);
    intList.print();

    //linked list parameterized with string named stringList
    myLinkedList<string> stringList;
    stringList.pushBack("c");
    stringList.pushFront("a");
    stringList.insertAfter(stringList.head, "b");
    stringList.print();

    return 0;
}