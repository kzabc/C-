//
// Created by zkay on 2019/2/19.
//
#include <iostream>
#include <cmath>
using namespace std;

class coordinates{

    private:
        int x,y,z;


    public:
        coordinates(){};
        coordinates(int a,int b,int c=0){
            x=a;
            y=b;
            z=c;
        }
        void sex(int a,int b,int c =0){

            x=a;
            y=b;
            z=c;
        }

void getLength(coordinates &obj) {
            //不知道怎么判段是否赋值
            if(z && obj.z){
                cout <<"obj.x="<<obj.x<<" obj.y="<<obj.y<<endl;
                cout <<"x="<<x<<" y="<<y<<" z="<<z<<endl;
                cout<<pow((obj.x-x),2)<<endl;
                cout<<pow((obj.y-y),2)<<endl;
                cout<<pow((obj.z-z),2)<<endl;
                cout << sqrt(abs(pow((obj.x-x),2)+pow((obj.y-y),2)+pow((obj.z-z),2)));
            }else{
                cout <<"obj.x="<<obj.x<<" obj.y="<<obj.y<<endl;
                cout <<"x="<<x<<" y="<<y<<endl;
                cout<<pow((obj.x-x),2)<<endl;
                cout<<pow((obj.y-y),2)<<endl;
                cout << sqrt(abs(pow((obj.x-x),2)+pow((obj.y-y),2)));
            }

        }

};
int main(){
    int x,y,z,t,x1,y1,z1;
    cout <<"1.平面坐标"<<endl;
    cout <<"2.空间坐标"<<endl;
    cin>>t;
    coordinates A;
    coordinates B;
    switch(t){
        case 1:
            cout<<"请输入x,y"<<endl;
            cin>>x>>y;
            cout<<"请输入x1,y1"<<endl;
            cin>>x1>>y1;
            A.sex(x,y);
            B.sex(x1,y1);
            break;
        case 2:
            cout<<"请输入x,y,z"<<endl;
            cin>>x>>y>>z;
            cout<<"请输入x1,y1,z1"<<endl;
            cin>>x1>>y1>>z1;
            A.sex(x,y,z);
            B.sex(x1,y1,z1);
            break;
        default:
            cout<<"输入有误！程序结束";
            exit(1);

    }

    A.getLength(B);

}