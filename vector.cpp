#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int a, b;
    cin >> a >> b;

    // Erase single element
    v.erase(v.begin() + (x - 1));

    // Erase range [a, b)
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    // Output size
    cout << v.size() << endl;

    // Output elements
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
