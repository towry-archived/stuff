#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>	// std::max

using namespace std;

template<typename T>
void vprint(const T & t)
{
	for (unsigned int i = 0; i < t.size(); i++)
	{
		cout << t[i];
	}
	cout << endl;
}


// override the + operator for vector
vector<short int> operator+(const vector<short int> a, const vector<short int> b)
{
	vector<short int> acopy = a;
	vector<short int> bcopy = b;
	vector<short int> v;
	vector<short int>::iterator it;

	int range;
	int asize = acopy.size();
	int bsize = bcopy.size();

	if (asize > bsize) 
	{
		for (unsigned int i = asize - bsize; i != 0; i--)
		{
			bcopy.push_back(0);
		}
	}
	else 
	{
		for (unsigned int i = bsize - asize; i != 0; i--)
		{
			acopy.push_back(0);
		}
	}

	range = max(asize, bsize);

	for (unsigned int i = 0; i < range; i++)
	{

		int cur = acopy[i] + bcopy[i];
		if (cur >= 10)
		{
			acopy[i+1] += 1;
			cur %= 10;
		}
		v.push_back(cur);
	}

	return(v);
}

class BigInt
{
public:
	vector<short int> exp;
	unsigned int size;
	BigInt();
	void add(const BigInt &);
	void mutiply(BigInt & a);
	void print();
	BigInt(string x);
};

BigInt::BigInt()
{
	exp.push_back(0);
	size = 1;
}

// add two BigInt
void BigInt::add(const BigInt & y)
{
	vector<short int> yvec = y.exp;
	vector<short int> & xvec = exp;
	vector<short int> v;

	unsigned int range;

	if (y.size > size) 
	{
		for (unsigned int i = y.size - size; i != 0; --i)
		{
			xvec.push_back(0);
		}
		range = y.size;
	} 
	else 
	{
		for (unsigned int i = size - y.size; i != 0; --i)
		{
			yvec.push_back(0);
		}
		range = size;
	}

	for (unsigned int i = 0; i < range; i++)
	{
		int cur = xvec[i] + yvec[i];
		if (cur >= 10)
		{
			xvec[i+1] += 1;
			cur %= 10;
		}
		xvec[i] = cur;
	}

	size = range;
}

// mutiply two BigInt
void BigInt::mutiply(BigInt & a)
{
	vector<short int> avec = a.exp;
	vector<short int> & bvec = exp;
	vector<short int> v;
	vector<short int> r;
	short int t = 0;
	short int carry = 0;
	vector<short int>::iterator it;

	for (unsigned int i = 0; i < avec.size(); i++)
	{
		for (unsigned int n = 0; n < bvec.size(); n++)
		{
			t = bvec[n] * avec[i];
			t += carry;

			if (t >= 10)
			{
				v.push_back(t%10); // dont change the value of t here, just get the remainer
				carry = t/10;
			}
			else 
			{
				v.push_back(t);
				carry = 0;
			}

		}
		if (carry > 0) v.push_back(carry);

		for (unsigned int p = 0; p < i; p++)
		{
			it = v.begin();
			v.insert(it, 0);
		}
		r = r + v;

		// reset
		v.clear();
		carry = 0;
	}
	exp = r;
	size = r.size();
}

BigInt::BigInt(string s) 
{
	for (unsigned int i = s.length() - 1; i != -1; --i)
		exp.push_back(atoi(s.substr(i, 1).c_str()));
	size = exp.size();
}

void BigInt::print()
{
	for (unsigned int i = size - 1; i != -1; --i)
	{
		cout << exp[i];
	}
	cout << endl;
}


int main()
{
	BigInt a("25646");
	BigInt b("32145");

	a.mutiply(b);
	a.print();

	return(0);
}