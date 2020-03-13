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
                                    if(c=='\n')//如果等于换行符,说明输入完毕
                                                break;
                                                    }
                                                        for(it = vec.begin();it != vec.end();it++)
                                                                if(*it==250){
                                                                            cout << it-vec.begin() + 1 << endl;//数组能用地址减地址,set等容器不能适用!!!!!
                                                                                        break;
                                                                                                }

                                                                                                    return 0;
                                                                                                    }