#include <iostream>
using namespace std;


//用类模板创建数组
template<typename T,int size>
class Data{
private:
    T data[size];
public:
    Data(){
        cout << "input:" << size <<"datas" << endl; 
        for(int i = 0;i < size;i++)
            cin>>data[i];
    }
    void show(){
        cout << size << " datas:" << endl;
        for(int i = 0;i < size;i++)
            cout << data[i] << "\t";
        cout<<endl;
    }
    T getmax();
};
template<typename T,int size>
T Data<T, size>::getmax(){
    T max = data[0];
    for(int i = 1;i < size;i++){
        if(data[i] > max)max=data[i];
    }
    return max;

};

int class_moban(){
    Data<int,5> d;
    d.show();
    cout << "Max is " << d.getmax() << endl;
    system("pause");
    return 0;
}