

static int seed; //(.c파일안에 있는 파일들만 접근할수 있다. static

void my_srand(int s)	//s로바꾼이유 전역변수 지역변수 이름이 같기에 s로 줄임	//funtion definition 함수정의
{
	seed = s;		//전역변수seed를 지역변수로 치환
}
int	my_rand(void)
{
	seed = seed * 1103515245 + 12345; 		//man 3 rand 에서 줄 내려서 next를 seed로 바꿔서 복사함
   return((unsigned)(seed/65536) % 32768);
 }
