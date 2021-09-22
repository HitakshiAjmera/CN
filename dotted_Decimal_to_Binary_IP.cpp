/*
	Program 4: Write a program to convert Dotted Decimal Notation IP to Binary Notation IP
	Sample input by user: 
	Enter the IP in Dotted Decimal Notation:
	Enter first octet: 126
	Enter second octet: 7
	Enter third octet: 89
	Enter fourth octet: 76
	You entered in Dotted Decimal Notation: 126.7.89.76
	Sample output:
	IP in Binary Decimal Notation: 
	01111110 00000111 01011001 01001100 
*/

#include <iostream>
using namespace std;

void decToBin( int arr[][8] , int row )
{
	int num = arr[row][0];
    for(int i=7 ;i>=0 ;i--)
	{
        arr[row][i] = num % 2 ;
        num = num / 2 ;
    }
}

int main()
{
	int octet[4][8] ;
	
	cout<<"Enter the IP in Dotted Decimal Notation:"<<endl;
	cout<<"Enter first octet: ";
	cin>>octet[0][0];
	cout<<"Enter second octet:";
	cin>>octet[1][0];
	cout<<"Enter third octet:";
	cin>>octet[2][0];
	cout<<"Enter fourth octet:";
	cin>>octet[3][0];
	
	for( int i = 0 ; i<4 ; i++ )
	{
		decToBin( octet , i ) ;
	}
	
	cout<<"\nIP in Binary Decimal Notation: "<<endl;
	for( int r=0 ; r< 4 ; r++ )
	{
		for( int c = 0 ; c<8 ; c++ )
			cout<<octet[r][c];
		cout<<" ";
	}	
		
}
