#include <stdlib.h>
#include <string.h>

typedef struct dog {
	char *name;
	float age;
	char *owner;
}
dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
	/* Allocate memory for the dog */
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL) {
		return NULL;
		/* Failed to allocate memory */
	}

	/* Allocate memory for the name and owner strings */
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL) {
		/* Failed to allocate memory for strings */
		free(new_dog);
		return NULL;
	}

	/* Copy the name and owner strings */
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	/* Set the age */
	new_dog->age = age;

	return new_dog;
}
