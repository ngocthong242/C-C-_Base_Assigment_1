#include<iostream>
void swap(int &x, int &y){
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
    return 0;
}