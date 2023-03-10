#include <iostream>

// 메모리영역
// 스택
// 데이터
// ROM 코드 
// 힙 영역(동적할당)

// 변수 
// 지역 (스택
// 전역 (데이터
// 정적 (데이터
// 외부 (데이터
// 사전에 정해져 있는 것

// 프로그램 실행하며 도중에 생기는 것
// 힙 영역
// runtime 중에 대응이 가능한 메모리 영역, 힙 영역   -   (동적할당)dynamic
// 변수 사용 불가. 포인터 사용으로 해결

int main()
{
	// malloc();  -  메모리 할당 함수 [말록]
	// malloc();  - 원하는 크기만큼 힙 영역의 메모리를 생성

	
	// 100byte가 힙 영역에 만들어짐! 이후에 만들어진 힙 영역의 주소를 반환
	int* p_int = (int*)malloc(100); // 주소를 저장하는 포인터 변수가 필요
	// malloc함수가 반환하는 포인터는 void 포인터이다. 
	// 해당 포인터에 저장된 값을 어떤 자료형으로 볼지 정해지지 않음
	// 따라서 강제 캐스팅을 통해 포인터 변수에 저장
	// void 포인터로 반환하는 이유
	// 무슨 자료형으로 해석할지 사용자가 정의하도록 하기 위함

	// float 포인터는 실제로 받는 주소가 어떤 자료형인지 상관이 없고
	// float 포인터이기만 하면 상관이 없음
	float* p_f = (float*)malloc(4);
	int* p_i = (int*)p_f;

	*p_f = 2.4f;
	int i = *p_i;

	// 지역, 전역, 정적, 외부 변수는 이미 컴파일러가 파악이 끝났기 때문에 
	// 해제하는 명령을 작성하지 않아도 된다
	// 
	// 동적할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자(프로그래머)가 직접 관리해야 함(해제)
	// 

	
	int input_ = 0;
	scanf_s("%d", &input_);
	
	int* p_ii = nullptr;
	if (100 == input_)
	{
		p_ii = (int*)malloc(input_);
	}

	if (nullptr != p_ii)
	{
		// 힙 메모리를 해제하는 함수 free(힙 메모리의 주소)
		free(p_ii);
	}
	// 위에 보이는 것 처럼 힙 메모리를 관리하는 포인터 변수를 선언하고
	// 포인터 변수의 값이 힙 메모리의 주소값이 있는 경우(힙 메모리가 할당된 경우)
	// 프로그램 종료하기 전에 힙 메모리를 해제해 줘야 함
	// 해당 작업이 이루어지지 않으면 계속해서 힙 메모리 영역이 그대로이 할당되어있는
	// 메모리 누수가 발생!
	



	return 0;
}