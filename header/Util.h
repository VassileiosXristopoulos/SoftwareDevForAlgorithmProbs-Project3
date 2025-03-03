//
// Created by vassilis on 18/10/2018.
//

#ifndef UTIL_H
#define UTIL_H


#include "Item.h"
#include "recommendation/Coin.h"
#include <map>

struct Config_info{
    int k;
    int lsh_k;
    int lsh_L;
    int w;
    int cube_k;
    int cube_M;
    int cube_probes;
};



class Util {
private:
    static void SetupLexicon();
    static void SetupCoinMap();
public:
    static map<string,float>Lexicon;

    static vector<Coin*>CoinMap;

    static unsigned long amountOfCoins;

    static void Initialize();

    static int my_mod(int x, int y);

    static double EucledianDistance(vector<double> x, vector<double> y);

    static int intVectortoInteger(vector<int> table);

    static vector<int> intToIntVector(int number, int d);

    static unsigned long upper_power_of_two(unsigned long v);

    static void getHammingCloseVectors( int changesLeft, std::vector<int>& str, const int i,
            vector<vector<int>>&res );
    static double cosineDistance(vector<double>x,vector<double>y);
    static double cosineSimilarity(vector<double>&x,vector<double>&y);
    static vector<string> SplitBlanks(string &line);
    static vector<string> SplitCommas(string &line);
    static vector<string> SplitTabs(string &line);
    static Config_info GetConfiguration(string);
    static int safe_atoi(string);
    static string safe_getline(std::ifstream&);
    static vector<int> GetUserChoise(string);
    static void DeleteCoinMap();
};

#endif //UTIL_H
