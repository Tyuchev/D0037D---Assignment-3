// D0037D - Assignment 3 Main

#include "Assign3_lib.h"

// Task 7 - I have found this Assignment quite difficult and have spent approximately 15 hours on it. The assignment has helped me practise Dynamic memory management as well as pointers.


int main()
{
	int option;

	std::cout << "Please choose a task to run from the following menu: " << std::endl;
	std::cout << "1: Task 1" << std::endl;
	std::cout << "2: Task 2" << std::endl;
	std::cout << "3: Task 3" << std::endl;
	std::cout << "4: Task 4" << std::endl;
	std::cout << "5: Task 5" << std::endl;
	std::cout << "6: Task 6" << std::endl;
	std::cout << "-1: Exit" << std::endl;
	std::cout << std::endl;

	std::cin >> option;

	switch (option)
	{

	case 1:
		task1();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case 2:
		task2();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case 3:

		task3();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case 4:

		task4();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case 5:

		task5();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case 6:

		task6();
		std::cin.clear();
		std::cout << std::endl;
		break;

	case (-1):
		std::cout << "Goodbye" << std::endl;
		std::cout << std::endl;
		break;

	}
	return 0;
}