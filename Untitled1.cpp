#include <stdio.h>
#include <stdlib.h>



//void pyrimd(){
//	  int row, col,noofrows;
//   printf("Enter the number of rows: ");
//   scanf("%d", &noofrows);
//   for (row = 1; row <= noofrows; ++row) {
//	  for (col = 1; col <= row; ++col) {
//         printf("* ");
//      }
//      printf("\n");
//   }
//}
//-==============================================
//void inverse(){
//	 int row, col,noofrows;
//   printf("Enter the number of rows: ");
//   scanf("%d", &noofrows);
//   for (row =noofrows ; row >= 0; row--) {
//	  for (col = 1; col <= row; col++) {
//         printf("* ");
//      }
//      printf("\n");
//   }
//}
//-==============================================
void printStrongNumbers(){

    long long sum;
    int num;
    int start, end;

    while(start != end)
    {
        sum = 0;
        num = start;
        
     
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        
        
        if(start == sum)
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}
int main(int argc, char *argv[]) {
//	int no_ofrows;
//	printf("Enter numbers of rows:");
//	scanf("%d",&no_ofrows);
//	pyrimd(no_ofrows);
//inverse();	
int start, end;
    
   
    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);
    
    printf("All strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);













 
	return 0;
}
