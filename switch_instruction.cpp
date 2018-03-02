#include <iostream>
int main()
{
	std::cout << "Captain, which subassembly need to be checked?\n"
		  << "no. 10 - Engine\nno. 35 - Steer \nno. 30 - Radar\n"
		  << "Give number, captain: ";

	int which;
	std::cin >> which;

	switch(which)          	 //selection menu
	{
	case 10:
		std::cout << "Checking engine...\n";
		break;

	case 30:
		std::cout << "Checking radar...\n";
		break;

	case 35:
		std::cout << "Checking steer...\n";
		break;
	default:
		std::cout << "You gave no. " << which
				<< " - do not know that number ! ";
				break;
	}
	system("pause");	
	
}
