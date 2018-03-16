#include <iostream>
#include <vector>
using namespace std;

void display_vector(std::vector<int>);
std::vector<int> swap(std::vector<int> v,int i,int j);

int main() {
    std::vector<int> list (0);
    int n = -1;

    while(n!=0){
        cin >> n;
        if (n!=0) list.push_back(n);
    }
    display_vector(list);
    auto size = list.size();

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            list = (list[i]<list[j]) ? swap(list,i,j) : list;
        }
    }
    display_vector(list);
    return 0;
}

std::vector<int> swap(std::vector<int> v,int i,int j) {
    int t = v[i];
    v[i] = v[j];
    v[j] = t;
    return v;
}

void display_vector(std::vector<int> v) {
    cout << "[";
    auto n = v.size();
    for (int i = 0; i < n; ++i) {
        if(i==n-1) cout << v[i] << "]";
        else cout << v[i] << ", ";
    }
}