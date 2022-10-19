#include <string>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int permute(string a, int l, int r, string output[])
{
    int i;
    static int j = 0, count = 0;
    if (l == r)
    {
        output[j] = a;
        j++;
        count++;
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a[l]), (a[i]));
            permute(a, l + 1, r, output);
            swap((a[l]), (a[i]));
        }
    }
    return count;
}

int returnPermutations(string input, string output[])
{
    int len = input.length() - 1;
    return permute(input, 0, len, output);
}
