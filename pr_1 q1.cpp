#include<iostream>
using namespace std;  

class Distance{
	public:
		int feet;
		int inch;
	
};

int main()
{
	
	Distance d1,d2,d3;

		cout << "Enter 1 Feet : ";
		cin >> d1.feet;
		cout << "Enter 1 Inch : ";
		cin >> d1.inch; 
		cout << "Enter 2 Feet : ";
		cin >> d2.feet;
		cout << "Enter 2 Inch : ";
		cin >> d2.inch; 
		
		d3.feet = (d1.feet + d2.feet) + ((d1.inch+d2.inch)/(d1.feet+d2.feet));
		
	   d3.inch = (d1.inch+d2.inch) % (d1.feet+d2.feet);
	   
	   cout << "Total Feet : " << d3.feet << endl;
	   cout << "Total Inch : " << d3.inch;
	
	return 0;
}
