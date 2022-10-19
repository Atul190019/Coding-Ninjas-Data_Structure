

bool checkAB(char input[]) {
// Write your code here
if(input[0]=='\0')
        return true;
else if(input[0]=='a')
        {
            if(input[1]=='\0')
                return true;
            else if(input[1]=='b'&&input[2]=='b')
            {
                int i = 3;
                for(;input[i]!='\0';i++)
                    input[i-3]=input[i];
                input[i-3]=input[i];
                return checkAB(input);
            }
        else if(input[1]=='a')
        {
            int i = 1;
                for(;input[i]!='\0';i++)
                    input[i-1]=input[i];
                input[i-1]=input[i];
                return checkAB(input);
        }
        else 
        return false;
    }
    else 
        return false;
}




