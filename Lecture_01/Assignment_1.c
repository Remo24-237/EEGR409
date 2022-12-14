/* This program was written to:
    - measure the distance covered by a wheel for different runs.
    - compute the average distance covered.
    - compute the encoded error and its percentage based on a set distance (true distance).

     @author Remo24
     EEGR 409
     Assignment 01 */

#include<stdio.h>
#include<math.h>

int main(){

    /*Declaration and initialization of variables to be used*/
    int run_1 = 10, run_2 = 11, run_3 = 10;
    float wheel_radius = 21, true_dist = 1354;
    float dist_run_1, dist_run_2, dist_run_3;
    float average_dist, encoder_error,percent_error;
    float circumference; //variable to hold the distance around the surface the wheel

    //Computation of values 
    circumference = (2 * M_PI * wheel_radius);
    dist_run_1 = (circumference * run_1);
    dist_run_2 = (circumference * run_2);
    dist_run_3 = (circumference * run_3);

    average_dist = (dist_run_1 + dist_run_2 + dist_run_3)/3;
    //absolute value function returning a floating point variable
    encoder_error = fabsf(average_dist - true_dist); 

    percent_error = (encoder_error/true_dist) * 100 ;
    
    //Outputting results 
    printf("Radius of the wheel (cm): %.0f\n", wheel_radius);
    printf("Number of revolutions for run 1: %d\n", run_1);
    printf("Number of revolutions for run 2: %d\n", run_2);
    printf("Number of revolutions for run 3: %d\n", run_3);
    printf("True distance traveled: %.0f\n", true_dist);
    printf("RUN \t\t DISTANCE (cm)\n");
    printf("--- \t\t -------------\n");
    printf("1 \t\t\t %.2f\n", dist_run_1);
    printf("2 \t\t\t %.2f\n", dist_run_2);
    printf("3 \t\t\t %.2f\n", dist_run_3);

    printf("Average Distance Traveled:\t %.2f\n", average_dist);
    printf("Encoder Error:\t\t\t\t %.2f\n", encoder_error);
    printf("Percentage Encoder Error:\t %.1f%%\n", percent_error);

    return 0;

}
