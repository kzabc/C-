//
// Created by zkay on 2019/2/22.
//

#include <iostream>
using namespace std;

#include <string>
int a[] ={1,2,3,4,5};
int& index(int i);
float  * input(int&);
string input_str(const int);
template <class T>
T maxa(T m1, T m2){
    return (m1>m2)?m1:m2;
}
int main(){
    int a =3;
    index(3) = a;
    cout <<index(3);
    int b = 11;
    float *data;
    cin >>b;
    data = input(b);
    for (int i = 0; i <b ; ++i) {
        cout<<"data["<<i<<"] ="<<data[i]<<endl;
    }
    string str = input_str(b);
    cout <<"str = "<<str<<endl;
    cout << maxa(2,4)<<endl;

    delete(data);
}
float * input(int &n){
    if(n<=0){
        return NULL;
    }
    cout << "请输入"<<n<<"个数字"<<endl;
    float *buf =new float [n];
    for (int i = 0; i <n ; ++i) {
        cin>>buf[i];
    }
    return buf;

}
string input_str(const int n){

        string s1,s2;
    for (int i = 0; i <n ; ++i) {
        cin>> s1;
        s2 +=s1 + ' ';
    }
    return s2;
}
int& index (int i){
    return a[i];
};
