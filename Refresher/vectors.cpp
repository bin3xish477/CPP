#include <iostream>
#include <vector>

int main() {
    std::vector<int> test_scores {96, 58, 87, 78, 99};

    // Retrieving element from vector using an index number
    std::cout << "Value at index 0: " << test_scores.at(0) << "\n";

    // Adding elements to vector
    test_scores.push_back(100);
    test_scores.push_back(50);

    for(int i=0; i<test_scores.size(); ++i)
    {
        std::cout << test_scores[i] << " ";
    }
    std::cout << "\n";

    // 5 elements all initialized to 'a'
    std::vector<char> a_vector (5, 'a');

    for(int i=0; i<a_vector.size(); ++i)
    {
        std::cout << a_vector[i] << " ";
    }
    std::cout << "\n";

    std::vector<std::string> strings_vec {"one", "two", "three"};

    std::cout << "Size of strings_vec: " << strings_vec.size() << "\n";
    // remove element from end of vector
    strings_vec.pop_back();
    std::cout << "Size aftering popping element from vector: " << strings_vec.size() << "\n";

    return 0;
}
