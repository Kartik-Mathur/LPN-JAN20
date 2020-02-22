// NQueen
#include<iostream>
using namespace std;
int a =0;

bool KyaRakhnaSafeHai(int board[10][10],int i,int j,int n){
	// Check row and column
	for(int k=0;k<n;k++){
		if(board[k][j] || board[i][k]){
			return false;
		}
	}

	int row=i;
	int col=j;
	// Check upper right diagnol
	while(row>=0 && col<n){
		if(board[row][col]){
			return false;
		}
		row--;
		col++;
	}
	// Check upper left diagnol
	while(i>=0 && j>=0){
		if(board[i][j]){
			return false;
		}
		i--;
		j--;
	}
	return true;
}

bool NQueen(int board[10][10],int i,int n){
	// Base case
	if(i==n){
		// Print the board
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		a++;
		return false;
	}
	// Recursive case
	for(int j=0;j<n;j++){
		if(KyaRakhnaSafeHai(board,i,j,n) == true){
			board[i][j] = 1;
			bool KyaBaakiBaatBani = NQueen(board,i+1,n);
			if(KyaBaakiBaatBani){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}

	
int main(){
	int board[10][10]={0};
	
	int n;
	cin>>n;

	NQueen(board,0,n);
	cout<<"Number of solutions "<<a<<endl;

	return 0; 
}
