//
// Created by zkay on 2019-03-07.
//

#include "equation.h"
FindRoot::FindRoot() {
    cout<<"hello world"<<endl;
}
FindRoot::FindRoot(float x,float y,float z):a(x),b(y),c(z) {
    d = b*b-4*a*c;
    cout<<d<<endl;
}
void FindRoot::Find() {
    if(d == 0 ){
        x1= x2= (-b)/(2*a);
    }else if(d<0){
        x1 =  (-b)/(2*a);
        x2 =  sqrt(-d)/(2*a);
    }else if(d>0){
        x1 =  (-b+sqrt(d))/(2*a);
        x2 =  (-b-sqrt(d))/(2*a);
    }
}
void FindRoot::Display() {
    if(d==0){
        cout<<"x1=x2= "<<x1<<endl;
    }else if(d<0){
        cout<<"x1="<<x1<<"+"<<x2<<endl;
        cout<<"x2="<<x1<<"-"<<x2<<endl;
    }else if (d>0){
        cout<<"x1="<<x1<<"\nx2="<<x2<<endl;

    }
}
FindRoot::~FindRoot() {
    cout<<"draw to a close"<<endl;
}

