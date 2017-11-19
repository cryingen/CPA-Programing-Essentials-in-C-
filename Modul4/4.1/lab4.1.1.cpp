#include <iostream>
#include <string>

int main()
{
    int courses;
    double overall = 0;
    std::cout << "Input number of courses: ";
    std::cin >> courses;
    for(int i = 0; i < courses; i++)
    {   
        int grades;
        double sum = 0;
        std::cout << "Input number of grades of " << i + 1 << " course";
        std::cin >> grades;
        for (int j = 0; j < grades; j++)
        {
            int grade;
            std::cout << "Input " << j + 1 << " grade: ";
            std::cin >> grade;
            sum += grade;
        }
        std::cout << "Final grade for the course: " << sum/grades << std::endl;
        overall += sum/grades;
    }
    std::cout << "Overall final score: " << overall/courses << std::endl;
    return 0;
}
