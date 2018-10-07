#include<stdio.h>
void main()
{
char ch[10];
int len=0,i=0,m,flag=0,j;
printf("enter string");
scanf("%s",ch);
printf("%s",ch);

// To find length;length exclude the null character

while(ch[i]!='\0')
{
    len++;
    i++;
}
printf("%d",len);
m=(len-1)/2;

// Logic

for(i=0,j=len-1;i<=m;i++,j--)
{
  if(ch[i]!=ch[j])
    {
        flag=1;
        break;
    }
}

if(flag==1)
    printf("not palindrome");
else
    printf(" palindrome");

}
