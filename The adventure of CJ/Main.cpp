#include <iostream>

struct CJ
{
	int HP = 0;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	float Exp = 0;


	//Stat multiplyers * 1.5? starting goal 20
	//make actual abilities floats for deciaml values of their damage
};

struct Nerd
{
	int NerdHP = 20;
	int NerdSTR = 2;
	int NerdDEX = 4;
	int NerdINT = 15;
};

struct NerdB
{

	int NerdBHP = 25;
	int NerdBSTR = 4;
	int NerdBDEX = 6;
	int NerdBINT = 22;
};

struct Jock
{

	int JockHP = 30;
	int JockSTR = 12;
	int JockDEX = 6;
	int JockINT = 2;
};

struct JockB
{

	int JockBHP = 40;
	int JockBSTR = 16;
	int JockBDEX = 8;
	int JockBINT = 2;
};

struct Goth
{

	int GothHP = 10;
	int GothSTR = 25;
	int GothDEX = 25;
	int GothINT = 20;
};

struct Drama_Geek
{

	int Drama_GeekHP = 18;
	int Drama_GeekSTR = 9;
	int Drama_GeekDEX = 15;
	int Drama_GeekINT = 8;
};

struct Drama_GeekB
{

	int Drama_GeekBHP = 23;
	int Drama_GeekBSTR = 10;
	int Drama_GeekBDEX = 20;
	int Drama_GeekBINT = 10;
};

struct Teacher
{

	int TeacherHP = 40;
	int TeacherSTR = 15;
	int TeacherDEX = 10;
	int TeacherINT = 15;
};

struct Principal
{

	int PrincipalHP = 100;
	int PrincipalSTR = 22;
	int PrincipalDEX = 13;
	int PrincipalINT = 18;
};

void attack()
{
	CJ stat;

	float punch = (1.5 * stat.STR);
	float Pencil = (2.5 * stat.DEX);
	float Protractor = (2 * stat.INT);
	
}

int inputRange(int min, int max)
{
	int input;

	do
	{
	
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(80, '\n');

	
	} while (std::cin.fail() || input > max || input < min);


	return input;
}


void levelUp(CJ &stat)
{
	std::cout << "Time for some levvveeeeelllssss boi" << std::endl;
	std::cout << "1 HP:" << stat.HP << std::endl;
	std::cout << "2 STR:" << stat.STR << std::endl;
	std::cout << "3 DEX:" << stat.DEX << std::endl;
	std::cout << "4 INT:" << stat.INT << std::endl;

	int SKP = inputRange(1, 4);

	if (SKP == 1)
	{
		stat.HP += 3;
	}
	else if (SKP == 2)
	{
		stat.STR += 3;
	}
	else if (SKP == 3)
	{
		stat.DEX += 1;
	}
	else if (SKP == 4)
	{
		stat.INT += 2;
	}
}


int main()
{
	int i =0;
	int SKP;
	CJ stat;
	stat.HP = 15;
	stat.STR = 0;
	stat.DEX = 0;
	stat.INT = 0;

		std::cout << "Welcome to CJ's Adventure" << std::endl;
		std::cout << "Your goal is to skip class" << std::endl;
		std::cout << "Here's 10 free skill points use them how you will" << std::endl;
		
	while (i < 10)
	{
		++i;
		
		
		levelUp(stat);
		
	}

	std::cout << "Now that thats done lets get to it \n" << "W will go onward S will go back to the last defeated enemy \n";
	std::cout << "(Ya'know incase you wann train or whatever) \n";
	std::cout << "Side note: you must defeat 3 enemies to go to the boss \n";
	std::cout << "1.Jocks \n" << "2.Drama \n" << "3.Nerds \n" << "4.Final Area \n";
	int Area = 0;
	int Score = 0;

	std::cin >> Area;

	if (Area == 1)
	{
		std::cout << "Looks like we have dweeb in our midst boys! \n";
	}

	else if (Area == 2)
	{
		std::cout << "After this you wont need to improvise being in pain! \n";
	}

	else if (Area == 3)
	{
		std::cout << "I bet your pleb ass has to use a calculator disgraceful! \n";
	}
	
	else if (Area == 4)
	{
		
	}



		system("pause");
}


