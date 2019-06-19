#pragma once
class Menu
{
    public:
        static void runProgram();
    private:
        static void printOptions();
        static int getUserOption();
        static void runBase10ToBaseN();
        static void runBaseNToBase10();
        static void runBaseAToBaseB();
        static char promptToContinue();
};
