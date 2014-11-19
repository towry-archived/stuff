#include <iostream>

using namespace std;

int main() {
	int* p = new int(0);
	int* q = new int(12);

	auto_ptr<int> ap(p);
	auto_ptr<int> aq(q);

	cout << *aq << endl;

	// [1]
	ap = aq;

	cout << *ap << endl;
	// error
	// after [1], the aq is not reference to anywhere.
	cout << *aq << endl; 	

	cin.get();
	return(0);
}