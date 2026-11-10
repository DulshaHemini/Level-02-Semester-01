#include <stab.h>

struct person
{
    int age;
    float weight;
};

int main(){
    struct person *personPtr, person1;
    personPtr = &person1;

    printf("Enter integer: ");
    scanf("%d",&(*personPtr).age);  //printf("%d", personPtr->age);


    printf("Enter number: ");
    scanf("%f",&(*personPtr).weight);
    
    printf("Displaying: ");
    printf("%d%f",(*personPtr).age,(*personPtr).weight);

}
