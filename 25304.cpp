#include <iostream>
using namespace std;

int main()
{
	int X, N, a, b;
	int total = 0;
	
	cin>>X;
	cin>>N;
	
	for (int i = 1; i <= N; i++) //c++은 반복문 초기문에서 변수 선언과 값 설정 가능
	{
		cin>>a>>b; // 공백을 기준으로 두 개를 구분해서 받음
		total += a*b;
	}
	
	if (X==total)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
}