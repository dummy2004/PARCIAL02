#include "Ejercicio02.h"

int Ejercicio02::countStudents(std::vector<char>* students, std::vector<char>* sandwiches)
{
    int studentsCount = students->size();
    int sandwichesCount = sandwiches->size();
    int studentIndex = 0;
    int sandwichIndex = 0;
    int count = 0;

    while (studentIndex < studentsCount && sandwichIndex < sandwichesCount) {
        if ((*students)[studentIndex] == (*sandwiches)[sandwichIndex]) {
            studentIndex++;
            sandwichIndex++;
        }
        else {
            studentIndex++;
            count++;
        }
    }

    count += studentsCount - studentIndex;
    return count;
}

