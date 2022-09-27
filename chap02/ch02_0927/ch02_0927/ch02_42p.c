/*
chapter02 변수와 연산자 (식별자)

식별자 : 변수 함수 메서드 클래스  인터페이스를 작성하는 것 
1. 알파벳과 숫자로 조합하고 특수문자는 사용가능한 것만 사유 
2. 첫번째 문자는 숫자를 사용 할 수 없다 (220927까지의 기준)
3. 변수어디에도 공백을 사용 할 수없다. 대신 언더바(_)를 주로쓰게된다
4. 예약어(명령어)를 사용하지 못한다. 
5. 두 단어가 나오면 
   카멜기법(두번째 단어의 첫글자를 대문자로)과 
   스네이크기법(2번째 단어의 첫글자 앞에 언더바_)을 이용 
6. 식별자의 길이 제한은 사실상 없다. (어디까지 써지나 고의로 할수는 있다만 64비트라 )

이진수 : 0 1 >> 1bit
8bit = 1byte >> 256 (0~255)
1024byte = 1Kbyte

메모리는 바이트 단위로 주소 붙어있다.
CPU(연산, 제어, 임시기억)는 이 주소를 이용하여 메모리의 특정위치에 데이터를 읽거나 쓸 수 있다.

데이터타입(자료형)
정수형
	unsigend char
실수형


*/	
	
#include <stdio.h>
int main(void) {
	//변수선언과 초기화
	unsigned char a = 'A'; //부호가 없는 문자 a에 'A' 할당
	unsigned short b = 100; //
	unsigned int c = 500; //
	char d = 'B'; //
	int e = 1000; //
	short f = 200; //
	long g = 50000; //

	printf("unsigned char a = %c\n",a);
	printf("unsigned short b = %d\n", b);
	printf("unsigned int c = %d\n", c);
	printf("char d = %c\n", d);
	printf("int e = %d\n", e);
	printf("short f = %d\n", f);
	printf("long g = %d\n", g);
}