#include<stdio.h>
int main() {
	int salary[7];
	float average=0;
	int highest= -999999;
	int lowest=  999999;
	int  total=0;
	int i;
	
	for(i=0; i<7; i++) {
		printf("Enter the  salary of empolyee is %d :", i+1);
		scanf("%d",&salary[i]);
		
		if(salary[i]<0) {
			printf("Salary must not be negative");
			i--;
			continue;
			
		}
		
	  total+=salary[i];
	  
	  if(salary[i]>highest){
	  	highest= salary[i];
	  }
	  
	  if(salary[i]<lowest){
	  	lowest= salary[i];
	  }
	  
	  average =total/7.0;
		
		
		
		
		
		
	}
	
	printf("\n The total salary is:%d", total);
	printf("\n The Average salary is:%2.f", average);
	printf("\n The Highest salary is:%d", highest);
	printf("\n The Lowest salary is :%d", lowest);
	
}
