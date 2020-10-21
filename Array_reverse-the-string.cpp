//LINK=https://practice.geeksforgeeks.org/problems/reverse-the-string/0

//solution


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    int j=n;
	    for(int i=0;i<n/2;i++)
	    {
	        j--;
	        char t=s[i];
	        s[i]=s[j];
	        s[j]=t;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
