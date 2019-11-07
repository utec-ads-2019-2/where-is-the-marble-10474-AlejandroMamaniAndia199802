#include <iostream>
#include <set>
using namespace std;

int main()
{
    for (int k = 1; ; k++) {
        int q, n;
        cin >> n >> q;
        if (!n && !q)
            break;
        multiset<int> marbles;
        int i = 0;
        while (i < n)
        {
            int value;
            cin >>value;
            marbles.insert(value);
            i++;
        }
        cout << "#CASE " << k << ":\n";
        int j = 0;
        while ( j < q )
        {
            int value;
            cin >> value;
            pair<multiset<int>::iterator, multiset<int>::iterator> out = marbles.equal_range(value);
            if (out.first == marbles.end() || *out.first != value)
                cout << value << " not found\n";
            else{
                cout << value << " found at " << distance(marbles.begin(), out.first) + 1 << endl;
            }
            j++;
        }
    }
    return 0;
}