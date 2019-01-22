//
// Created by zkay on 2019/1/22.
//
#include <iostream>
using namespace std;
struct test{
    void set(double a, double b){

        x=a;
        y=b;
    }
    void get(){
        cout <<"x="<<x<<"y="<<y;
    }
    double x,y;
};
int main(){
    double a(0),b(0);
    test user;
    cin >>a;
    cin >>b;
    user.set(a,b);
    user.get();
    return 1;
}