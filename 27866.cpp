#include <iostream>
using namespace std;

int main()
{
	//char word[1000]; // 크기가 1000이 최대이므로 마지막 널까지 고려해서 1001로 설정해주어야함
	//배열은 마지막에 NULL !!!! 꼭 고려하기
	char word[1001];
	//string word;
	
	//string과 char의 차이
	//string은 동적으로 메모리를 할당, 필요에 따라 크기 조절 가능 
	//메모리는 힙(heap) 영역에서 동적할당, 문자열 길이에 따라 자동으로 메모리 조절
	//오버헤드 발생가능
	//char 배열은 정적으로 메모리를 할당, 컴파일 시간에 크기가 결정
	//메모리는 스택(stack)영역에 위치, 크기가 고정되어 추가적인 메모리 할당 불가
	//오버헤드 적고, 함수 호출 최소화
	
	int i;
	
	cin>>word>>i;
	
	cout<<word[i-1]<<'\n';
	
	return 0;
}