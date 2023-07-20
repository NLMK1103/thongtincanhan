#include <iostream>
using namespace std;

int main()
{
    string fullname = "Nguyen Le Minh Khoa";
    std::cout << "Ho va ten: " << fullname << '\n';
    int dayofbirth{ 11032003 };
    std::cout << "Ngay thang nam sinh: " << dayofbirth << '\n';
    string career = "Frontend dev";
    std::cout << "Nghe nghiep: " << career << '\n';
    string decription = "Gioi ve see plus plus";
    std::cout << "Mo ta: " << decription << '\n';
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Enter your fullname: \n";
    string fullname{};
    std::cin >> fullname;
    
    
    std::cout << "Enter your dayofbirth: \n";
    int dayofbirth{};
    std::cin >> dayofbirth;
    
    
    std::cout << "Enter your career: \n";
    string career{};
    std::cin >> career;
    
    
    std::cout << "Enter your description: \n";
    string description{};
    std::cin >> description;
    
    std::cout >> "My fullname is: "  << fullname << '\n';
    std::cout >> "My dayofbirth is: " << dayofbirth << '\n';
    std::cout >> "My career is: " << career << '\n';
    std::cout >> "My description is: " << description << '\n';
    return 0;
}
