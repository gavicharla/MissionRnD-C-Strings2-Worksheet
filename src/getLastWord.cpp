/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	int start = -1, end = -1;
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' '&& start < 0)
			start = i;
		else if (str[i] != ' ' && str[i - 1] == ' ')
			start = i;
		if (str[i] == ' '&& str[i - 1] != ' ')
			end = i - 1;
	}
	if (str[i - 1] != ' ')
		end = i;
	if (end - start <= 0)
	{
		char * temp = (char*)malloc(sizeof(char));
		temp[0] = '\0';
		return temp;
	}
	else
	{
		char * temp = (char*)malloc(sizeof(char)*(end - start + 2));
		int index = 0;
		for (i = start; i <= end; i++)
		{
			temp[index] = str[i];
			index++;
		}
		temp[index] = '\0';
		return temp;
	}
}
