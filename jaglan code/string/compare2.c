// #include<stdio.h>
// int main()
// {
// 	char ch1[20],ch2[23];
// 	printf("enter word :");
// 	scanf("%s",&ch1);
// 	strcpy(ch2,ch1);
	
// 	strrev(ch1);
// 	int n=strcmp(ch1,ch2);
// 	if(n==0){
// 		printf("pallindrome");
		
// 	}
// 	else{
// 		printf("pallindrome koni");
// 	}
// 	return 0;
// }u

#include<stdio.h>
#include<string.h>
int main()
{
   int i,c=0,s=0,d=0,sp=0;
   char email[30]="GU_33@geetauniversity.edu.in";
   int len=strlen(email);
   for(i=0;i<len;i++)
   {
   	if(email[i]>='A' && email[i]<='Z')
   	{
   		c++;
	   }
	   else if(email[i]>='a' && email[i]<='z')
	   {
	   	s++;
	   }
	   else if(email[i]>='0' && email[i]<='9')
	   {
	   	d++;
	   }
	   else{
	   	sp++;
	   }
   }
   printf("\n No. of digits is :%d",d);
   printf("\n No. of capital letter is :%d",c);
   printf("\n No. of small letter is :%d",s);
   printf("\n No. of special letter is :%d",sp);
   return 0;
}
