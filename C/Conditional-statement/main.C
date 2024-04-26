#include <stdio.h>
#include <stdlib.h> // Include this header for strtol and EXIT_FAILURE

char *readline(); // Declare the readline function before using it

int main()
{
    char *n_endptr;
    char *n_str = readline();             // Read input from stdin
    int n = strtol(n_str, &n_endptr, 10); // Convert the input string to an integer

    if (n_endptr == n_str || *n_endptr != '\0')
    {
        exit(EXIT_FAILURE);
    }

    // Write Your Code Here
    char *number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n > 9)
    {
        printf("Greater than 9");
    }
    else
    {
        printf("%s", number[n - 1]);
    }
    return 0;
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (1)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line || *line == '\n')
        { // Check for EOF or newline
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        { // Check for end of line
            break;
        }

        size_t new_length = alloc_length << 1;
        char *new_data = realloc(data, new_length); // Reallocate memory

        if (!new_data)
        { // Check if reallocation failed
            break;
        }

        data = new_data;
        alloc_length = new_length;
    }

    if (data_length > 0 && data[data_length - 1] == '\n')
    { // Remove newline if present
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length + 1); // Trim the excess memory
    return data;
}
