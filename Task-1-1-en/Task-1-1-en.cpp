#include <iostream>
#include <tchar.h>
#include <locale>

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int n; // number of blocks
    unsigned int k; // number of blocks for 1 tower
    unsigned int t; // Maximum number of towers
    unsigned int b; // Number of blocks is used
    // Input data
    std::cout << "Enter the number of blocks: ";
    std::cin >> n;
    std::cout << "Enter the number of blocks for 1 tower: ";
    std::cin >> k;
    t = n / k; // Maximum number of towers
    b = t * k;  // Number of blocks is used
    /*Display the information*/
    std::cout << "From " << n << " blocks, you can build a maximum of "
              <<  t << " towers\r\n";
    std::cout << "This will take " << b << " blocks.\r\n";
    std::cin.ignore(); // Clear input buffer
    std::cin.get(); // Delay output until key "Enter" not pressed
    return 0;
}
