#pragma once

#include <iostream>
using namespace std;

// Iterates over the contents of a MyVector.
// It is a realization of vector in CPP by me.
// Example:
//    MyVector<int> vec_int(); 
//    MyVector<string> vec_str(10,"string");
//    MyVector<string> vec_strcopy(vec_str)
template<typename T>
class MyVector{
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    MyVector(size_t length);
    MyVector(size_t length, const T &data);
    MyVector(MyVector<T>& v);
    MyVector(iterator begin, iterator end);
    MyVector();
    ~MyVector();

    // Like the "push_back()" in <vector>,it adds the given
    // data at the back of the last data in vector.
    // If there is no sapce, it will reserve new space by using 
    // function reserve(). 
    void push_back(const T &data);
    // It shows the object in the vector.
    void show_vec();
    //  It deletes the last data in this vector.
    // ATTENTION:
    //  If the vector is null, it will send an error signal.
    void pop_back();
    // It extends the capacity of the vector.
    // New space will be allocated if the given n is longer 
    // than the original length of capacity.
    void reserve(size_t n);
    // It changes the size and creates object in the unused
    // capacity.
    // If the given n is longer than the original length of capacity,
    // new space will be allocated with the leftover space will be
    // filled up with the given data.
    void resize(size_t n, const T &data);
    // Get the size of vector.
    size_t size();
    size_t capacity();
    iterator begin();
    iterator end();
    
private:
    iterator phead;
    iterator pfinish;
    iterator pend;
};