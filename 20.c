#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned:%d to %hu\n",0 , USHRT_MAX);
	printf("int:\nsigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("unsigned:%d to %u\n",0,UINT_MAX);
	printf("long int:\nsigned:%d to %d\n",LONG_MIN,LONG_MAX);
	printf("unsigned: %d to %d\n",0,LONG_MAX);
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned:%d to %lld",0,LONG_LONG_MAX);
}
