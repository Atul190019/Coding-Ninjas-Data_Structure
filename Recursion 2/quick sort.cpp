int partition(int input[], int start, int end)
{
    int pivot = input[end]; // pivot
    int i = start - 1;      // Index of smaller element and indicates the right position of pivot found so far

    for (int j = start; j <= end - 1; j++)
    {
        // If current element is smaller than the pivot
        if (input[j] < pivot)
        {
            i++; // increment index of smaller element
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }
    int temp = input[i + 1];
    input[i + 1] = input[end];
    input[end] = temp;
    return (i + 1);
}
void quickSort(int input[], int start, int end)
{
    // your code goes here
    if (start >= end)
        return;
    else
    {
        int index = partition(input, start, end);
        quickSort(input, start, index - 1);
        quickSort(input, index + 1, end);
    }
}
void quickSort(int input[], int size)
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Change in the given array itself.
       Taking input and printing output is handled automatically.
    */
    quickSort(input, 0, size - 1);
}
