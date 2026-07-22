#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,n,pos;
char a[10],b[100],ch;
printf("enter the string:\n");
scanf("%s",a);
n=strlen(a);
printf("enter position to insert the character\n");
scanf("%d",&pos);

while(pos<1 || pos>n+1)
{
printf("invalid position ,enter again");
scanf("%d",&pos);
}
getchar();
printf("enter the character tos stuff:\n");
ch=getchar();

b[0]='b';b[1]='i';b[2]='e';
b[3]='s';b[4]='t',b[5]='x';
j=6;
for(i=0;i<n;i++)
{
if(i==pos-1)
{
b[i++]='d';b[j++]='i';b[j++]='e';
b[j++]=ch;
b[j++]='d';b[j++]='i';b[j++]='e';
}
//escape die sequence
if(a[i]=='d' && a[i+1]=='i' && a[i+2]=='e')
{
b[i++]='d';b[i++]='i';b[i++]='e';
}
b[j++]=a[i];
}
if(pos == n+1)
{
b[i++]='d';b[i++]='i';b[i++]='e';
b[j++]=ch;
b[i++]='d';b[i++]='i';b[i++]='e';
}
//adding ending framede limiter
b[i++]='d';b[i++]='i';b[i++]='e';
b[i++]='e';b[i++]='t';b[i++]='x';
b[j]='\0';
printf("\n frame after stuffing :\n %s \n",b);
}








