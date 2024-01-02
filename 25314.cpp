#include <iostream>
using namespace std;

int main ()
{
	int N;
	cin>>N;

	for (int i = 4; i<=N; i+=4) //for(int i=1; i*4<=N; i++) 도 가능
	{
		cout<<"long ";
	}
	cout<<"int";
	cout<<endl;
	
	return 0;
}