// RatInMaze
#include<iostream>
using namespace std;

bool RatInMaze(char maze[][5],int sol[10][10],int i,int j,int n,int m){
	// Base case
	if(i==n-1 && j==m-1){
		// Print the path
		sol[i][j] = 1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<sol[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	sol[i][j] = 1;

	// Pehle right se dekhte hai
	if(j+1<m && maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla = RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaRightSeRaastaMilla == true){
			return true;
		}
	}

	//Neeche check krte hai
	if(i+1<n && maze[i+1][j]!='X'){
		bool KyaNeecheSeRaastaMilla = RatInMaze(maze,sol,i+1,j,n,m);
		if(KyaNeecheSeRaastaMilla){
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

	
int main(){
	char maze[5][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};

	RatInMaze(maze,sol,0,0,4,4);


	return 0; 
}
