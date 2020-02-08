// CharacterArrays
#include<iostream>
using namespace std;

void PrintArray(char* a){
    cout<<a<<endl;
    for(int i=0;a[i]!='\0';i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

int main(){
	char c[100]={'A','B','C','D','\0'};
    // char a[500] =  "Hello World!!";
    char a[100];

    int i = 0;
    char ch;
    ch = cin.get();
    while(ch!='\n'){
        a[i]=ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
    // cin>>a;
    // cin>>b;
    cout<<a<<endl;
    PrintArray(a);

    // PrintArray(a);

	// cout<<c<<endl;
	// cout<<a<<endl;

    // cout<<c[0]<<endl;
    // cout<<c[2]<<endl;


	return 0;
}