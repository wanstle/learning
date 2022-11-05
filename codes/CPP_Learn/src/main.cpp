#include <iostream>
#include <vector>

using namespace std;
// The example of using MyVector
int isHappy(int n) {
        vector <int> s;
        vector <int> num;
        int nN = 0;
        int flag = 0;
        while(n > 10){
            num.push_back(n % 10);
            n = n / 10;
        }
        num.push_back(n);

        for(auto p = num.begin();p != num.end();p ++)
            nN += (*p) * (*p);


        while(flag == 0){
            s.push_back(nN);
            num.clear();
            while(nN > 10){
                num.push_back(nN % 10);
                nN = nN / 10;
            }
            num.push_back(nN);
            nN = 0;
            for(auto p = num.begin();p != num.end();p ++)
                nN += (*p) * (*p);
            for(auto p = s.begin();p != s.end();p ++)
                if(nN == *p)
                    flag = 1;
        }
                    for(auto p = s.begin();p != s.end();p ++){
                        cout << *p << endl;
                    }
        if(nN == 1)
            return nN;
        else return nN;
    }
int main(){
    cout << isHappy(19);
}