#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s((std::istreambuf_iterator<char>(std::cin)), std::istreambuf_iterator<char>());
    std::vector<std::pair<std::string, std::string>> a = {
        {"Apple","MAI MAI MAI!"},
        {"iPhone","MAI MAI MAI!"},
        {"iPod","MAI MAI MAI!"},
        {"iPad","MAI MAI MAI!"},
        {"Sony","SONY DAFA IS GOOD!"}
    };
    for (size_t i = 0; i < s.size();) {
        bool b = false;
        for (auto& p : a) {
            const std::string& k = p.first;
            if (i + k.size() <= s.size() && s.compare(i, k.size(), k) == 0) {
                std::cout << p.second << "\n";
                i += k.size();
                b = true;
                break;
            }
        }
        if (!b) ++i;
    }
    return 0;
}