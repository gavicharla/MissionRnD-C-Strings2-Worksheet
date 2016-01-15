/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


#include <stdio.h>
#include<stdlib.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels)
{ 
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
		return;
	}
	int con = 0, vow = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			char temp = str[i];
			if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U' || temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
				vow += 1;
			else
				con += 1;
		}
	}
	*consonants = con;
	*vowels = vow;
}
