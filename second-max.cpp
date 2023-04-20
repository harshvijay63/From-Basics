// in this progran we are checking the 3 number which one is the second largest number in this



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ;
	 cin >> n;

	 // int n we take for the test cases 
	 for (int i = 0; i < n ; i++){
	     int x,y,z;
		 //x,y,z we take for the input of three number 
	     cin>>x>>y>>z;
	     if ((x>y && x<z) || (x<y && x>z)){
	         cout << x << endl ;}
			 
	    else if  ((y>x && y<z) || (y<x && y>z)){
	        cout << y << endl;}

	        else {
	            cout << z << endl ;
	        }
	    
	     
	 }
	return 0;
}
