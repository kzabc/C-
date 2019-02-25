#include <iostream>
using namespace std; //C++ include 系统文件不需要后缀.h 可用<> 或 “”  区别前者先去系统文件找， 后者先找自己目录的文件

int main(){	//void 无类型表示符，不可声明变量。C++必须声明返回类型及声明变量类型
	
	//cout<<"hello world";
	const double PI =3.14;
	//cout << P <<endl;
	int a(0),b(0),c(0);
	cout << "请输入半径:"<<endl;
	cin >>c;
	cout <<"圆的面积是"<< PI*c*c<<endl;
	cout <<"请输入长和宽:"<<endl;
	cin >>a>>b;
	cout <<"长方形的面积是"<<a*b<<endl;

	int *d;
	d = new int[3];
	for(int i = 0; i<3;i++){
		cin >> *(d+i);
		cout<<d+i<<endl;//打印指针
		cout<<*d+i<<endl;
	}
	delete d;
	cout <<d<<endl;
	cout <<&d;
	//cout << *d<<endl;
	int &f = c;
	cout << f << c<<endl;
	cout <<&f << &c << endl;
	return 0;

}
