#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, M, news;
    cin >> N >> news;
    int status[N];
    string name[N];
    for (int i = 0; i < N; i++){
        cin >> name[i] >> status[i];
    }
    cin >> M;

    int j = 0;
    for (int day = 1; day < M; day++){
        if (news == 0){
            if (status[j] == 0){
                news = 1;
            }
            int k = 1;
            while(status[(j + k) % N] >= 2){
                k++;
            }
            if (j != (j + k) % N ){ //обработка случая, когда человек сам с собой нк общается
                status[j % N] += 1;
            }
            j = (j + k) % N;

        }
        if (news == 1){
            if (status[j] == 0){
                news = 0;
            }
            int k = 1;
            while(status[(j + k) % N] >= 2){
                k++;
            }
            j = (j + k) % N;
        }
    }

    for (int l = 0; l < N; l++){
        if (status[l] < 2){
            cout << name[l]<< " " << status[l] << endl;
        }
    }

    return 0;
}
