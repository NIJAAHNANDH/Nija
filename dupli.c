#include <stdio.h>
#include<string.h>
void dupli(char arr[], int n)
{
	int i,b[26]={0};
    for(i=0;i<n;i++)
    	b[arr[i]%97]++;
    for(i=0;i<n;i++)
    {
    	if(b[arr[i]%97]==1)
    	{
    		printf("%c\n",arr[i]);
    		b[arr[i]%97]=0;
    	}
    }
}
 
 int main()
{
    char arr[1000];
    int n;
	scanf("%s",arr);
	n=strlen(arr);
	dupli(arr,n);
	return 0;
}
