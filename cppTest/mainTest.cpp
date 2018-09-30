#include "std_lib_facilities.h"
#include <Windows.h>
#include "selfmath.h"


vector<Token> tok;


int main()
{

	while (cin) {
		Token t = get_token();
		tok.push_back(t);
	}

	for (int i = 0; i < tok.size(); ++i) {
		if (tok[i].kind == '*') {
			double d = tok[i - 1].value*tok[i + 1].value;
		}
	}

	/*
	cout << "Please enter expression (we can handle +, -, *, and /)\n";
	cout << "add an x to end expression (e.g., 1+2*3x): ";
	int lval = 0;
	int rval;
	cin >> lval; // read leftmost operand
	if (!cin) error("no first operand");
	for (char op; cin >> op; ) { // read operator and right-hand operand
	// repeatedly
		if (op != 'x') cin >> rval;
		if (!cin) error("no second operand");
		switch (op) {
		case '+':
			lval += rval; // add: lval = lval + rval
			break;
		case '-':
			lval -= rval; // subtract: lval = lval – rval
			break;
		case '*':
			lval *= rval; // multiply: lval = lval * rval
			break;
		case '/':
			lval /= rval; // divide: lval = lval / rval
			break;
		default: // not another operator: print result
			cout << "Result: " << lval << '\n';
			system("pause");
			return 0;
		}
	}
	error("bad expression");
	*/

	system("pause");
	return 0;
}