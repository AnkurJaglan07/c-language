#include <stdio.h>
int main()
{
    int head,leg;
    printf("enter no of heads and legs:");
    scanf("%d %d",&head,&leg);
    int goats= (leg - (2*head))/2;
    int murga= head-goats;
    if(head==murga+goats && (murga>0 && goats>0))
    {
    printf("no of Goats are %d \nno of Murgas are %d",goats,murga);
    }
    else{
        printf("wrong input");
    }
    return 0;
}