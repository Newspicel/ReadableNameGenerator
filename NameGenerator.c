#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

typedef struct
{
    char *letter;
    char *chars[16];
} speakableChars;

speakableChars *linearSearch(speakableChars *items, size_t size, const char *letter)
{
    for (size_t i = 0; i < size; i++)
    {
        if (strcmp(&items[i].letter, &letter) == 0)
        {
            return &items[i];
        }
    }
}

int randomNumber(int min_num, int max_num)
{
    int result = (rand() % (max_num + 1 - min_num)) + min_num;
    return result;
}

speakableChars speakable[] = {
    {'a', {'b', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'u'}},
    {'b', {'a', 'e', 'i', 'l', 'o', 'r', 'u'}},
    {'c', {'h'}},
    {'d', {'a', 'e', 'i', 'l', 'o', 'r', 'u'}},
    {'e', {'f', 'i', 'j', 'k', 'm', 'n', 'p', 'r', 's', 't', 'u'}},
    {'f', {'a', 'e', 'i', 'l', 'o', 'r', 'u'}},
    {'g', {'a', 'e', 'i', 'l', 'o', 'u'}},
    {'h', {'a', 'e', 'i', 'o', 'u'}},
    {'i', {'b', 'f', 'k', 'l', 'm', 'n', 'p', 'r', 'h', 's', 't'}},
    {'j', {'a', 'e', 'i', 'o', 'u'}},
    {'k', {'a', 'e', 'i', 'l', 'o', 'u'}},
    {'l', {'a', 'e', 'i', 'o', 'u'}},
    {'m', {'a', 'e', 'i', 'l', 'o', 'u'}},
    {'n', {'a', 'e', 'i', 'o', 'u'}},
    {'o', {'b', 'c', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't'}},
    {'p', {'a', 'e', 'i', 'l', 'o', 'r', 'u'}},
    {'r', {'a', 'e', 'i', 'o', 'u'}},
    {'s', {'a', 'e', 'c', 'i', 'o', 'u', 't'}},
    {'t', {'a', 'e', 'i', 'o', 'u'}},
    {'u', {'b', 'g', 'i', 'k', 'n', 'm', 'p', 'r', 's', 't'}},
};

char starts[19] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'i', 'j', 'k',
                   'l', 'm', 'n', 'o', 'r', 'p', 's', 't', 'u'
                  };

char *generate()
{
    srand(time(NULL));
    char *name = (char *)malloc(128 * sizeof(char));

    int minLength = 5;
    int maxLength = 10;

    int length = randomNumber(4, 9);
    int startingCharIndex = randomNumber(0, 18);

    name[0] = starts[startingCharIndex];

    size_t size = sizeof(speakable) / sizeof(speakableChars);
    speakableChars *found;

    for (int i = 0; i < length; i++)
    {
        found = linearSearch(speakable, size, name[i]);
        name[i + 1] = found->chars[randomNumber(0, strlen(found->chars))];
    }

    name[length + 1] = '\0';

    return name;
}