#include<iostream>
using namespace std;

class House{
	public:
		int h_no;
		char h_name[50];
		int h_hall;
		int h_rooms;
		int h_balcony;
		int h_washroom;
		char h_city[50];
			
};

class Rooms{
	public:
		int r_no;
		char r_name[50];
		int r_cupboard;
		int r_drawers;
		int r_windows;
		int r_lights;
		int r_photoframe;
		
};

int main()
{
	House h1;
	 
	Rooms r[3];
	    
	    int i;
	   
		cout << "Enter no. of House : ";
	    cin >> h1.h_no;
		cout << "Enter House Name : ";
	    cin >> h1.h_name;
		cout << "Enter no. of Hall : ";
	    cin >> h1.h_hall;    
		cout << "Enter no. of Rooms : ";
	    cin >> h1.h_rooms;
		cout << "Enter no. of balcony : ";
	    cin >> h1.h_balcony;
		cout << "Enter no. of Washroom : ";
	    cin >> h1.h_washroom;
    	cout << "Enter city : ";
	    cin >> h1.h_city;
		    
	    cout << "--------------------------------" << endl;
	    
	    cout << "Number : " << h1.h_no << endl;
	    cout << "Name : " << h1.h_name << endl;
	    cout << "Hall : " << h1.h_hall << endl;
	    cout << "Rooms : " << h1.h_rooms << endl;
	    cout << "Balcony : " << h1.h_balcony << endl;
	    cout << "Washroom : " << h1.h_washroom << endl;
        cout << "City : " << h1.h_city << endl;
    
        cout << "--------------------------------" << endl;

	    for(i=0;i<3;i++)
	    {
	    	cout << "Enter room number : ";
	    	cin >> r[i].r_no;
	    	cout << "Enter room Name : ";
	    	cin >> r[i].r_name;
	    	cout << "Enter no. of Cupboard : ";
	    	cin >> r[i].r_cupboard;
	    	cout << "Enter no. of Drawers : ";
	    	cin >> r[i].r_drawers;
	    	cout << "Enter no. of Windows : ";
	    	cin >> r[i].r_windows;
	    	cout << "Enter no. of Lights : ";
	    	cin >> r[i].r_lights;
	    	cout << "Enter no. of Photoframe : ";
	    	cin >> r[i].r_photoframe;
	        
		    cout << "--------------------------------" << endl;	
	    
		}

        cout << "--------------------------------" << endl;	    
	    	
	    for(i=0;i<3;i++)
	    {
	   
	    	cout << "Number : " << r[i].r_no << endl;
	    	cout << "Name : " << r[i].r_name << endl;
	    	cout << "Cupboard : " << r[i].r_cupboard << endl;
	    	cout << "Drawers : " << r[i].r_drawers << endl;
	    	cout << "Windows : " << r[i].r_windows << endl;
	    	cout << "Lights : " << r[i].r_lights << endl;
	   		cout << "Photoframe : " << r[i].r_photoframe << endl;
	    
		    cout << "--------------------------------" << endl;	
	    
		}
	    	
    return 0;
}
