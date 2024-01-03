#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); // c, c++ 동기화 해제
	
	cin.tie(NULL); //입력과 출력의 버퍼를 분리. 
	// 기본적으로 입력 요청이 들어오면 그 전에 출력 작업이 있었을 경우
	//(출력 버퍼에 내용이 있는 경우) 버퍼를 비워(flush) 출력을 하게 된다.
	// 하지만 이 명령을 통해 입력이 들어와도 출력버퍼에 있는 내용을 비우지 않는다.
	
	int T, i, a, b;
	cin>>T;
	for (i=0; i<T; i++)
	{
		cin>>a>>b;
		cout<<a+b<<'\n'; 
		//endl도 출력 버퍼를 쓰는 것, endl를 쓰면 cin.tie(NULL)한 의미가 없음
		//'\n'를 쓰는 것이 시간효율적으로도 좋음
	}
	
	return 0;
}