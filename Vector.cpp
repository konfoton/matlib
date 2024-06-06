#include "Vector.h"

Vector::Vector(int size, int value){
    this->size = size; 
    vector = new int[size];
    for(int i = 0; i < size; i++){
        vector[i] = value; 
    }
}
Vector::~Vector(){
    delete[] vector; 
}
void Vector::push_back(int element){
    size += 1;
    int* vectornew = new int[size];
    for(int i = 0; i < size - 1; i++){
        vectornew[i] = vector[i];
    }
    vector[size -1] = element;
    delete[] vector; 
    vector = vectornew;
}
bool Vector::remove(int element){
    for(int i = 0; i < size; i++){
        if(vector[i] == element){
            size -= 1;
            int* vectornew = new int[size];
            for(int j =  0; j < i; j++){
                vectornew[j] = vector[j];
            }
            for(int j = i + 1; j < size + 1; j++){
                vectornew[j - 1] = vector[j];
            }
            delete[] vector;
            vector = vectornew;
            return false;
        }
    }
    return false; 
}
int& Vector::operator[](int index){
    return vector[index];
}
void Vector::print(){
    for(int i = 0; i < size; i++){
        std::cout << vector[i] << " ";
    }
}