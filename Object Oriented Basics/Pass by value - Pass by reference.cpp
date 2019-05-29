#include <iostream>
using namespace std;
class Test{
	int i=10;
	public:
	void change(int a){
	i=a;
	a=400;
	}
	void change2(int &a){
		i=a;
		a=400;
	}
};

int main() {
	// your code goes here
int num = 20;
Test t1;
t1.change(num);
cout<<num;
t1.change2(num);
cout<<"\n"<<num;
	return 0;
}
