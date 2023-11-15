#include<stdio.h>
int main()
{
	char data[20],stuffeddata[30];
	int i,j,count;
	printf("Enter the Data : ");
	scanf("%s",data);
	i=0;
	j=0;
	count=0;
	while(data[i]!='\0')
	{
		stuffeddata[j]=data[i];
		if(data[i]=='1')
		{
			count++;
		}
		else{
			count=0;
		}
		if(count==5)
		{
			stuffeddata[++j]='0';
			count=0;
		}
		i++;
		j++;
	}
	stuffeddata[j]='\0';
	printf("Orginal Data : %s\n",data);
	printf("After stuffBitting : %s\n",stuffeddata);
	return 0;
}
