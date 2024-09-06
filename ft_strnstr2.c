#include "libft.h"

char *strnstr(const char *big, const char *little, size_t len) {
    if (!*little) {
        return (char *)big;
    }

    size_t little_len = strlen(little);
    if (little_len > len) {
        return NULL;
    }

    const char *end = big + len - little_len;
    while (*big && big <= end) {
        if (*big == *little && strncmp(big, little, little_len) == 0) {
            return (char *)big;
        }
        big++;
    }

    return NULL;
}

// int main(int argc, char *argv[]) {
//     if (argc < 4) {
//         printf("Usage: %s <string> <substring> <length>\n", argv[0]);
//         return 1;
//     }

//     const char *big = argv[1];
//     const char *little = argv[2];
//     size_t len = (size_t)atoi(argv[3]);

//     char *result = strnstr(big, little, len);

//     if (result) {
//         printf("Found: '%s'\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }