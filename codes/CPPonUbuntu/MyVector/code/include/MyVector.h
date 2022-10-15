#ifndef MYVECTOR_H_
#define MYVECTOR_H_

#include <iostream>
using namespace std;

// Iterates over the contents of a MyVector.
// It is a realization of vector in CPP by my own.
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

template<typename T>
MyVector<T>::~MyVector(){
    if(phead != nullptr){
        delete [] phead;
        phead = nullptr;
        pfinish = nullptr;
        pend = nullptr;
    }
}

template<typename T>
MyVector<T>::MyVector(size_t length):phead(nullptr),pfinish(nullptr),pend(nullptr){
	reserve(length);
}

template<typename T>
MyVector<T>::MyVector():phead(nullptr),pfinish(nullptr),pend(nullptr){
}

template<typename T>
MyVector<T>::MyVector(size_t length,const T &data):phead(nullptr),pfinish(nullptr),pend(nullptr){
	reserve(length);
	for (size_t i = 0; i < length; i++)
	{
		push_back(data);
	}
}

template<typename T>
MyVector<T>::MyVector(iterator begin, iterator end):phead(nullptr),pfinish(nullptr),pend(nullptr){
    while (begin != end)
	{
		push_back(*begin);
		++begin;
	}
}

template<typename T>
MyVector<T>::MyVector(MyVector<T>& v):phead(nullptr),pfinish(nullptr),pend(nullptr){
	MyVector<T> temp(v.begin(), v.end());
    reserve(temp.capacity());
    for(int i = 0;i < temp.capacity();i++)
        phead[i] = temp.phead[i];
    pfinish = phead + temp.size();
}

template<typename T>
void MyVector<T>::show_vec(){
    cout << "这个vector里面有：" << endl;
    for(iterator p = begin();p != end();p++)
        cout << *p << " ";
    cout << endl;
}

template<typename T>
typename MyVector<T>::iterator MyVector<T>::begin(){
    return phead;
}

template<typename T>
typename MyVector<T>::iterator MyVector<T>::end(){
    return pfinish;
}

template<typename T>
size_t MyVector<T>::size(){
    return size_t(end() - begin());
}

template<typename T>
size_t MyVector<T>::capacity(){
    return size_t(pend - begin());
}

template<typename T>
void MyVector<T>::resize(size_t n, const T &data){
    if(n < size())
        pfinish = phead + n;
    else{
        if(n > capacity())
            reserve(n);
        for(int i = size();i < n;i++)
            push_back(data);
    }  
}

template<typename T>
void MyVector<T>::reserve(size_t n){
    if(n > size()){
        size_t length  = size();
        iterator temp = new T [n + 1];
        if(phead != nullptr){
            for(int i = 0;i != length;i++)
                temp[i] = phead[i];
            delete[] phead;
        }
        phead = temp;
        pend = temp + n;
        pfinish = temp + length;
    }
}

template<typename T>
void MyVector<T>::push_back(const T &data){
    if(size() != capacity());
    else{
        reserve(size() + 1);
    }
    *pfinish = data;
    pfinish++;
}

template<typename T>
void MyVector<T>::pop_back(){
    if(size() == 0)
        exit(-1);
    pfinish--;
}
#endif 
