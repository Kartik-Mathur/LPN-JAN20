// Permutations
#include<iostream>
using namespace std;

void Permutations(char*in,int i){
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}

	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
		Permutations(in,i+1);
		swap(in[i],in[j]);
	}
}

int main(){

	char a[]="abc";
	Permutations(a,0);



	return 0;
}