#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of data types
 * @name: first member
 * @age: 2nd memeber
 * @owner: 3rd member
 */

struct dog
{
char *name;
float age;
char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
