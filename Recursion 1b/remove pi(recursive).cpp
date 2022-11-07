/*int length(char input[]) {
int len = 0; 
for (int i = 0; input[i] != '\0'; i++) {
len++;
}
return len;

void replacePi(char input[], int start) { 
if(input[start] == '\0' || input[start+1] == '\0') {
    return; 

}
replacePi(input, start+1); 
if(input[start] == 'p' && input[start+1] == 'i') { 
    int len = length(input);
    input[len+2] = '\0';
for (int i = len-1; i >= start+2; i--) {
    input[i+2] = input[i] ;
}
input[start] = '3';
input[start+1] = '.'
input[start+2] = '1';
input[start+3] = '4';

}

void replacePi (char input[])
    replacePi (input, 0);
}*/

/*#include <cstring>
void replacePi(char input[])
{
    // Write your code here
    int l = strlen(input);
    if (input[0] == 'p' && input[1] == 'i')
    {
        for (int j = l; j > 1; j--)
            input[j + 2] = input[j];
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    }
    else if (input[1] != '\0')
        replacePi(input + 1);
    else
        return;
}*/

#include <cstring>
void replacePi(char input[]) {
  // Write your code here
  int l = strlen(input);
  if (input[0] == 'p' && input[1] == 'i') {
    for (int j = l; j > 1; j--)
      input[j + 2] = input[j];
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
    replacePi(input + 4);
  } else if (input[1] != '\0')
    replacePi(input + 1);
  else
    return;
}
