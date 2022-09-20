#include<stdio.h>

void main()
{
int i,j,k,temp,digit,sum,num,product,less,more;

printf("Enter Number for armstrong");
scanf("%d",&num);

//finding armstrong lower than num

for(i=num;i>0;i--)
{
    digit=0;
    sum=0;
    j=i;

    while(j!=0)
    {
        j=j/10;
        digit++;
    }
    j=i;
    while(j!=0)
    {
        product=1;
        temp=j%10;
        j=j/10;
        //without math function finding power of digit
        for(k=0;k<digit;k++)
        {
            product=product*temp;
        }
        sum=sum+product;
    }
    if(sum==i)
    {
        less=i;
        break;
    }

}

//finding armstrong higher than num

i=num;
while(1)
{
    digit=0;
    sum=0;
    j=i;

    while(j!=0)
    {
        j=j/10;
        digit++;
    }
    j=i;
    while(j!=0)
    {
        product=1;
        temp=j%10;
        j=j/10;
        for(k=0;k<digit;k++)
        {
            product=product*temp;
        }
        sum=sum+product;
    }
    if(sum==i)
    {
        more=i;
        break;
    }
    i++;
}


if(num==i)
    {
        printf("%d is an armstrong number",num);
    }
else if((num-less)>(more-num))
    {
        printf("%d is closest armstrong number",more);
    }
else if((num-less)<(more-num))
    {
        printf("%d is closest armstrong number",less);
    }

}
