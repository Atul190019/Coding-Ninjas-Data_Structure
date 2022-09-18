#include <vector>
class PriorityQueue
{
    // Declare the data members here
    vector<int> pq;

public:
    PriorityQueue()
    {
       
    }

   

    int getSize()
    {
        
        return pq.size();
    }

    bool isEmpty()
    {
       
        return pq.size() == 0;
    }

    void insert(int element)
    {
        
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[parentIndex] < pq[childIndex])
            {
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childIndex];
                pq[childIndex] = temp;
            }
            else
                break;
            childIndex = parentIndex;
        }
    }

    int getMax()
    {
        
        if (isEmpty())
            return 0;
        return pq[0];
    }

    int removeMax()
    {
        
        if (isEmpty())
            return 0;
        int max = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int parentIndex = 0;
        while (parentIndex < pq.size())
        {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
            int maxIndex;
            if (leftChildIndex < pq.size() && rightChildIndex < pq.size())
                maxIndex = (pq[leftChildIndex] >= pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
            else if (leftChildIndex < pq.size())
                maxIndex = leftChildIndex;
            else
                break;
            if (pq[maxIndex] > pq[parentIndex])
            {
                int temp = pq[maxIndex];
                pq[maxIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
                break;
            parentIndex = maxIndex;
        }
        return max;
    }
};
