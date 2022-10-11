#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - creates data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This is a composite data definition
 * for dog details.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
