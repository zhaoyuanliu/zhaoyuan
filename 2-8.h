#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	int a,d;
	char b,c;
	int num,answer=1,time=0;
	cin>>a;
	while(cin>>b>>c>>d){
		int s[100][100]={};
		time++;
		for(int i=1;i<=d;i++){
			for(int j=1;j<=d;j++){
			cin>>num;
			s[i][j]=num;
			if(num<0) answer=0;
			}
		}
		for(int i=1;i<=d;i++){
			for(int j=1;j<=d;j++){
				if(s[i][j]!=s[d+1-i][d+1-j]) answer=0;
				}
			}
		if(answer==0) cout<<"Test #"<<time<<": "<<"Non-symmetric."<<endl;
		else cout<<"Test #"<<time<<": "<<"Symmetric."<<endl;
		
		answer=1;
		}
		return 0;
	}
		 
		