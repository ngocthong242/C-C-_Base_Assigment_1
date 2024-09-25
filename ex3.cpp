#include <iostream>
int sum(int a, int b)
{
    return a + b;
}
int diff(int a, int b)
{
    return a - b;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "Sum";
    std::cout << "Sum: (a,b) = " << sum(a, b) << std::endl;
    std::cout << "Diff: (a,b) = " << diff(a, b) << std::endl;
}