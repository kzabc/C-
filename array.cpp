//
// Created by zkay on 2019/2/18.
//
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int  a[] = {1,3,8,4,2},b[5];

    reverse(a,a+5);

    copy(a,a+5,b);
    for (int i = 0; i <=4 ; i++) {
        cout << b[i];
    }
    cout <<endl;
    sort(a,a+5);
    for (int i = 0; i <=4 ; i++) {
        cout << a[i];
    }
    cout <<endl;
    sort(b,b+5,greater <int> ());
    for (int j = 0; j <=4; ++j) {
        cout << b[j];
    }
    cout <<endl;

    int *x =find(a,a+5,3);
    cout << *x<<endl;
    copy(a,a+5,ostream_iterator <int> (cout,""));
    reverse_copy(a,a+5,ostream_iterator <int> (cout," "));
    for (int i = 0; i <=4 ; i++) {
        cout << a[i]<<" ";
    }



}
