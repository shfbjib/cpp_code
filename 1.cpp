#include<iostream>
using namespace std;
int f(int v) {
	int sum;
	if (v == 1) sum = 1;
	if (v > 1) {
		return v * v + f(v - 1);
	}
}
int main(){
	int n;
	cout << "请输入一个整数：";
	cin >> n;
	cout << f(n) << endl;
	return 0;
}