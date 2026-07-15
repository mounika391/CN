#include<stdio.h>
int main()
{
int ip[20],op[20],i,j=0,n,count=0;
printf("enter the lenght:");
scanf("%d",&n);
printf("enter the  0s or 1s:");
for(i=0;i<n;i++)
{
scanf("%d",&ip[i]);
}
for(i=0;i<n;i++)
{
op[j++]=ip[i];
if(ip[i]==1){
count++;
if(count==5){
op[j++]=0;
count=0;
}
}
else{
count=0;
}
}
printf("After bit stuffing ,the frame is:\n");
for(i=0;i<j;i++){
printf("%d",op[i]);
}
printf("\n");
}
