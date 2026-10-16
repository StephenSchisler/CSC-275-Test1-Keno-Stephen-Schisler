//
// Created by bob black on 10/16/2026.
//

#ifndef CSC_275_TEST1_KENO_STEPHEN_SCHISLER_KENONUMBERS_H
#define CSC_275_TEST1_KENO_STEPHEN_SCHISLER_KENONUMBERS_H
#include <vector>


class KenoNumbers {
    private:
        std::vector<int> m_numbers;
    public:
        void generateNumbers();
        std::vector<int> getKenoNumbers();
        void printKenoNumbers();
        void clearKenoNumbers();
};


#endif //CSC_275_TEST1_KENO_STEPHEN_SCHISLER_KENONUMBERS_H
