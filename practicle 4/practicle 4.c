#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
    printf("The size of integer is:%zu\n",sizeof(int));
    printf("The size of integer is:%d to %d\n",INT_MIN , INT_MAX);
    printf("The size of character is:%zu\n",sizeof(char));
    printf("The size of char is:%d to %d\n",CHAR_MIN ,CHAR_MAX);
    printf("The size of unsigned int is:%zu\n",sizeof(unsigned int));
    printf("The range of unsigned int is:0 to %u\n",UINT_MAX);
    printf("The size of long is:%zu",sizeof(long));
    printf("The range of lon is:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("The size of unsigned long is:%zu\n",sizeof(unsigned long));
    printf("The size of unsigned long is:0 to %lu\n",ULONG_MAX);
    printf("The size of long long is:%zu\n",sizeof(long long));
    printf("The size of long long is:%lld to %lld\n",LLONG_MIN ,LLONG_MAX);
    printf("The size of unsigned long long is:%zu\n",sizeof(unsigned long long));
    printf("The size of unsigned long long is:0 to %lu\n",ULLONG_MAX);
    printf("The size of float is:%zu\n",sizeof(float));
    printf("The size of float is:%e to %e\n",FLT_MIN ,FLT_MAX);
    printf("The size of double is:%zu\n",sizeof(double));
    printf("The size of double is:%e to %e\n",DBL_MIN ,DBL_MAX);
    printf("The size of long double is:%zu\n",sizeof(long double));
    printf("The size of long double is:%Le to %Le\n",LDBL_MIN ,LDBL_MAX);
    printf("This program is created by Hardi Agola. ID:25TCEBRD");

}











