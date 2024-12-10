#include <stdio.h>
#include <conio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1;

    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter height (in meters): ");
    scanf("%f", &person1.height);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);
    getch();
    return 0;
}