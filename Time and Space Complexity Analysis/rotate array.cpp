void rotator(int *arr, int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void rotate(int *input, int d, int n)
{
    rotator(input, n);
    rotator(input + n - d, d);
    rotator(input, n - d);
}
