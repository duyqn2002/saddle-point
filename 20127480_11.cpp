#include<iostream>
using namespace std;
void saddle(int &m, int &n,int arr[][100])
{
	int i,j,max=-9999,min=9999,a,b,h,k;
	cout<<"Enter rows: ";
	cin>>m;
	cout<<"Enter columns: ";
	cin>>n;
	cout<<"Enter elements of the array: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Expressing the matrix: "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Saddle points: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]>=max)
			{
				max=arr[i][j];
				b=j;
				k=j;
			}
		}
		for(h=i;h<m;h++)
		{
			if(arr[h][b]<=min)
			{
				min=arr[h][b];
			}
		}
		if(max==min)
		{
			cout<<max;
		}
	}
	
}

int main()
{
	int m,n,arr[100][100];
	saddle(n,m,arr);
	return 0;
}


