/*
Program 9: Write a program to suggest the user that which class IP address he/she can adopt in order to perform 
networking (using Classful Addressing)
		Input: Number of Hosts
		Output: Suggested IP address Class/ Classes.
*/
#include<iostream>
#include<math.h>
using namespace std;

char sugg_class(int host)
{
	if( host <= pow(2,24)-2 && host > pow(2,16)-2 )
		return('A');
		
	else if( host <= pow(2,16)-2 && host > pow(2,8)-2 )
		return('B');
	else if( host <= pow(2,8)-2 )
		return('C');
}

int main()
{
	int host;
	cout<<"Enter the number of Hosts.\n";
	cin>>host;
	cout<<"Class of IP address you prefer: "<<sugg_class(host) ;
	return 0;
}
