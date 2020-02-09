#include<iostream>
using namespace std;


int length(char *a){
    int i=0;
    for( ; a[i]!='\0';i++){

    }
    return i;
}

int main(){

	char a[]="abaccd";
	char b[]="accdaz";

	int freq[26] = {0};

	for(int i=0;a[i]!='\0';i++){
		char ch = a[i];
		int index = ch-'a';

		freq[index]++;
	}

	for(int i=0;i<26;i++){
		cout<<freq[i]<<' ';
	}
	cout<<endl;
	
	for(int i=0;b[i]!='\0';i++){
		char ch = b[i];
		int index = ch-'a';

		freq[index]--;
	}
	int i;
	for(i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"Not a Permutation"<<endl;
			break;
		}
	}
	if(i==26){
			cout<<"Permutation"<<endl;
	}
	cout<<endl;












	return 0;
}