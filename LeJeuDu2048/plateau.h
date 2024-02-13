/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Plateau.h
 * Author: cmainfray
 *
 * Created on 5 février 2024, 14:00
 */

#ifndef PLATEAU_H
#define PLATEAU_H
#include <iostream>
#include <iomanip>

#include "jeu2048.h"

using namespace std;

class Plateau
{
public:
    Plateau();
    void Afficher();
    bool JouerCoup();
private:
    int nbCoups;
    int score;
    Jeu2048 leJeu;
};

#endif /* PLATEAU_H */

