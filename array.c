#include<stdio.h>
int main() {
  int a;
    //int array[5]={12,13,14,15,15};
    //int sum=0;
    //for(int i=0;i<5;i++)
    //{int sum=sum+array[i];
       // printf("The sum of the array is %d\n",sum);}
       // int element=sizeof(array)/sizeof(int);
     //   printf("The number of elements in the array is %d\n",element);  
int array[6]={58,39,70,81,95,12};
int max=array[0];
for(int i=1;i<6;i++)
{
    if(array[i]>max)
    { 
        max= array[i];
    }
}
printf("The maximum element in the array is %d\n",max);
int min=array[0];
for(int i=1;i<6;i++)
{
    if(array[i]<min)
    {
        min=array[i];
    }

}
printf("The minimum element in the array is %d\n",min);
}