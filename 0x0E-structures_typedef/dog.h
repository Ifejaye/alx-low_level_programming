/**
  * struct dog -  a new type struct dog
  * @name: the name
  * @age: a float
  * @owner: owner's name
  *
  * Description: just for practice
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct  {
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
