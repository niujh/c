

#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vector<int>::iterator it;
    int x;
    char c;
    while(~scanf("%d%c",&x,&c)){
        vec.push_back(x);
        if(c=='\n')
            break;
    }
    for(it = vec.begin();it != vec.end();it++)
        if(*it==250){
            cout << it-vec.begin() + 1 << endl;
            break;
        }

    return 0;
}
1
