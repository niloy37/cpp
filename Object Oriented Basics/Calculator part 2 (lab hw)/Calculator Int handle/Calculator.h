#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#define pf cout
#define sf cin
class Calculator {
	private:
		int a;
		int b;
	public:
		Calculator(int,int);
		int add();
		int multiply();
		float divide();
		int subtract();
		void  setValue(int,int);
	};


#endif // CALCULATOR_H_INCLUDED
