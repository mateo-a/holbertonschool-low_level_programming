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
 * dog_t - new typedef for dog
 */
typedef struct dog dog_t;
dog_t *dog_2(char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
