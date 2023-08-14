#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return NULL;

    int name_len = _strlen(name);
    int owner_len = _strlen(owner);

    // Allocate memory for the dog structure
    dog_t *dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return NULL;

    // Allocate memory for the name and owner strings
    dog->name = malloc((name_len + 1) * sizeof(char));
    if (dog->name == NULL)
    {
        free(dog);
        return NULL;
    }

    dog->owner = malloc((owner_len + 1) * sizeof(char));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return NULL;
    }

    // Copy name and owner strings
    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);

    dog->age = age;

    return dog;
}
