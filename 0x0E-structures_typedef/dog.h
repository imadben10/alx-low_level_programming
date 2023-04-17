#ifndef DOG_H
#define DOG_H
/**
* struct dog - Defines a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name of the owner
* Description: Defining a new struct dog with elements: name, age and owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */