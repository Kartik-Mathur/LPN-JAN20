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

int length(char *a){
    int i=0;
    for( ; a[i]!='\0';i++){

    }
    return i;
}

void InputArray(char a[],char delimit='\n'){ 
    int i = 0;
    char ch;
    ch = cin.get();
    while(ch!=delimit){
        a[i]=ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';	
}

int sum(int a,int b,int c){
	return a+b+c;
}

bool pallindrome(char *a){
    int i = 0;
    int j = length(a) - 1;
    while(i<j){
        if(a[i]!=a[j]){
            // break;
            return false;
        }
        i++;
        j--;
    } 
    if(i == j){
        return true;
    }
}


int main(){
	char c[100]={'A','B','C','D','\0'};
    // char a[500] =  "Hello World!!";
    char a[100];
    // InputArray(a);
    cin.getline(a,100);
    PrintArray(a);
    cout<<length(a)<<endl;
    if(pallindrome(a) == true){ 
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    // cout<<sum(1,2,3)<<endl;
    // cout<<sum(1,2)<<endl;
    // cout<<sum(1)<<endl;
    // cin>>a;
    // cin>>b;
    // cout<<a<<endl;


    // PrintArray(a);

	// cout<<c<<endl;
	// cout<<a<<endl;

    // cout<<c[0]<<endl;
    // cout<<c[2]<<endl;


	return 0;
}