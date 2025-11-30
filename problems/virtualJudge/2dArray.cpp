#include <iostream>

int32_t main(int argc, char* argv[])
{
    int maxx = -63,arr[6][6], sum{};
    for(auto i = 0; i < 6; ++i )
    {
        for(auto j = 0; j < 6; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    for(auto i = 1; i < 5; ++i )
    {
        for(auto j = 1; j < 5; ++j)
        {
            sum = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] +
            arr[i][j] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            maxx = std::max(maxx,sum);
        }
    }
    std::cout << maxx << std::endl;
    return 0;
}
