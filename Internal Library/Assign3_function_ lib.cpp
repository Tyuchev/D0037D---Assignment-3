// Assignment 3 Task 1

#include "Assign3_lib.h"

int task1()
{
	char length[] = "hello";
	std::cout << length << std::endl;
	char* p = length;
	std::cout << *p << std::endl;
	std::cout << std::endl;

	int count = 0;
	for (int i = 0; ;i++)
	{
		if (*(p + i) == '\0')
		{
			break;
		}
		count += 1;
	}

	std::cout << "The length of the given word is: " << std::endl;
	std::cout << count << std::endl;

	return 0;
}

int task2()
{
	int nr_of_employ = 0;
	double final_average = 0;
	std::cout << "Please input the number of employees: " << std::endl;
	std::cin >> nr_of_employ;
	int* arr = new int[nr_of_employ];

	for (int i = 0; i < nr_of_employ; i++)
	{
		std::cout << "Please input an employees salary :" << std::endl;
		std::cin >> arr[i];
	}

	final_average = average_salary(nr_of_employ, arr);

	std::cout << "The average salary for your employees is: " << final_average << std::endl;

	delete[] arr;

	return 0;
}

double average_salary(int x, const int *y)
{
	float total = 0;
	double average;
	
	for (int i = 0; i < x; i++)
	{
		total += y[i];
	}

	average = total / x;

	std::cout << average << std::endl;

	return average;
}



int task3()
{
    int* point = new int [3];
    int a;
    int b;
    int c;
    bool ascending;


    while (true)
    {
        std::cout << "Please enter an integer (Note: Type 0 to exit): " << std::endl;
        std::cin >> a;
        if (a == 0)
        {
            break;
        }
        std::cout << "Please enter another integer: " << std::endl;
        std::cin >> b;
        std::cout << "Please enter the last integer: " << std::endl;
        std::cin >> c;

        std::cout << "Ascending order (Yes or no)? (Enter 1 or 0): " << std::endl;
        std::cin >> ascending;

        point[0] = a;
        point[1] = b;
        point[2] = c;

        swap_sort(point, ascending);
    }

    delete[] point;

    return 0;
}

void swap_sort(int* p, int asc)
{
    if (asc == 0)
    {
        sort_decend(p);
    }
    else if (asc == 1)
    {
        sort_ascend(p);
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << *(p + i);
        std::cout << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

}


void swap(int* p, int a)
{
    int temp = *(p + a);
    *(p + a) = *(p + a + 1);
    *(p + a + 1) = temp;
}

void sort_ascend(int* p)
{

    while (true)
    {
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            if (*(p + i) > *(p + i + 1))
            {
                swap(p, i);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }

}


void sort_decend(int* p)
{

    while (true)
    {
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            if (*(p + i) < *(p + i + 1))
            {
                swap(p, i);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}


int task4()
{
    int a = 7, b = 6, c = 1;
    int* p1 = &a, * p2 = &b, * p3 = &c;

    while (true)
    {
        bool flag = false;
        if (*p1 > *p2)
        {
            swap_dp(&p1, &p2);
            flag = true;
        }
        if(*p2 > *p3)
        {
            swap_dp(&p2, &p3);
            flag = true;

        }
        if (flag == false)
        {
            break;
        }
    }

    std::cout << *p1 << " " << *p2 << " " << *p3 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}


void swap_dp(int **x, int **y)
{
    int* temp = *x;
    *x = *y;
    *y = temp;

    return;
}


int task5()
{
    char *user_input = new char;
    char char_remove;
    char char_replace;

    std::cout << "Please input a word: " << std::endl;
    std::cin >> user_input;
    std::cout << "Please input the character you wish to remove: " << std::endl;
    std::cin >> char_remove;
    std::cout << "Please input the character you wish to replace the previous character with: " << std::endl;
    std::cin >> char_replace;

    std::cout << user_input << std::endl;

    replace_chars(user_input, char_remove, char_replace);

    std::cout << user_input << std::endl;

    return 0;
}


int replace_chars(char *p, char remove, char replace)
{
    int length = 0;
    while (*(p + length) != '\0')
    {
        length += 1;
    }

    for (int i = 0; i < length; i++)
    {
        if (*(p + i) == remove)
        {
            *(p + i) = replace;
        }
    }

    return length;
}


int task6()
{

    std::vector <std::string> test_vector;
    std::vector <std::string> *pointer = &test_vector;
    
    while (true)
    {
        std::string choice;

        std::cout << "Please choose an option from the following menu: " << std::endl;
        std::cout << "Option 1: Initialise Database" << std::endl;
        std::cout << "Option 2: Insert" << std::endl;
        std::cout << "Option 3: Search" << std::endl;
        std::cout << "Option 4: Delete" << std::endl;
        std::cout << "Option 5: Print" << std::endl;
        std::cout << "Option 6: Save" << std::endl;
        std::cout << "Option 7: Load" << std::endl;
        std::cout << "Option 8: Quit" << std::endl;
        std::cout << std::endl;

        std::cin >> choice;

        if (choice == "1")
        {
            initial(pointer);
            std::cout << std::endl;
        }
        if (choice == "2")
        {
            insert(pointer);
            std::cout << std::endl;
        }
        if (choice == "3")
        {
            search(pointer);
            std::cout << std::endl;
        }
        if (choice == "4")
        {
            delete_item(pointer);
            std::cout << std::endl;
        }
        if (choice == "5")
        {
            print_vector(pointer);
            std::cout << std::endl;
        }
        if (choice == "6")
        {
            save_vector(pointer);
            std::cout << std::endl;
        }
        if (choice == "7")
        {
            load_vector(pointer);
            std::cout << std::endl;
        }
        if (choice == "8")
        {
            std::cout << std::endl;
            return 0;
        }
    }
}


int initial(std::vector<std::string> *p)
{
    std::string user_input;

    std::cout << "Are you sure you wish to delete? (1 or 0) " << std::endl;
    std::ws(std::cin);
    std::getline(std::cin, user_input);
    if (user_input == "1")
    {
        (*p).clear();
    }
    return 0;
}


std::string insert(std::vector<std::string> *p)
{
    std::string user_input;

    while (true)
    {
        std::cout << "Please input the names you wish to add " << std::endl;
        std::ws(std::cin);
        std::getline(std::cin, user_input);
        if (user_input == "q")
        {
            std::cout << std::endl;
            std::cin.clear();
            break;
        }
        else
        {
            (*p).push_back(user_input);
        }

    }
    return "test";
}


const int search(std::vector<std::string> *p)
{
    std::string element;
    std::string user_input;
    int vector_size;

    std::cout << "Please input the names you wish to search for " << std::endl;
    std::ws(std::cin);
    std::getline(std::cin, user_input);
    std::cout << std::endl;

    vector_size = (*p).size();
    for (int i = 0; i < vector_size; i++)
    {
        element = (*p)[i];
        if (element.find(user_input) != std::string::npos)
        {
            std::cout << element << std::endl;
        }
    }

    return 0;
}


int delete_item(std::vector<std::string> *p)
{
    std::string element;
    std::string user_input;
    int vector_size;

    std::cout << "Please input the name you wish to remove " << std::endl;
    std::cin.clear();
    std::cin >> user_input;
    std::cout << user_input;
    std::cout << std::endl;

    vector_size = (*p).size();
    for (int i = 0; i < vector_size; i++)
    {
        element = (*p)[i];
        if (element == user_input)
        {
            (*p).erase((*p).begin() + i);
            break;
        }
    }
    return 0;
}


const int print_vector(std::vector<std::string> *p)
{

    int vector_size;

    vector_size = (*p).size();
    for (int i = 0; i < vector_size; i++)
    {
        std::cout << (*p)[i] << std::endl;
    }
    return 0;
}


int save_vector(std::vector<std::string>* p)
{
    int vector_size;
    std::string file_name;
    vector_size = (*p).size();

    std::cout << "Please input the name of the file you wish to save to: " << std::endl;
    std::cin >> file_name;

    std::ofstream my_file;
    my_file.open (file_name);

    
    for (int i = 0; i < vector_size; i++)
    {
        my_file << (*p)[i] << "\n";
    }
    

    my_file.close();

    return 0;
}


int load_vector(std::vector<std::string>* p)
{
    (*p).clear();

    std::string file_name;
    std::ifstream my_file;
    std::string line;

    std::cout << "Please input the name of the file you wish to load: " << std::endl;
    std::cin >> file_name;

    my_file.open(file_name);

    while (std::getline(my_file, line))
    {
        (*p).push_back(line);
    }

    my_file.close();

    return 0;
}
