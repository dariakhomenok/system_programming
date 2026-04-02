#include <stdio.h>
int main()
{
    int contestants[] = {1,2,3};
    int *choice=contestants;
    contestants[0]=2;
    contestants [1]= contestants[2];
    contestants[2]=*choice;
    printf("Я собираюсь выбрать претндента номер %i\n", *choice);
    return 0;
}