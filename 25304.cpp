#include <iostream>
using namespace std;

int main()
{
	int X, N, a, b;
	int total = 0;
	
	cin>>X;
	cin>>N;
	
	for (int i = 1; i <= N; i++)
	{
		cin>>a>>b;
		total += a*b;
	}
	
	if (X==total)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
}