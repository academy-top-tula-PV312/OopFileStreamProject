#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <sstream>

class Employee
{
    std::string name;
    int age;

public:
    Employee(std::string name = "", int age = 0)
        : name{ name }, age{ age } {}


    std::string& Name() { return name; };
    int& Age() { return age; };
};

int main()
{
    //Employee employee; //("Bobby", 35);

    //std::fstream file("employees.dat", std::ios::binary | std::ios::out);

    
    /*file << employee.Name();
    file << employee.Age();*/

    /*std::fstream file("employees.dat", std::ios::binary | std::ios::in);
    Employee employee;

    file >> employee.Name();
    file >> employee.Age();

    std::cout << employee.Name() << " " << employee.Age() << "\n";

    file.close();*/

    //FILE* file = fopen("employee.dat", "rb");

    ////fwrite(&employee, sizeof(Employee), 1, file);
    //fread(&employee, sizeof(Employee), 1, file);

    //std::cout << employee.Name() << " " << employee.Age() << "\n";
    //
    //fclose(file);

    srand(time(nullptr));
    int number;

    //int* array = new int[10];
    std::ofstream ofile("numbers.dat", std::ios::out);
    for (int i{}; i < 10; i++)
    {
        number = rand() % 100;
        ofile << number;
        std::cout << number << " ";
    }
    std::cout << "\n\n";
    ofile.close();


    std::ifstream ifile("numbers.dat", std::ios::in);
    while (!ifile.eof())
    {
        ifile >> number;
        std::cout << number << " ";
    }
    ifile.close();
}
