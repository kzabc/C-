//
// Created by zkay on 2019/2/11.
//

#include <iostream>
#include <dirent.h>
using namespace std;

int main(int argc,char *argv[]){
    //cout << argc;
    int x =56;
    int &y =x;
    cout <<"x="<<x<<",&x="<<&x<<endl;
    cout <<"y="<<y<<",&y="<<&y<<endl;

//    x=56,&x=0x7ffee03eea84
//    y=56,&y=0x7ffee03eea84

    int a[]={1,2,3};
//    for(int i=0;i< sizeof(a)/ sizeof(a[0]);i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//    int *p;
//    *p = 3;
//    cout <<p<<endl;
//    cout <<*p<<endl;
//    p = new int[10];

    // 操作数组指针输入输出
//    for (int i = 0; i <10 ; i++) {
//        cin >> *(p+i);
//    }
//    for(int i = 0;i<10;i++){
//
//        cout <<*(p+i);
//    }
 //delete[] p;
    //typedef 自定类型
    typedef int array[10];
    array c ={1,2,3,4,5,6,7,8,9,10};
    array &b=c;
    c[2]=100;
    for (int i = 0; i <10 ; ++i) {
        cout <<b[i]<<" ";
    }
    cout <<endl;
    //  指向 常量的指针
    const int  g= 58;
    const int *f = &g;
    const int h = *f;
    int zk = 123;
    f = &zk;
    
    cout <<f<<endl;
    cout <<*f<<endl;
    //常量指针

    cout  <<&x<<endl;
    int * const pi=&x;
    *pi=55;
    cout <<x<<endl;
    cout <<pi<<endl;

    return 1;
}