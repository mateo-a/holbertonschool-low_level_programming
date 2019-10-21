#ifndef DOG_H
#define DOG_H
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog- name of the struture
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
