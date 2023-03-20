#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Save the params.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
	/*task 1*/
void init_dog(struct dog *d, char *name, float age, char *owner);

	/*task 2*/
void print_dog(struct dog *d);

	/*task 3*/
typedef struct dog dog_t;

#endif
