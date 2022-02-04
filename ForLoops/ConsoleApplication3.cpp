#include <iostream>

int main()
{
    int a[100];
    int i, n, large;
    std::cout << "How many numbers?" << std::endl;
    std::cin >> n;

    for (i = 0; i <= n - 1; ++i)
    {
        std::cin >> a[i];
    }
    large = a[0];
    for (i = 0; i <= n - 1; ++i)
    {
        if (large < a[i])
            large = a[i];

    }
    std::cout << "largest value=" << large;
    std::cin.get();
}