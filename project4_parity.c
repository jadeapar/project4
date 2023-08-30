// Jadea Parchmemnt this program will find whether all of the array //elements are all even or all odd, or neither
#include <stdio.h>
//function that checks if all elements are even, odd or neither
void find_parity(int *a, int n, int *all_even , int *all_odd)
{
    // for loop that repeats for the length of the array and checks //if each element is even or odd
    int j;
    for(j=0;j<n;j++)
    {
        if(*(a+j)%2==1){
            //if an element is odd it is set to 1
            *all_odd = 1;
        }
            if(*(a+j)%2==0){
            // if an element is even it is set to 1
            *all_even =1;
        }
    }
    
}
int main()
{
     //declare and initialize variables and array
    int l;
    int all_odd=0,all_even=0;
    //accept the length of the array and elements
    printf("Enter the length of the array:\n ");
    scanf("%d",&l);
    int a[l];
    printf("Enter the elements of the array:\n ");
    int j;
    for(j=0;j<l ;j++){
        scanf("%d",&a[j]);
    }
    //call function
    find_parity(a,l,&all_even,&all_odd);
    // if statement that output results
    if(all_odd==1 && all_even==0)
    {
        printf("good, all elements are odd\n");
    }
    else if(all_odd==0 && all_even==1)
    {
        printf("good, all elements are even\n");
    }
    else if (all_odd==0 && all_even==0)
    {
        printf("not good\n");
    }
    else if (all_odd== 1 && all_even== 1)
    {
        printf("not good\n");
    }
return 0;
}
