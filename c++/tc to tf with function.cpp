#include <iostream>
using namespace std;
     
      double tc_to_tf (double tc) {
	  
      	return (tc * 1.8 )+32;
	       }
       int main () {
       	double tc, tf;
       	
       	cout << "enter t in tc: ";
       		cin >> tc;
       		
       		tf = tc_to_tf(tc);
       		
       		cout << "t in tf : " << tf << endl;
       		
       		return 0;
	   } 
