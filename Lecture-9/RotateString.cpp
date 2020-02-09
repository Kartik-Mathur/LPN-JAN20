// RotateString
#include<iostream>
using namespace std;


int length(char *a){
    int i=0;
    for( ; a[i]!='\0';i++){

    }
    return i;
}

void RotateString(char *a,int n){
	int len =length(a); 
	int i = len;
	while(i>=0){
		a[i+n] = a[i];
		i--;
	}
	cout<<a<<endl;
	i = 0;
	int j=len;
	for(int k=1;k<=n;k++){
		a[i] = a[j];
		i++;
		j++;
	}
	cout<<a<<endl;
	a[len] = '\0';
	cout<<a<<endl;
}

int main(){
	char a[100]="Coding";
	int n ;
	cin>>n;
	cout<<a<<endl;
	RotateString(a,n);




	return 0;
}