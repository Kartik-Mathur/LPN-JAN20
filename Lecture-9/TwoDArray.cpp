#include<iostream>
using namespace std;

void print(int ch1[][10],int r,int c){
	for(int row = 0; row<r; row++){
		for(int col=0;col<c;col++){
			cout<<ch1[row][col]<<' ';
		}
		cout<<endl;
	}	
}


int main(){

	// Character TwoD array
	char ch[3][3] = {
		{'A','B','\0'},
		{'C','D','\0'},
		{'E','F','\0'}
	};

	int a[][10]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	print(a,3,3);






	cout<<ch[0]<<endl;
	cout<<ch[1]<<endl;
	cout<<ch[2]<<endl;

	char ch1[3][3] = {
		"AB",
		"CD",
		"EF"
	};

	cout<<ch1[0]<<endl;
	cout<<ch1[1]<<endl;
	cout<<ch1[2]<<endl;

	for(int row = 0; row<3; row++){
		for(int col=0;ch1[row][col]!='\0';col++){
			cout<<ch1[row][col]<<' ';
		}
		cout<<endl;
	}

	int b[100][100];
	cout<<"Enter rows and cols"<<endl;
	
	int r,c;

	cin>>r>>c;
	int number = 1;
	for(int row = 0;row<r;row++){
		for(int col=0;col<c;col++){
			// cin>>b[row][col];
			b[row][col] = number;
			number ++;
		}
	}
	for(int row = 0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<b[row][col]<<' ';
		}
		cout<<endl;
	}



	cout<<a[2][7]<<endl;
	for(int row = 0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}

	// a[2][1] = 10;
	// cout<<a[2][1]<<endl;


	return 0;
}