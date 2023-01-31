#include <iostream>
void getSumDiff(int a, int b, int& sum, int& diff)
{
    sum = a+b;
    diff = a-b;
}

int main(void)
{
    int num1, num2;
    std::cin >> num1 >> num2;

    int sum, diff;
    getSumDiff(num1, num2, sum, diff);
    std::cout << "sum:" << sum << std::endl;
    std::cout << "diff:" << diff;
    return 0;
}
