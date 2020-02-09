// LargestOfN
#include<iostream>
using namespace std;


int length(char *a){
    int i=0;
    for( ; a[i]!='\0';i++){

    }
    return i;
}

int main(){
	int n;
	cin>>n;

	char largest[100];
	int largest_size = 0;
	// cin.get();
	cin.ignore();

	for(int i=0;i<n;i++){
		char a[100];
		cin.getline(a,100);
		int len = length(a);
		if(len>largest_size){
			// largest ke andar a ko copy krdo
			int i = 0;
			while(a[i]!='\0'){
				largest[i] = a[i];
				i++;
			}
			largest[i] = '\0';
			largest_size = len;
		}
	}

	cout<<largest<<endl;









	return 0;
}