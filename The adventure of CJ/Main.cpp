#include <iostream>
#include <cstdlib>
#include <random>
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

struct Enemy
{
	int EnemyID = 0; // 0 - jock 1- nerd 2- goth  5- principle
	char Type[12];
	int HP = 0;
	int STR = 0;
	int DEX = 0;
	int INT = 0;

	
	
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

	int JockHP = 20;
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

void attack(CJ & stat)
{
	

	
	float Pencil = (2.5 * stat.DEX);
	float Protractor = (2 * stat.INT);
	
}
void Punch(CJ & stat, Drama_Geek & keil)
{
	float damage = (1.5 * stat.STR);

	keil.Drama_GeekHP -= damage;

	std::cout << "You hit the Drama_Geek for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "	Enemy Health: " << keil.Drama_GeekHP<< std::endl;

}
void Pencil(CJ & stat, Drama_Geek & keil)
{
	float damage = (2.5 * stat.DEX);

	keil.Drama_GeekHP -= damage;

	std::cout << "You stabbed the Drama_Geek for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.Drama_GeekHP << std::endl;

}
void Protractor(CJ & stat, Drama_Geek & keil)
{
	float damage = (2 * stat.INT);

	keil.Drama_GeekHP -= damage;
	std::cout << "You shot the Drama_Geek for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.Drama_GeekHP << std::endl;
}

void Punch(CJ & stat, Jock & keil)
{
	float damage = (1.5 * stat.STR);

	keil.JockHP -= damage;

	std::cout << "You hit the jock for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "	Enemy Health: " << keil.JockHP << std::endl;

}
void Pencil(CJ & stat, Jock & keil)
{
	float damage = (2.5 * stat.DEX);

	std::cout << "You stabbed the jock for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.JockHP << std::endl;

}
void Protractor(CJ & stat, Jock & keil)
{
	float damage = (2 * stat.INT);

	std::cout << "You shot the jock for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.JockHP << std::endl;
}

void JEnemyAttack(CJ &p, Jock &e)
{
	
	int rando = rand() % 3 + 1;
	float damage;
	switch (rando)
	{
	case 1: 
		//strength attack
		damage = (1.5 * e.JockSTR);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.JockHP << std::endl;
		break;
	case 2:
		damage = (2.5 * e.JockDEX);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.JockHP << std::endl;
		break;
	case 3:
		damage = (2 * e.JockINT);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.JockHP << std::endl;
		break;
	}


}

void DEnemyAttack(CJ &p, Drama_Geek &e)
{

	int rando = rand() % 3 + 1;
	float damage;
	switch (rando)
	{
	case 1:
		//strength attack
		damage = (1.5 * e.Drama_GeekSTR);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.Drama_GeekHP << std::endl;
		break;
	case 2:
		damage = (2.5 * e.Drama_GeekDEX);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.Drama_GeekHP << std::endl;
		break;
	case 3:
		damage = (2 * e.Drama_GeekINT);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.Drama_GeekHP << std::endl;
		break;
	}


}

void NEnemyAttack(CJ &p, Nerd &e)
{

	int rando = rand() % 3 + 1;
	float damage;
	switch (rando)
	{
	case 1:
		//strength attack
		damage = (1.5 * e.NerdSTR);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.NerdHP << std::endl;
		break;
	case 2:
		damage = (2.5 * e.NerdDEX);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.NerdHP << std::endl;
		break;
	case 3:
		damage = (2 * e.NerdINT);
		p.HP -= damage;
		std::cout << "The Jock hit us for " << damage << " damage!" << std::endl;
		std::cout << "Your health: " << p.HP << "   Enemy Health: " << e.NerdHP << std::endl;
		break;
	}


}

void Punch(CJ & stat, Nerd & keil)
{
	float damage = (1.5 * stat.STR);

	keil.NerdHP -= damage;

	std::cout << "You hit the Nerd for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "	Enemy Health: " << keil.NerdHP << std::endl;

}
void Pencil(CJ & stat, Nerd & keil)
{
	float damage = (2.5 * stat.DEX);

	keil.NerdHP -= damage;

	std::cout << "You stabbed the Nerd for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.NerdHP << std::endl;

}
void Protractor(CJ & stat, Nerd & keil)
{
	float damage = (2 * stat.INT);

	keil.NerdHP -= damage;
	std::cout << "You shot the Nerd for " << damage << " damage!" << std::endl;
	std::cout << "Your health: " << stat.HP << "   Enemy Health: " << keil.NerdHP << std::endl;
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
	int i = 0;
	int SKP;
	Jock Jenemy1;
	Jock Jenemy2;
	Jock Jenemy3;

	Drama_Geek Denemy1;
	Drama_Geek Denemy2;
	Drama_Geek Denemy3;

	Nerd Nenemy1;
	Nerd Nenemy2;
	Nerd Nenemy3;

	Teacher Tenemy1;
	Teacher Tenemy2;
	Teacher Tenemy3;

	Enemy jock1;

	Jock encounter1[] = { Jenemy1, Jenemy2, Jenemy3 };
	Drama_Geek encounter2[] = { Denemy1, Denemy2, Denemy3 };
	Nerd encounter3[] = { Nenemy1, Nenemy2, Nenemy3 };
	Teacher encounter4[] = { Tenemy1, Tenemy2, Tenemy3 };

	CJ stat;
	stat.HP = 25;
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

	int score = 0;

	while (score = 20)
	{
		std::cout << "Now that thats done lets get to it \n";
		std::cout << "(Ya'know incase you wanna train or whatever) \n";
		std::cout << "Side note: you must defeat 3 enemies to go to the boss \n";
		std::cout << "1.Jocks \n" << "2.Drama \n" << "3.Nerds \n" << "4.Final Area \n";
		int Area = 0;
		int Score = 0;

		std::cin >> Area;

		if (Area == 1)
		{

			std::cout << "Looks like we have dweeb in our midst boys! \n";
			int R1 = 0;
			while (R1 < 3)
			{
				bool defeat = false;
				std::cout << "let the fight begin!! \n" << "Round: " << R1 + 1 << std::endl;

				while (defeat == false)
				{
					int A1;



					std::cout << "What will you do \n";
					std::cout << "1. Punch \n" << "2. Pencil \n" << "3. Protractor \n";
					std::cin >> A1;

					if (A1 == 1)
					{
						Punch(stat, encounter1[R1]);
						JEnemyAttack(stat, encounter1[R1]);
					}

					else if (A1 == 2)
					{
						Pencil(stat, encounter1[R1]);
						JEnemyAttack(stat, encounter1[R1]);
					}

					else if (A1 == 3)
					{
						Protractor(stat, encounter1[R1]);
						JEnemyAttack(stat, encounter1[R1]);
					}
					else
					{
						std::cout << "What are you even trying to do? \n";
					}
					if (stat.HP <= 0)
					{
						std::cout << "you were stopped get back to class" << std::endl;
						system("pause");
						exit(0);
					}
					if (encounter1[R1].JockHP <= 0)
					{
						std::cout << "YOU WON THE ROUND!!" << std::endl;
						defeat = true;
					}
					//Add vto all instances of fighting 


				}
				++R1;
			}
			score + 1;
		}

		else if (Area == 2)
		{

			if (Area == 2)
			{

				std::cout << "After this you wont need to improvise being in pain! \n";
				int R1 = 0;
				while (R1 < 3)
				{
					bool defeat = false;
					std::cout << "let the fight begin!! \n" << "Round: " << R1 + 1 << std::endl;

					while (defeat == false)
					{
						int A2;



						std::cout << "What will you do \n";
						std::cout << "1. Punch \n" << "2. Pencil \n" << "3. Protractor \n";
						std::cin >> A2;

						if (A2 == 1)
						{
							Punch(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}

						else if (A2 == 2)
						{
							Pencil(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}

						else if (A2 == 3)
						{
							Protractor(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}
						else
						{
							std::cout << "What are you even trying to do? \n";
						}

						if (stat.HP <= 0 || encounter2[R1].Drama_GeekHP <= 0)
						{
							std::cout << "YOU WON THE ROUND!!" << std::endl;
							defeat = true;
						}


					}
					++R1;
				}
				score + 1;
			}
		}

		else if (Area == 3)
		{

			std::cout << "I bet you use a calculator disgraceful! \n";
			int R1 = 0;
			while (R1 < 3)
			{
				bool defeat = false;
				std::cout << "let the fight begin!! \n" << "Round: " << R1 + 1 << std::endl;

				while (defeat == false)
				{
					int A2;



					std::cout << "What will you do \n";
					std::cout << "1. Punch \n" << "2. Pencil \n" << "3. Protractor \n";
					std::cin >> A2;

					if (A2 == 1)
					{
						Punch(stat, encounter3[R1]);
						NEnemyAttack(stat, encounter3[R1]);
					}

					else if (A2 == 2)
					{
						Pencil(stat, encounter3[R1]);
						NEnemyAttack(stat, encounter3[R1]);
					}

					else if (A2 == 3)
					{
						Protractor(stat, encounter3[R1]);
						NEnemyAttack(stat, encounter3[R1]);
					}
					else
					{
						std::cout << "What are you even trying to do? \n";
					}

					if (stat.HP <= 0 || encounter3[R1].NerdHP <= 0)
					{
						std::cout << "YOU WON THE ROUND!!" << std::endl;
						defeat = true;
					}


				}
				++R1;
			}
			score + 1;


		}

		else if (Area == 4)
		{
			if (score = 12);
			{
				std::cout << "What are you doing in the teachers lounge get to class. ";
				int R1 = 0;
				while (R1 < 3)
				{
					bool defeat = false;
					std::cout << "let the fight begin!! \n" << "Round: " << R1 + 1 << std::endl;

					while (defeat == false)
					{
						int A2;



						std::cout << "What will you do \n";
						std::cout << "1. Punch \n" << "2. Pencil \n" << "3. Protractor \n";
						std::cin >> A2;

						if (A2 == 1)
						{
							Punch(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}

						else if (A2 == 2)
						{
							Pencil(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}

						else if (A2 == 3)
						{
							Protractor(stat, encounter2[R1]);
							DEnemyAttack(stat, encounter2[R1]);
						}
						else
						{
							std::cout << "What are you even trying to do? \n";
						}

						if (stat.HP <= 0 || encounter2[R1].Drama_GeekHP <= 0)
						{
							std::cout << "YOU WON THE ROUND!!" << std::endl;
							defeat = true;
						}


					}
					++R1;
				}
				score + 1;
			}
		// make loop repeat as too have to fight alot
		}

		std::cout << "Congrats you escaped school and are effectively not learning";

		system("pause");
	}
}


