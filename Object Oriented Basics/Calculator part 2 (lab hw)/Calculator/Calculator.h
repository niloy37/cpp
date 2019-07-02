#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#define pf cout
#define sf cin
template <class T>
class Calculator {
	private:
		T a;
		T b;
	public:
		Calculator(T,T);
		T add();
		T multiply();
		T divide();
		T subtract();
		void  setValue(T,T);
	};


#endif // CALCULATOR_H_INCLUDED
