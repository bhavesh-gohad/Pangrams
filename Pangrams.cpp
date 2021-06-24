#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000];
	gets(s);

	int freq[26]={0};
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			char c=tolower(s[i]);
			int index=c-'a';
			freq[index]=freq[index]+1;
		}
	}
	int flag=true;
	for(int i=0;i<26;i++)
	{
		if(freq[i]==0)
		{
			flag=false;
//			break;
		}
	}	
	if(flag==true)
		cout<<"Pangram"<<endl;
	else
		cout<<"not pangram"<<endl;
		
	return 0;
}
