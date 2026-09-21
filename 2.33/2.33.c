#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double miles;
    double costPerGallon;
    double milesPerGallon;
    double parking;
    double tolls;
    double gasolineCost;
    double totalCost;

    printf("Total miles driven per day: ");
    scanf("%lf", &miles);

    printf("Cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    printf("Average miles per gallon: ");
    scanf("%lf", &milesPerGallon);

    printf("Parking fees per day: ");
    scanf("%lf", &parking);

    printf("Tolls per day: ");
    scanf("%lf", &tolls);

    gasolineCost = miles / milesPerGallon * costPerGallon;

    totalCost = gasolineCost + parking + tolls;

    printf("Gasoline cost per day: %.2f\n", gasolineCost);
    printf("Total cost per day: %.2f\n", totalCost);

    return 0;
}