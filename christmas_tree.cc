#include <iostream>
int main() {
    int height;
    std::cout << "Enter the height of the Christmas tree: ";
    std::cin >> height;
    for (int i = 1; i<= height; i++ ){
        for (int s = 0; s < height - i; s++) {
        }
    
    for (int star = 0; star < ( 2 * i -1); star ++){
        std::cout << "*";
    }
}
std::cout << "\n";
for (int t = 0; t < 3; t++) {
    for (int s = 0; s < height - 1; s++) {
        std::cout << " ";
    }
    std::cout << "#\n";
}
return 0 ;
}