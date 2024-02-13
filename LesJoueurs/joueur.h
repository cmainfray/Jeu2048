/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Joueur.h
 * Author: cmainfray
 *
 * Created on 6 février 2024, 15:17
 */

#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <time.h>
#include <string.h>
#include "menu.h"
#define NB_MAX_JOUEURS 10

using namespace std;

class Joueur {
public:
    enum OPTIONS{
        AJOUTER = 1,
        VISUALISER,
        CHARGER,
        SAUVEGARDER,
        QUITTER
    };
    
    Joueur(string _pseudo,int _score,int _duree);
    Joueur();
    void Actualiser(int _nouveauScore,int _duree);
    void ObtenirInfo(string &_pseudo,int &_score, int &_duree );
    bool operator<(const Joueur &_autre);
    bool operator!=(const string &_pseudo);
private:
    string pseudo;
    int score;
    int duree;
};

#endif /* JOUEUR_H */

