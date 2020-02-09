#include<iostream>
using namespace std;


int length(char *a){
    int i=0;
    for( ; a[i]!='\0';i++){

    }
    return i;
}

void reverseString(char* a){
	int i = 0;
	int j = length(a)-1;

	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}

int main(){

	char a[100];
	cin.getline(a,100);

	cout<<a<<endl;
	
	reverseString(a);

	cout<<a<<endl;









	return 0;
}