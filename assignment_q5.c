// Q5.Write a C program to enter the radius of a circle and find its diameter, circumference
// and area.
#include<stdio.h>
#define PI 3.14
int main(){

    int rad;
	printf("Enter the radius of a circle : ");
	scanf("%d",&rad);
	
	printf("The Diameter of circle is %d.\n",2*rad);
	printf("The Circumference of circle is %.2f .\n",2*PI*rad);
	printf("The Area of circle is %.2f .",PI*rad*rad);
	
    return 0;
}
