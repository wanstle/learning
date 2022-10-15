/*#include "MyVector.h"


#include <iostream>
using namespace std;


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
MyVector<T>::MyVector(const MyVector<T>& v):phead(nullptr),pfinish(nullptr),pend(nullptr){
	MyVector<T> temp(v.begin(), v.end());
	phead = temp.phead;
    pend = temp.pend;
    pfinish = temp.pfinish;
}




/*template<typename T>
MyVector<T>::~MyVector(){

}*/
/*
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
        reverse(size() + 1);
    }
    *pfinish = data;
    pfinish++;
}

template<typename T>
void MyVector<T>::pop_back(){
    if(size() == 0)
        exit(-1);
    pfinish--;
}*/