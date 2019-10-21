#ifndef DOG_H
#define DOG_H
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
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
