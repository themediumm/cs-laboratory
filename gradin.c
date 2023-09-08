#include <stdio.h>
#include <stdbool.h>

int math,chem,cs,eco,eee,mech,sum,grade;
bool cgpa;
void main(){
printf("do you want your cgpa too(0 = no/1 = yes)?: ");
scanf("%s", &cgpa);

printf("welcome to the grading checker. \n");

printf("enter your engineering mathematics marks: \n");
scanf("%d", &math);

printf("enter your engineering chemistry marks: \n");
scanf("%d", &chem);

printf("enter your computer science marks: \n");
scanf("%d", &cs);

printf("enter your ecology marks: \n");
scanf("%d", &eco);

printf("enter your electrical and electronics marks: \n");
scanf("%d", &eee);

printf("enter your mechanics marks: \n");
scanf("%d", &mech);

sum = (math + chem + cs + eco + eee + mech)/6;

grade = sum/10;
grade++;

if(grade == 11)
	grade = 10;
	
if(sum < 40){
	printf("you have failed with %d percentage \n", sum);
	if(cgpa)
		printf("sorry, but your cgpa is %d \n", grade);
}

if(sum > 40){
	printf("congo, you have passed with %d percentage \n", sum);
	if(cgpa)
		printf("your cgpa is %d, yay! \n", grade);
}
if(grade >= 8 && cgpa){
 printf("you be shining with %d, bro \n", grade);
}
}
