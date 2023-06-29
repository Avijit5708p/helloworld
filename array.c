#include<stdio.h>
int main()
{
    int p;
    printf("enter value of p");
    scanf("%d",&p);
    int array[p],size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    if(size<p){
    for(int i=0;i<size;i++)
    {
        printf("array[%d]",i);
        scanf("%d",&array[i]);
    }
    printf("the elementbof the array is : ");
    for(int i=0;i<size;i++)
    {
        printf("\t%d",array[i]);
    }
    }
    else{
        printf("not a valid statement");
    }
return 0;

}