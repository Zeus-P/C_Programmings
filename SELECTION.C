#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void selection(int*,int);
int min(int*,int,int);

int main()
{
int *arr;
int i,N;
printf("Enter the No. of Elements In array : ");
scanf("%d",&N);

arr=(int*)malloc(sizeof(int));
printf("Enter %d Elements to sort : \n",N);
for(i=0;i<N;i++)
scanf("%d",&arr[i]);

selection(arr,N);

printf("\nThe Sorted Elements are :\n");
for(i=0;i<N;i++)
printf("%d\n",arr[i]);
getch();
return 0;
}

void selection(int *a,int size)
{
int i=0,loc=0,temp=0;
for(i=0;i<size;i++)
{
loc=min(a,i,size);
temp=a[loc];
a[loc]=a[i];
a[i]=temp;
}
}

int min(int *array, int LB, int UB)
{
int m=LB;
while(LB<UB)
{
if(array[LB]<array[m])
m=LB;
LB++;
}
return(m);
}
