#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, head = 0, tail = 0;
    string s, new_value;
    cin >> N;
    vector<string> value;
    vector<int> next;
    for (int i = 0; i < N; i++){
        cin >> s;
        if (s[0] == '+'){
            new_value = s.erase(0,2);
            value.push_back(new_value);
            next[tail] = ((int)value.size()) - 1;
            tail = next[tail];
        }
        if (s[0] == '*'){
            new_value = s.erase(0,2);
            value.push_back(new_value);
            next[(((int)value.size()) - 1) / 2] = ((int)value.size()) - 1; // тот, за кем будет по очереди привилегированный, скажет, что пр. за ним
            next[((int)value.size()) - 1] = (((int)value.size()) - 1) / 2 + 1; // привилегированный скажет, что за ним тот, кто должен был быть за тем, кто перед пр.

        }
        if (s[0] == '-'){
            //next[index_before] = next[next[index_before]];
            cout << value[next[head]] << endl;
            head = next[head];
        }
    }

    return 0;
}
