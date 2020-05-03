
#include <stdio.h>

void swap(int* a, int* b)
{

int temp = *a;
*a = *b;
*b = temp;

}

void sort_102(int a[],int arr_size)
{
int lo = 0;
int hi = arr_size - 1 ;
int mid = 0;

while ( mid <= hi )
  {
	switch (a[mid]) {
	case 0:
		swap(&a[lo++], &a[mid++]);
		break;
	case 1:
		mid++;
		break;
	case 2:
		swap(&a[mid], &a[hi--]);
		break;
	}
   }

}

void print_arr( int a[], int arr_size)
{
int i = 0;
for ( i=0 ; i < arr_size ; i++) 
{
printf("%d ",a[i]);
}
printf("\n");
}
int main()
{

int arr[] = { 0, 1, 2, 0, 2, 1, 0, 1};
int arr_size = sizeof(arr) / sizeof(arr[0]);
int a = 2;
int b = 5;

printf(" Size = %d \n", arr_size);

printf("array before segregation\n");
print_arr(arr,arr_size);
sort_102(arr,arr_size);
printf("array after segregation\n");

print_arr(arr,arr_size);

}
