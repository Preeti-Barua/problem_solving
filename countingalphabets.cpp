#include<iostream>
//#include<string>
using namespace std;
#define MAX_SIZE 100
int main()
{
// program to count total number of words in a string.
	//char str[100];

/*	 char str[MAX_SIZE];
	int count=0;
	cout<<"enter the  string:;";
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]== ' '||str[i]== '\n'||str[i]== '\t')
		{
		
		count++;
	}
	}
	cout<<"the number alphabets::"<<count;
	return 0;
	*/
	char str[MAX_SIZE];
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;

    /* Runs a loop till end of string */
    while(str[i] != '\0')
    {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
