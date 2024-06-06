#include <iostream>

class Vector{
private:
    int* vector;
    int size; 
public:
    Vector(int size, int value = 0);
    ~Vector();
    void push_back(int element);
    bool remove(int element);
    int& operator[](int index);
    void print();
}; 