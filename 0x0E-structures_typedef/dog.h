#ifndef DOH_H
#define DOH_H

/**
* struct dog - THE DOG STRUCT
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: a lone dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOH_H */
