#include <iostream>
#include <vector>

using namespace std;

float mean(const std::vector<float>&vec)
{
    float s = 0;
    for(int i = 0; i < vec.size(); ++i) s+=vec[i];
    return s/vec.size();
}

int main()
{
    vector<float> vec(6);
    for(int i = 0; i < 6; ++i)
    {
        cin >> vec[i];
    }
    cout << mean(vec);
    return 0;
}
