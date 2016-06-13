#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void spiralTraverse(int** a, int m, int n){
	if(m == 0 || n==0)
		return;

	int top = 0;
	int down = n-1;
	int left = 0;
	int right = m-1;

	while(true){
		
		// Top Row
		for (int i = left; i <= right; ++i){
			cout<<a[top][i]<<" ";
		}
		
		top++;

		if(top > down  || left > right) break;

		for (int i = top; i <= down; ++i){
			cout<<a[i][right]<<" ";
		}

		right--;

		// Bottom
		if(top > down  || left > right) break;

		for (int i = right; i >= left; --i){
			cout<<a[down][i]<<" ";
		}

		down--;
	
		// Left Column
		if(top > down  || left > right) break;

		for (int i = down; i >= top; --i){
			cout<<a[i][left]<<" ";
		}

		left++;

		if(top > down  || left > right) break;
	}
	cout<<"\n";
}

int main()
{
	// int a[4][4] = {
	// 	{3, 7, 8, 1, 7},
	// 	{5, 4, 2, 6, 9},
	// 	{9, 3, 4, 7, 3},
	// 	{1, 5, 2, 6, 8},
	//  {4, 8, 2, 1, 5}			  }
	// };

	// cout<<"4 X 4 Matrix "<<a[1][0]<<endl;

	int m,n;

	cout<<"Enter the Number of Rows for the M X N Matrix"<<endl;
	cout<<"Rows: M : "<<endl;
	cin>>m;

	cout<<"Enter the Number of Columns for the M X N Matrix"<<endl;
	cout<<"Rows: N : "<<endl;
	cin>>n;

	// int a[n][n];

	int** a = new int* [m];

	for (int i = 0; i < n; ++i)
		a[i] = new int[n];

	for(int i =0; i<n;++i){
		for (int j = 0; j < n; ++j)
		{
			cout<<"Enter Elements at a["<<i<<"]["<<j<<"] position:"<<endl;
			cin>> a[i][j];
		}
	}
	
	cout<<"Matrix A["<<n<<"]["<<n<<"]"<<endl;
	for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    spiralTraverse(a,m,n);    
}