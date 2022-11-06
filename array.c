#include<stdio.h>
#include<stdlib.h>
int* get(int *p)
{
int *a,size,i;
printf("Enter number of elements \n");
scanf("%d",&size);
a=(int*)malloc(size*sizeof(int));
printf("Enter elements into array \n");
for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
  *p=size;
 }
return(a);
} 

void display(int *a,int n)
{
int i;
printf("displaying elements \n");
for(i=0;i<n;i++)
   printf("%d \t",a[i]);
}
 
/*void main()
{
int *a,n;
a=get(&n);
display(a,n);
free(a);
}          ("remove this comment to execute this program )"*/

/* output-
Enter number of elements
5
Enter elements into array
10 15 18 20 30
displaying elements
10      15      18      20      30
------------------------------------------
Enter number of elements
2
Enter elements into array
12 15
displaying elements
12      15

*/