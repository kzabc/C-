//
// Created by zkay on 2019-03-05.
//

class test{
    static int x;
    int y;
public:
    test(){};
    test(int,int);
    static int getStatic(){ return x++;};
    static void setY(test &r,int a){
        r.y =a;
    }
    int getY(){
        return y;
    }
};
#include <iostream>
using namespace std;
test::test(int a, int b) {
    test::x=a;
    y=b;
}
int main (){
    test a(3,5);
   cout <<a.getStatic()<<endl;
    test b;
    cout <<b.getStatic()<<endl;
    b.setY(b,58);
    cout<<a.getY()<<endl;
    test::setY(b,56);
    cout<<b.getY()<<endl;
    cout <<test::getStatic()<<endl;
}