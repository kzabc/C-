//
// Created by zkay on 2019/2/18.
//
//C++  第一个类 学习
#include <iostream>
#include <string>
using namespace std;
class FristClass{
    private:
    string name;
    string sex;
    int age;
    public:
        FristClass(){
            cout << "开始创建人物"<<endl;
        }
        void set(string a, string b,int c){
            name = a;
            sex  = b;
            age = c;
        }
        void get(){
            cout <<"姓名:"<<name<<endl;
            cout <<"性别:"<<sex<<endl;
            cout <<"年龄:"<<age<<endl;
            number();
        }

    private:
        void number(){
            cout <<"身份证：1234567890"<<endl;
        }

};
int main(){
    FristClass a;
    a.set(string("啦啦啦"),string("男"),12);
    a.get();
}
