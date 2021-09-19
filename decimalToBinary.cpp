//1. Binary to decimal conversion

#include<iostream>
using namespace std;

int main()
{
	int DN ;
	cout<<"Enter a decimal number: ";
	cin>>DN ;
	int BNarr[8] = {0};

    for(int i=7;i>=0;i--) 
	{
        BNarr[i] = DN % 2 ;
        DN = DN / 2 ;
    }
    cout<<"Binary Number is :- " ;
	for(int i=0 ;i<8;i++)
	{
		cout<<BNarr[i]<<" ";
	}
	
}
