#include<stdio.h>                                           /// test cases1
                                                            /// input A   output- a      
                                                            /// test case2
                                                            ///input a     ouput-A
                                                            //testcae3
                                                            ///input 1
                                                            // output-1
char CharToggleX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = CharToggleX(cValue);

    printf("Toggled character is : %c\n",cRet);

    return 0;
}