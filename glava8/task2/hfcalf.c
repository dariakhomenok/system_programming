#include <stdio.h>
#include "hfcalf.h"

void display_calories(float weight, float distance, float coeff)
{
    printf("Вес: %3.2f фунта\n", weight);
    printf("Расстояние: %3.2f мили\n", distance);
    printf("Сложено калорий: %4.2f кал\n", coeff * weight * distance);
}