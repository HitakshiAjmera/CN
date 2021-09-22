/*
Program 5: Write a program to display the class of the IP Address entered by the user.
Sample Input: 
Enter the IP Address in Dotted Decimal Notation: 193.90.74.125
Enter the first octet: 193
Enter the second octet: 90
Enter the third octet: 74
Enter the fourth octet: 125
Sample Output: It is Class B address
A -> 0-127
B -> 128-191
C -> 192-223
D -> 224-239
E -> 240-255 
*/
#include <iostream>
using namespace std;
 
int main()
{
    int octet[4];
   
	cout<<"Enter the IP in Dotted Decimal Notation:";
	cout<<"\nEnter first octet:";
	cin>>octet[0];
	cout<<"Enter second octet:";
	cin>>octet[1];
	cout<<"Enter third octet:";
	cin>>octet[2];
	cout<<"Enter fourth octet:";
	cin>>octet[3];
    
	cout<<endl;
	
	if(octet[0]>=0 && octet[0]<=127)  cout<<"It is class A address";  
    else if(octet[0]>=128 && octet[0]<=191) cout<<"It is class B address";
    else if(octet[0]>=192 && octet[0]<=223) cout<<"It is class C address";
    else if(octet[0]>=224 && octet[0]<=239) cout<<"It is class D address"; 
    else if(octet[0]>=240 && octet[0]<=255) cout<<"It is class E address";
    else cout<<"It does not belong to any of the class ";
  
    return 0;
}
