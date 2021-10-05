#include <iostream>

void mergeAndSort(std::vector<int>& arr1, std::vector<int>& arr2)
{
    size_t n = arr1.size() + ar2.size();
    auto get = [&](size_t i) -> int& { return i < arr1.size() ? arr1[i] : arr2[i - arr1.size()]);
    
    // Selection sort
    size_t r;
    for (size_t i = 0; i < n; ++i)
    {
        r = i;
        for (size_t j = i + 1; j < n; ++j)
        {
            if (get(j) < get(i))
                r = j;
        }
        std::swap(get(r), get(i));
    }
}

int main()
{
    // Input
    size_t n, m;
    std::cout << "Enter size of array1: ";
    std::cin >> n;
    std::cout << "Enter the elements of array1:\n";
    std::vector<int> arr1{ n };
    for (size_t i = 0; i < n; ++i)
        std::cin >> arr1[i];
    
    std::cout << "Enter size of array2: ";
    std::cin >> m;
    std::cout << "Enter the elements of array2:\n";
    std::vector<int> arr2{ m };
    for (size_t i = 0; i < m; ++i)
        std::cin >> arr2[i];
    
    // Process
    mergeAndSort(arr1, arr2);
  
    // Output
    std::cout << "After merging:\n";
    for (const auto& i : arr1)
        std::cout << i << '\n';  
    for (const auto& i : arr2)
        std::cout << i << '\n';
}
  
