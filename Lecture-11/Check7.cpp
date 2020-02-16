// Check7
#include<iostream>
using namespace std;

bool Check7(int *a,int n,int i){
	// base case
	if(i==n){
		return false;
	}

	if(a[i] == 7){
		return true;
	}
	return Check7(a,n,i+1);
	// bool KyaBaakiArrayMeiMilla = Check7(a,n,i+1);
	// if(KyaBaakiArrayMeiMilla){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }

}

int First7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}
	return First7(a,n,i+1);
	// int BaakiArrayMei7KaIndex = First7(a,n,i+1);
	// return BaakiArrayMei7KaIndex;
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}
	if(a[i]==7){
		int ChotaIndex = i; // This could be an answer if aur 7 nahi hai
		int BadaIndex = last7(a,n,i+1);
		if(BadaIndex>ChotaIndex){
			return BadaIndex;
		}
		else{
			return ChotaIndex;
		}

	} 

	int BaakiArrayMei7KaIndex = last7(a,n,i+1);
	return BaakiArrayMei7KaIndex;
}


int main(){

	int a[]={1,3,4,6,5,7,8,7,9,7,8,7,6,7,8,9,0};
	int n = sizeof(a)/sizeof(int);
	cout<<n<<endl;
	if(Check7(a,n,0)){
		cout<<"Found"<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}

	cout<<First7(a,n,0)<<endl;
	cout<<last7(a,n,0)<<endl;




	return 0;
}