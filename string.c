//hello
#include <string.h>
//functions call
int my_strlen(char *s){
/*Function that receives a string as a parameter and
returns the length of that string*/
	int l=0;//size of string
	while(*s != '\0'){
		l++;
		s++;
	}
	return l;
}
int str2upper(char *s){
/* Converts all small characters to upper case characters in string and
   returns the number of changed characters*/

	int i=0;
	while(*s){
		if(*s >= 97 && *s <= 122){
			*s -= 32;
			i++;
		}
		s++;
	}
	return i;
}
int str2lower(char *s){
/* Converts all capital characters to lower case characters in string and
   returns the number of changed characters*/
	int i=0;
	while(*s){
		if(*s >= 65 && *s <= 90)
		{	*s += 32;
			i++;
		}
		s++;
	}
	return i;
}
int str_strip_numbers(char *s){
//removes all occurrences of numbers, Function returns new length of the string
	int i=0;
	while(*s != '\0'){
		if(*s<48 || *s>57){	//if *s is not a number
			i++;
		}
		s++;
	}
	return i;
}
void mystrcpy(char *s,char *d){
	//Function that will copy the content of string s to string d
	int i=0;
    while(*s!='\0'){
        d[i] = *s;
        i++;
        s++;
    }
	d[i] = '\0'; //ends string d
}
int mystrcmp (char *s, char *d){
/*Function that will compare two strings together. Function returns place (n) of first different character 
  -n if s is ordered before in alphabet that d
   0 if strings are equal
   +n if d is ordered before s
*/
	int count = 0;
	int result;
	while(s[count] != '\0' && s[count]==d[count])
	{
		count ++;
	}
	if (s[count] < d[count])
	result = -count;
	else if (s[count] > d[count])	result = count;
	else							result = 0;
	return result;
}
char * strdupl(char *s){
//Creates a duplicate of a string s and returns a pointer to newly created string
	char *dup;
	dup = (char *)new (char);
	int i=0;
	/* Copy string */
	while(*(s+i))
	{
		*(dup+i) = *(s+i);
		i++;
	}
	*(dup+i) = '\0';
	return(dup);
}

