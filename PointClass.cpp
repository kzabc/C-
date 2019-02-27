//
// Created by zkay on 2019-02-27.
//

#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point (int=0,int=0);
    ~Point ();
    void set(int x, int y);
    void get();
};
Point::Point(int a, int b):x(a),y(b) {
    cout<<"hello world"<<endl;
}
Point::~Point() {
    cout <<"system exit "<<endl;
}
//void Point::get() {
//    cout <<"x = "<< x<<"y = "<< y;
//}
//void Point::set(int a, int b) :x(a),y(b){
//
//}
int main(){
    Point A;
    Point *B =new Point;
    delete B;
}
