#include<iostream>
using namespace std;

class Sum{
	private:
		int A;
	    int B;
	    int C;
	
};

int main()
{
	Sum a,b,c;
	
	cout << "Enter value of A : ";
	cin >> a.A;
	cout << "Enter value of B : ";
	cin >> b.B;
	
	c.C = a.A + b.B;
	
	cout << "C = " << c.C;
	
	return 0;
	
}


class Sum{
	public:
		int D;
		int E;
		int F;
	
};

int main()
{
	Sum a,b,c;
	
	cout << "Enter value of D : ";
	cin >> a.D;
	cout << "Enter value of E : ";
	cin >> b.E;
	
	c.F = a.D + b.E;
	
	cout << "F = " << c.F;
	
	return 0;
	
}
