#include <iostream>
#include "half.h"
using namespace std;
Counter::Counter(int count) { this->count = count; }
Counter::Counter(){};
void Counter::increase() { count += 1; }
void Counter::decrease() { count -= 1; }
int Counter::current() { return count; }
