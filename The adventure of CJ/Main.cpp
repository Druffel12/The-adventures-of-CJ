#include <iostream>

void CJ()
{
	int HP1 = 0;
	int STR1 = 0;
	int DEX1 = 0;
	int INT1 = 0;
	
	int CJHP = 20 + (HP1 * 3);
	int CJSTR = STR1;
	int CJDEX = DEX1;
	int CJINT = INT1;

}

int main()
{
	int HP = 0;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int SKP = 0;
	int i = 0;

		std::cout << "Welcome to CJ's Adventure" << std::endl;
		std::cout << "Your goal is to skip class and breakout of school" << std::endl;
		std::cout << "Here's 10 free skill points use them how you will" << std::endl;
		
		while (i < 10, ++i);
	{
		std::cout << "HP:" << HP << std::endl;
		std::cout << "STR:" << STR << std::endl;
		std::cout << "DEX:" << DEX << std::endl;
		std::cout << "INT:" << INT << std::endl;

		std::cin >> SKP;
		if (SKP = 1)
		{
			HP + 1;
		}
	}
		system("pause");
}


