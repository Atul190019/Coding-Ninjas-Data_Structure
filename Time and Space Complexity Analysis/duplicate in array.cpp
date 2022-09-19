int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sumofNminusTwoNaturalNumbers = 0;
    
    for (int i =0;i<n-1;i++)
    {
        sumofNminusTwoNaturalNumbers += i;
    }
    
    int sumofElements = 0;
    
    for(int i=0;i<n;i++)
    {
        sumofElements += arr[i];
    }
    return (sumofElements - sumofNminusTwoNaturalNumbers);
}
