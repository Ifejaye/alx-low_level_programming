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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
