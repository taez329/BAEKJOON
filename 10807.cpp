#include <iostream>
using namespace std;

int main()
{
	int N;
	
	
	
	cin>>N;
	int *str = new int[N+1]; //NULL 고려해서 크기 할당해주기!!
	
	for (int i=0; i<N; i++)
		cin>>str[i];
	
	int v, num=0;
	cin>>v;
	for (int i=0; i<N; i++)
		if (str[i]==v) num++; // 배열을 char형으로 선언하면 int와 char의 비교라 비교가 안됨 int형 배열로 해줘야함
	cout<<num<<'\n';
	/*2
	
	while (*str!='\0')
	{
		if (*str==v)
			num++;
		str++;
	}
	cout<<num<<'\n';
	*/ //이거 왜 안됨????
	
	return 0;
	
}