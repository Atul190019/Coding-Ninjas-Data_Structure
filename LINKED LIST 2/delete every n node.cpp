Node *skipMdeleteN(Node *head, int M, int N)
{
if (M==0 || head == NULL) 
{
return NULL;
}

if (N == 0)
{
return head;
}

Node *currentNode = head; 
Node *temp = NULL;

while (currentNode != NULL)
{
int take = 0; 
int skip = 0;

while (currentNode != NULL && take < M)
{
if (temp == NULL)
{
temp = currentNode;
}

else
{
temp->next = currentNode; 
temp = currentNode;
}
currentNode = currentNode->next;

    take++;
}

while (currentNode != NULL && skip < N)
{
    Node *newNode = currentNode; 
    delete currentNode;
    currentNode = newNode->next;
    skip++;
}
}

if (temp != NULL)
{
temp->next = NULL;
}

return head;
}
