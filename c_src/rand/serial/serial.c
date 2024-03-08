
int getSerialNumber(void)
{
	static int count = 0;	//static 지역변수로 만들어준다.

	++count;
	return count;
}
