//structure-----
#include<stdio.h>
struct Student{
	int rollno;
	char name[20];
	float per;
	
};
int main()
{
	struct Student s1,s2,s3;
//	int s=sizeof(s1);
  s1.rollno=120;
  s1.per=0.00;
  strcpy(s1.name,"Gourav");//st.name="Gourav";
//	printf("%d ",s);
//printf("\n-----------------\n");
s2.rollno=120;
  s2.per=0.00;
  strcpy(s2.name,"Ankur");
//  printf("\n-----------------\n");
  printf("\n Rollno is :%d",s1.rollno);
  printf("\n Name is :%s",s1.name);
  printf("\n Percentage is:%.2f",s1.per);
   printf("\n-----------------\n");
  printf("\n Rollno is :%d",s2.rollno);
  printf("\n Name is :%s",s2.name);
  printf("\n Percentage is:%.2f",s2.per);
}