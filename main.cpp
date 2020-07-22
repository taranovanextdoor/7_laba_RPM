
#include <iostream>
#include "Deque.h"
int main() {
    Deque D;
    D.push_front(123);
    D.push_back(321);
    cout << D.GetFirstElement() << " ";
    cout << D.GetLast();
    return 0;
}

