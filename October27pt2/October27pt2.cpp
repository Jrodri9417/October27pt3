// October27pt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

void demoPintingListOfGrades()
{
    std::vector<int> listOfGrades =
    {
      9,
      9,
      100,
      79,
      0,
      46

    };

        for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
        {
            std::cout << listOfGrades[locationInArray] << " ";
        }
        std::cout << std::endl;
}

std::vector<std::string> makeToDoList()
{
    std::vector<std::string>toDoList;

    std::string continueOrNot = "yes";


    while (continueOrNot != "no")
    {

    std::cout << "Enter a thing on your to do list" << std::endl;

    std::string newTask;
    std::getline(std::cin, newTask);

    toDoList.push_back(newTask);

    std::cout << "Are you done adding tasks (yes/no)?" << std::endl;
    std::getline(std::cin, continueOrNot);
    }

    return toDoList;
}

void printThetoDoList(const std::vector<std::string>theList)
{
    for (int index = 0; index < theList.size(); ++index)
    {
        std::cout << "Item number " << index + 1 << " is: " << theList[index] << std::endl;
    }
}

int main()
{
    //demoPtintingListOfGrades();
    auto toDoList = makeToDoList();

    printThetoDoList(toDoList);

    return 0;
}


