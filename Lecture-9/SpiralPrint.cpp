// SpiralPrint
#include<iostream>
using namespace std;

void SpiralPrint(int a[][100],int r,int c){
	int sr = 0, sc = 0, er = r-1, ec = c-1;
	while(sr<=er && sc<=ec){
		//Print sr from sc till ec
		for(int col = sc;col<=ec;col++){
			cout<<a[sr][col]<<' ';
		}
		sr++;
		// Print ec from sr till er
		for(int row = sr;row<=er;row++){
			cout<<a[row][ec]<<' ';
		}
		ec--;
		// Print er from ec till sc
		if(sr<er){
			for(int col=ec;col>=sc;col--){
				cout<<a[er][col]<<' ';
			}
			er--;
		}

		// Print sc from er till sr
		if(sc<ec){
			for(int row=er;row>=sr;row--){
				cout<<a[row][sc]<<' ';
			}
			sc++;
		}
	}
}


int main(){
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

	SpiralPrint(b,r,c);
	cout<<endl;


	return 0;
}