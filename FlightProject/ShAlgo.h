
#ifndef FLIGHTPROJECT_SHALGO_H
#define FLIGHTPROJECT_SHALGO_H
#include <list>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;


class ShAlgo {
    unordered_map<string,int > m_mapOperator;
    vector<string> splitString(string &str) const;
    int getPrecedence(const string &oper,const string &firstStac)const;
public:
    explicit ShAlgo();
    ~ShAlgo();
    queue<string> creatQueue(string &expressions);
};


#endif //FLIGHTPROJECT_SHALGO_H
