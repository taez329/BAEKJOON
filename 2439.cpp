#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	for (int i=1; i<=N; i++)
	{
		/*
		for (int k=N-i; k>0; k--)
			cout<<' ';
		for (int j=i; j>0; j--)
			cout<<'*';
		*/
		for (int j=1; j<=N; j++) //그냥 N 입력받은 횟수만큼 돌리는데
		{
			if (N-i < j) cout<<'*'; //별 찍어야할 때가 오면 별을 찍고
			else cout<<' '; //아니면 빈칸 출력
			//경우의 수를 나눠서 특정한 경우에만 if를 사용
		}
		cout<<'\n';
	}
	return 0;
}