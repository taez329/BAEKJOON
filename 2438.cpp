#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	for (int i=1; i<=N; i++)
	{
		for (int k=i; k>0; k--)
		{
			cout<<'*';
		}
		cout<<'\n';
	}
	return 0;
}