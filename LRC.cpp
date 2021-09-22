// LRC Implementation

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
	char A1,A2;
	string lrc;
	
    cout<<"Enter a character 1 : ";
    cin>>A1;
    cout<<"Enter a character 2 : ";
    cin>>A2;
    
    string BN1= DecToBinary(int(A1));
    string BN2= DecToBinary(int(A2));
    cout<<"Binary code of "<<A1<<" is :"<<BN1<<endl;
    cout<<"Binary code of "<<A2<<" is :"<<BN2<<endl;
	
    for (int i = 0; i < BN1.length(); i++)
    {
        if(BN1[i]==BN2[i])
            lrc +='0' ;
        else 
        	lrc +='1';
    }

    cout<<"LRC is "<<lrc;
    return 0;
}
