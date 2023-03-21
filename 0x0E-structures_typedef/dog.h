#ifdef _DOG_H_
#define _DOG_H-
/**
 * struct dog - struct type describing information of dogs
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of dog
 */
struct dog
{
	char *(name;
			float age;
			char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

