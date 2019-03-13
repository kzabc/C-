//
// Created by zkay on 2019-03-05.
//
#include <iostream>
using namespace std;
class object{
    private: int val;
    public:
    object():val(0){
        cout<<"无参构造函数"<<endl;
    }
    object(int i):val(i){
        cout<<"带参数构造函数val="<<val<<endl;
    }
    ~object(){
        cout<<"析构函数"<<endl;
    }
};
class container{
private:

    int data;
    object one;
    object tow;
public:
    container():data(0){
        cout<<"container无参构造函数"<<endl;
    }
    container(int i,int j,int k):data(k),tow(j),one(i){
        cout <<"container有参构造函数"<<data<<endl;
    }
    ~container(){
        cout <<"container析构函数"<<endl;
    }
};
int main(){
    container obj,anobj(5,6,10);
}