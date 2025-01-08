#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#ifdef USE_DUMMY_FLAG
#define FLAG_STRING "ATHACKCTF{FYI_THIS_IS_NOT_THE_REAL_FLAG}"
#else
#define FLAG_STRING "ATHACKCTF{f0rm4t_5tring_vulner4bilitie5}"
#endif

#define MAX_BUFFER_SIZE 1024
#define MAX_USERNAME_SIZE 16

char flag[] = FLAG_STRING;

const char *random_element(const char *options[], int size) {
    return options[rand() % size];
}

void print_random_question() {
    char question[MAX_BUFFER_SIZE];

    const char *things[] = {
            "grains of sand", "drops of water", "leaves", "stars", "atoms",
            "threads of silk", "blades of grass", "seeds", "pebbles", "feathers"
    };

    const char *containers[] = {
            "jar", "box", "bucket", "cup", "container",
            "vase", "basket", "bottle", "barrel", "pot"
    };

    const char *sizes[] = {
            "as big as a basketball", "as large as a football", "the size of a watermelon",
            "as big as a tennis ball", "as large as a beach ball",
            "the size of a soccer ball", "as big as a golf ball", "as large as a baseball",
            "the size of a bowling ball", "as big as a volleyball"
    };

    const char *years[] = {
            "1723", "1800", "1905", "2000", "1500",
            "2023", "1890", "1400", "1965", "2025"
    };

    snprintf(
            question, sizeof(question),
            "How many %s can fit in a %s that is %s fabricated in %s?\n",
            random_element(things, 10),
            random_element(containers, 10),
            random_element(sizes, 10),
            random_element(years, 10)
    );

    printf(question);
}

int main() {
    // Seed the random number generator
    srand(time(NULL));


    // Print the flag for debugging or testing (optional)
    // printf("Flag: %s\n", flag);

    // Print message asking for username
    printf("Before we start, type your username:\n username=");

    // Read username, ensuring no more than 50 characters
    char username[MAX_USERNAME_SIZE];
    fgets(username, sizeof username, stdin);
    // Remove newline character if it's read by fgets
    username[strcspn(username, "\n")] = 0;

    // Print random question
    print_random_question();

    // Ask for a number (has to be an int)
    int user_value;
    printf("Please enter your answer (a number):\n answer=");
    scanf("%d", &user_value);

    // Generate a random value as the correct answer
    int random_value = rand() % 0xFFFFFFFF;  // Random number between 1 and 10

    // Print the result
    if (user_value == random_value) {
        printf("Yes, you were right!\n");
    } else {
        char buffer1[MAX_BUFFER_SIZE];
        snprintf(buffer1, MAX_BUFFER_SIZE, "No %s! you are wrong!", username);

        char buffer2[MAX_BUFFER_SIZE];
        snprintf(buffer2, MAX_BUFFER_SIZE, "%s %s", buffer1, "The right answer was %d.");

        char buffer3[MAX_BUFFER_SIZE];
        snprintf(buffer3, MAX_BUFFER_SIZE, "%s %s", buffer2, "Not %d.\n");

        printf(buffer3, random_value, user_value);
    }

    printf("You were 100%% wrong. Bye!\n");

    return 0;
}