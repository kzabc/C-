#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void quickSort(int s[]){
	
}
int main(){
	//练习题
	int x(58),y(60);
	const int *p =&x;
	y=*p;
	//&y=x;
	int *k = &x;
	//cout <<y<<*p<<*k<<k;
	//p =38;
	//const int &q=&x;
	cout <<p<<endl;
	int a[]={1,3,4,7,6,2,8},b[6];
	//计算数组长度
	int count =sizeof(a)/sizeof(a[0]);
	copy(a,a+count,ostream_iterator<int>(cout," "));
	for(int i=0;i<count;i++){
		for(int j=0;j<count-1-i;j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout << endl;
	for(int i =0;i<count;i++){
		cout <<a[i]<<' ';
	}
}

