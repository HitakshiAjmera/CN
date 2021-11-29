/*
Program 6: Write a program to convert IP address provided by the user in Binary notation to Dotted Decimal Notation entered by the user.
Sample Input: 
Enter the IP Address in Dotted Decimal Notation: 
Enter the Binary for first octet: 10001001 
Enter the Binary for second octet: 01111011 
Enter the Binary for third octet: 10000000 
Enter the Binary for fourth octet: 11111011
Sample Output: The given IP address is: 137.123.128.251
*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int bin_to_dec(string add)
{
	int num = 0;
	int base = 0;
	int i = add.length()-1;
	while( i >= 0 )
	{
	 	if( add[i] == '1')
		 	num = num + pow(2,base);
        base++;	
        i--;
	}
	return num;
}
int main()
{
	string first , second , third , fourth ;
	cout<<"Enter the IP Address in Dotted Decimal Notation\nEnter the Binary for first octet:";
	getline( cin>> ws, first);
	cout<<"\nEnter the Binary for second octet:";
	getline( cin>> ws, second);
	cout<<"\nEnter the Binary for third octet:";
	getline( cin>> ws, third);
	cout<<"\nEnter the Binary for fourth octet:";
	getline( cin>> ws, fourth);
	
	if( first.length()== 8 && second.length()== 8 && third.length()== 8 && fourth.length()== 8)
	{
		int f = bin_to_dec(first) ;
		int s = bin_to_dec(second) ;
		int t = bin_to_dec(third) ;
		int fth = bin_to_dec(fourth) ;
		
        cout<<"\nDecimal IP address is :\n"<<f<<"."<<s<<"."<<t<<"."<<fth<<"\n";
	}
	else cout<<"Invalid Address\n";
}
