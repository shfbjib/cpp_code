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
	cout << "������һ��������";
	cin >> n;
	cout << f(n) << endl;
	return 0;
}