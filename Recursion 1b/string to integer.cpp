int length(char input[]){
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}

int stringToNum(char input[],int last){
    if(last==0){
        return input[last]-'0';
    }
    int smallAns=stringToNum(input,last-1);
        int a = input[last]-'0';
    return smallAns*10+a;
}


int stringToNumber(char input[]) {
    // Write your code here
    int len = length(input);
    return stringToNum(input,len-1);

}
