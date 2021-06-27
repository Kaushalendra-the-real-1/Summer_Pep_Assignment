#include<iostream>
using namespace std;

void consDup(char *inputStr){
    if(inputStr[0] == '\0'){
        return;
    }
    if(inputStr[0] == inputStr[1])
    {
        int i=0;
        while(inputStr[i]!='\0')
        {
            inputStr[i] =inputStr[i+1];
            i++;
        }
        consDup(inputStr);
    }
    consDup(inputStr+1);
}

int main()
{
    char inputStr[] = "aabccba";
    consDup(inputStr);
    cout<<inputStr;
    return 0;
}