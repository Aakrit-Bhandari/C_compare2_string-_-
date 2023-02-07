//int strcmp (const char* str1, const char* str2);
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="hiigh",str2[]="acdc",str3[]="high";
    int result;// if not equal it prints 1 or it prints 0
    //Comparing strings str1 and str2
    result=strcmp(str1,str2);
    printf("Comparing str1 and str2 we get %d\n",result);
  //compareing string str1 and str3
    result = strcmp(str1,str3);
    printf("Comparing str1 and str3 we get %d",result);
}
