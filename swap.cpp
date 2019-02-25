//
// Created by zkay on 2019/2/22.
//

#include <iostream>
using namespace std;
#include <string>
void swap(string,string);
void swap(string *,string *);
void swap(string &,string &,string);
void swap(int[]);
int main(){
    string a1("现在"),a2("过去");
    swap(a1,a2);
    cout <<"a1 = "<<a1<<" a2 = "<<a2<<endl;

    cout <<"&a1 = "<<&a1<<" &a2 = "<<&a2<<endl;
    swap(&a1,&a2);
    cout <<"a1 = "<<a1<<" a2 = "<<a2<<endl;
     int a[] = {1,2};
    cout <<"a="<<&a<<endl;
    swap(a);
    swap(a1,a2,"啊啊啊啊");
}
void swap(string s1,string s2){
    string temp = s1;
    s1 = s2;
    s2 = temp;
    cout <<"s1 = "<<s1<<" s2 = "<<s2<<endl;
}
void swap(string *s1,string *s2){
    string temp = *s1;
    *s1 = *s2;
    *s2 = temp;
    cout <<"s1 = "<<s1<<" s2 = "<<s2<<endl;
    cout <<"*s1 = "<<*s1<<" *s2 = "<<*s2<<endl;
}
void swap (int a[]){
    cout <<"a[] = "<<a<<endl;
}

void swap(string &s1,string &s2,string s3){
    cout<<s3<<endl;
    cout <<"&s1 = "<<&s1<<" &s2 = "<<&s2<<endl;
    string temp = s1;
    s1 = s2;
    s2 = temp;
    cout <<"s1 = "<<s1<<" s2 = "<<s2<<endl;

}