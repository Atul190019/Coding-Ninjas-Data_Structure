#include <cstring>
void removeX(char input[])
{
    // Write your code here
    int l = strlen(input);
    if (input[0] == 'x')
    {
        for (int i = 0; i < l; i++)
            input[i] = input[i + 1];
        removeX(input);
    }
    else if (input[1] != '\0')
        removeX(input + 1);
    else
        return;
}
