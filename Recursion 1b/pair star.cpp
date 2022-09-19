int length(char input[])
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

void pairStar(char input[],int start){
    if(input[start]=='\0'){
        return;
    }
    pairStar(input,start+1);
    if(input[start]==input[start+1])
    {
        int len=length(input);
        input[len+1]='\0';
        int i;
        for(i=len-1;i>=start+1;i--){
            input[i+1]=input[i];
        }
        input[start+1]='*';
    }
}

void pairStar(char input[]) {
    // Write your code here
  int len=length(input);
    
    return pairStar(input,0);
}
