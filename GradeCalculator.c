// Provide grade for students as per the
/*
1) If marks <50 then Grade is F
2) If marks >=50 <60 then Grade is D
3) If marks >=60 <70 then Grade is C
4) If marks >=70 <80 then Grade is B
5) If marks >=80 <90 then Grade is A
6) If marks >=90 then Grade is A+
*/
#include<stdio.h>
int main ( ) {
	int marks;
	
	printf("Enter Your Marks : ");
	scanf ("%d",&marks);
	
	if (marks<50) {
		printf ("Your Grade is F");
	}
			else if ((marks>=50)&&(marks<60))
			printf ("Your Grade is D");
			
			else if ((marks>=60)&&(marks<70))
			printf ("Your Grade is C");
			
			else if ((marks>=70)&&(marks<80))
			printf ("Your Grade is B");
			
			else if ((marks>=80)&&(marks<90))
			printf ("Your Grade is A");
			
			else if ((marks>=90)&&(marks<=100))
			printf ("Your Grade is A+");
	else {
		printf ("Invalid Input");
	}
	return 0;
}
