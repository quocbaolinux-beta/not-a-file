#include <iostream>

using namespace std;

int max_pyramid_height(int n) {
    int height = 0, total_cubes = 0;

    while (total_cubes + (height + 1) * (height + 2) / 2 <= n) {
        height++;
        total_cubes += height * (height + 1) / 2;
    }

    return height;
}

int main() {
    int n;
    cin >> n;
    cout << max_pyramid_height(n) << endl;
    return 0;
}
