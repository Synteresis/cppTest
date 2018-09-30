#pragma once

double SqrtNumber(double x) {
	if (x <= 0)
		return 0;       // if negative number throw an exception?
	int exp = 0;
	x = frexp(x, &exp); // extract binary exponent from x
	if (exp & 1) {      // we want exponent to be even
		exp--;
		x *= 2;
	}
	double y = (1 + x) / 2; // first approximation
	double z = 0;
	while (y != z) {    // yes, we CAN compare doubles here!
		z = y;
		y = (y + x / y) / 2;
	}
	return ldexp(y, exp / 2); // multiply answer by 2^(exp/2)
}

class Token {
public:
	char kind;
	double value;
	Token(char ch = char())
		:kind(ch), value(0) {}
	Token(char ch, double val)
		:kind(ch), value(val) {}
};

Token get_token()
{
	string word;
	cin >> word;
	if (cin.eof())
	{
		Token temp('z');
		return temp;
	}
	if (word.length() == 1)
	{
		switch (word[0])
		{
		case '+':
		case '-':
		case '/':
		case '*':
		case '=':
		{
			Token temp(word[0]);
			return temp;
		}
		default:
		{
			Token temp('n', stof(word));
			return temp;
		}
		}
	}
	else
	{
		Token temp('n', stof(word));
		return temp;
	}
}