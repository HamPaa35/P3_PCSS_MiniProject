//
// Created by Azoz1 on 12-11-2018.
//

#ifndef P3_PCSS_MINI_PROJECT_PLAYER_H
#define P3_PCSS_MINI_PROJECT_PLAYER_H


class Player {

private:
    int physical; // Value from 0-10
    int shooting; // Value from 0-10
    int defence; // Value from 0-10
    int motivation; // 0-10
    int goals;
public:
    Player();
    Player(string nm, int age, int ph, int sh, int df, int mv);
    int getGoals ();

    void addGoal();
    int shootsOnGoal();
    int getPhysical();
    int getMotivation();

};


#endif //P3_PCSS_MINI_PROJECT_PLAYER_H
