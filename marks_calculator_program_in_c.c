#include<stdio.h>
int main()
{
float eng,hindi,maths,phy,chem,percent;
printf("Enter marks: ");
scanf("%f %f %f%f%f",&eng,&hindi,&maths,&phy,&chem);
percent=(eng+hindi+maths+phy+chem)*100/500;
printf("percentage=%f/n",percent);
if(percent>=60)
printf("first division");
else if(percent>=50)
printf("second division");
else if(percent>=40)
printf("Third division");
else 
printf("\nFail");
return 0;
} 



