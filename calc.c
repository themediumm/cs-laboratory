#include <stdio.h>
void main(){
	int var1;
	int var2;
	int var3;
	int temp;

	printf("What function do you want to use? Add(1),Subtract(2),Multiply(3),Divide(4),Modulo(5)\n");
		scanf("%d",&var1);
	if(var1==1){
		printf("Enter you first variable = ");
			scanf("%d",&var2);
		printf("Enter your second variable = ");
			scanf("%d",&var3);
		temp=var2+var3;

		printf("\nsum = %d\n",temp);
	}
	else if(var1==2){		
		printf("Enter you first variable = ");
                        scanf("%d",&var2);
                printf("Enter your second variable = ");
                        scanf("%d",&var3);
                temp=var2-var3;
                
                printf("\nsubtraction = %d\n",temp);	
	}
	else if(var1==3){
		printf("Enter you first variable = ");
                        scanf("%d",&var2);
                printf("Enter your second variable = ");
                        scanf("%d",&var3);
                temp=var2*var3;
                
                printf("\nproduct = %d\n",temp);
	}
	else if(var1==4){
		printf("Enter you first variable = ");
                        scanf("%d",&var2);
                printf("Enter your second variable = ");
                        scanf("%d",&var3);
                temp=var2/var3;
                
                printf("\ndivision = %d\n",temp);
	}
	else if(var1==5){
                printf("Enter you first variable = ");
                        scanf("%d",&var2);
                printf("Enter your second variable = ");
                        scanf("%d",&var3);
                temp=var2%var3;

                printf("\nmodulo = %d\n",temp);
        }
	else{
		printf("\nYou have given the wrong input, try using caps in the first letter");
	}
}
