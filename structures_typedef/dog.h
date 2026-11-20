#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog in years
 * @owner: name of the dog's owner
 *
 * Description: Defines basic attributes for a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - alias for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
