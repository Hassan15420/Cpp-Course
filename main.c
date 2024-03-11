#include <stdio.h>
#include <stdlib.h>
int strongnum(){
	 int i, sum=0,fact,n,num,rem;
    printf("Enter a Number\n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(num==sum)
    {
        printf("%d is a Strong Number",num);
    }
    else
    {
        printf("%d is not a Strong Number",num);
    }
}

int prime(){
	int i, num=15,res,flag=0;
res=num/2;
 for(i=2;i<=res;i++){

 	if(num%i==0){
 		flag=1;
	 }
 }
 if(flag==1){
 	printf("number is not prime");
 }
 else{
 	printf("number is  prime");
 }
}

int amstrong(){
	  int  num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {

        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
//================================================================

int main()
{
	
//   strongnum();
//	prime(); 
//amstrong();
    return 0;
}
