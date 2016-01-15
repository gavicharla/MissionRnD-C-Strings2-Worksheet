/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<stdio.h>
int count_word_in_str_way_1(char *str, char *word){

	if (str == NULL)
		return 0;
	int flag = 0, count = 0, temp;
	for (int i = 0; str[i] != '\0'; i++)
	{
		temp = i;
		for (int j = 0; word[j] != '\0'; j++)
		{
			if (str[temp] != word[j])
			{
				flag = 1;
				break;
			}
			else
				temp++;
		}
		if (flag == 0)
			count++;
		flag = 0;
	}
	return count;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}