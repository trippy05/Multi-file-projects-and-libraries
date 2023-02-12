#ifndef UNTITLED14_HALF_H
#define UNTITLED14_HALF_H
#include <iostream>
class Counter {
private:
    int count = 1;
public:
    Counter(int);
    Counter();
    void increase();
    void decrease();
    int current();
};
#endif //UNTITLED14_HALF_H
