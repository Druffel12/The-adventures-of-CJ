#include <iostream>
#include <cstring>


struct Player
{
	char name[80];
};


void addStrings(char dst[], int size, char src1[], char src2[])
{
	// copies data from src1 into the dst buffer
	strcpy_s(dst, size, src1);
	// convatenates data from src2 into the dst buffer
	strcat_s(dst, size, src2);

	//result should be src1+src2
}


void main()
{
	//definition
	char buffer[80];

	//instatiate
	char cstring[] = "Dinosaurs are cool";
	char buffer2[80] = { 0 };

	//assignment
	strcpy_s(buffer, "String");


	//length
	int length = strlen(buffer);
	
	//concatenation
	strcat_s(buffer, cstring);
	
	//-1, 0, 1
	int result = strcmp(buffer, cstring);


	
	while (true);
}

