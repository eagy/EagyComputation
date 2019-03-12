/**
* This program calculates the total volume of a user-specified number of 
* cylinders. 
*
* Completion time: 0.25 Hours
*
* @author Daniel Eagy, Acuna
* @version 3/12/2019
*/

////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <stdio.h>

#define PI 3.14159265358979323846
#define VOLUME(r, h) (PI*(r*r)*h)

int main(void)
{
	//Add a prompt for the number of cylinders to sum. Make sure to use the control
	//symbol for integers. [2 points]
	int num;
	printf("Enter the number of cylinders: ");
	scanf("%d", &num);
        
        
        float total = 0; 
        
	//Create a loop based on the number of cylinders the user enters. [2 points]
        int i;
        for (i = 0; i < num; i++) {
            //    Within the loop, prompt for height and radius parameters (allow floating
            //    point numbers), and calculate the volume for that particular cylinder.
            //    [4 points]
            float h; 
            float r; 
            
            printf("\nCylinder %d\n", (i+1));
            
            printf("Enter the height: ");
            scanf("%f", &h); 
            
            printf("Enter the radius: ");
            scanf("%f", &r);
            
            
            total += VOLUME(r, h);
            
        }

	//Display the total volume sum back to the user. Make sure to use the right control
	//symbol. [2 points]
        printf("\n\nTotal Volume: %f", total);

	return 0;
}