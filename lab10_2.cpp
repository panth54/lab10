#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N, int M){
	//check row & col > 0
	if (N > 0 && M > 0){
		// print row
		for (int row=0;  row < N; ++row){
			//print column
			for (int col=0; col < M; ++col){
				cout << "O";
			}
			cout << "\n";
		}
	} else {
		cout << "Invalid input" <<endl;
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
