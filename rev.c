#include<stdio.h>
#include<string.h>
int main() 
{
   char string[100], t;
   int i, j = 0;
   scanf("%s",string);
   i=0;
   j=strlen(string)-1;
	while (i < j)
	{
      	t=string[i];
      	string[i]=string[j];
      	string[j]=t;
      i++;j--;
   }
printf("%s", string);
   return (0);
}
