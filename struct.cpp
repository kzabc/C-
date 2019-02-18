//
// Created by zkay on 2019/1/22.
//
#include <iostream>
using namespace std;
struct test{

private:
        double x,y;

public:
    test(){};
    test(double a, double b){
        x=a;
        y=b;
    }
    void set(double a, double b){

        x=a;
        y=b;
    }
    void get(){
        cout <<"x="<<x<<"y="<<y<<endl;
    }

};
int main(){
    double a(0),b(0);
    test user(123.1,456.2);
    user.get();
    cin >>a;
    cin >>b;
    user.set(a,b);
    user.get();
    return 1;
}