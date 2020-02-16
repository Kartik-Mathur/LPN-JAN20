// Subsequences
#include<iostream>
using namespace std;

void Subsequences(char* in,char *out,int i,int j){
	if(in[i] == '\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// Ek baari ith character ko consider kia
	out[j] = in[i];
	Subsequences(in,out,i+1,j+1);

	// Ekbaari ith character ko consider nahi kia
	Subsequences(in,out,i+1,j);
}

int main(){
	char in[]="abc";
	char out[100];

	Subsequences(in,out,0,0);
	return 0;
}