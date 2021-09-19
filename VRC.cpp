/* 
Program : Write a program to generate VRC for a given Character.
Input: Character (Any Letter, digit or symbol) (ASCII value to binary)
(Generate binary (8 bits) according to the ASCII value)
Output: VRC with even/odd parity in 9 bits
*/

#include <iostream>
#include <string>
using namespace std;

string DecToBinary(int x)
{
    string S,BN;
    while (x > 0)
    {
        if (x % 2 == 1)
            S += '1';
        else
            S += '0';
        x = x / 2;
    }
    int size = S.length();
    for (int i = size-1; i>=0; i--) {BN += S[i];}
    
	return BN;
}

int main()
{
	char C;
    cout<<"Enter a character : ";
    cin>>C;
    string BN= DecToBinary(int(C));
    cout<<"Binary code of "<<C<<" is :"<<BN<<endl;
    int count=0;
    for (int i = 0; i < BN.length(); i++)
    {
        if(BN[i]=='1')
            count++;
    }
    if(count%2==0)
        BN+='0';
    else
        BN+='1';

    cout<<"VRC of "<<C<<" is : "<<BN;
    return 0;
}
