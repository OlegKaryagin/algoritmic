#include <iostream>
#include <vector>
using namespace std;

void f(vector<int>& v)
{
	int n = 5;
	v.resize(n);
}

int main() {
	vector<int> vec;
	f(vec);
	char symbol;
	cout << "Enter the symbol"<<endl;
	cin >> symbol;
	cout << "Hello World!";
	return 0;
}
