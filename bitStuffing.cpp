/*
Program 3: Write a program to bit stuff the given binary data.
Algorithm for Bit-Stuffing 
1. Start 
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame. 
3. Get the bit stream to be transmitted in to the array. 
4. Check for five consecutive ones and if they occur, stuff a bit 0 
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End. 
6. For de-stuffing, copy the transmitte
6. For de-stuffing, copy the transmitted data to another array after detecting the stuffed bits. 
7. Display the received bit stream. 
8. Stop
INPUT/OUTPUT: 
Enter the bit string (space for each byte) 11111111 01111110 00111110 
After stuffing: 01111110 111110111011111010001111100 01111110
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
string bit;
string BFrame ="01111110";
int count=0;
cout<<"Enter the bit string ";
getline(cin , bit);

for (int i=0;i<bit.length();i++)
{
	
	if(bit[i]=='1')
		count++;
	else
		count=0;
	
	if(count==5)
		{
			bit.insert(i+1,"0") ;
			count=0;
		}
}

string Sbit = BFrame + " " + bit + " " + BFrame;
cout<<"After stuffing: "<<Sbit; 
return 0;	
}
