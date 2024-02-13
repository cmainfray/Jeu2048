/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Jeu2048.h
 * Author: cmainfray
 *
 * Created on 5 février 2024, 14:00
 */

#ifndef JEU2048_H
#define JEU2048_H
#define TAILLE 4


#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <time.h>

using namespace std; 

class Jeu2048 {
public:
    enum ETATS_DU_JEU{
        EN_COURS = 1,
        PERDU,
        GAGNE
    };
    Jeu2048();
    void PlacerNouvelleTuile();
    bool Calculer(char _direction);
    void Deplacer(char _direction);
    int CalculerScore();
    void ObtenirGrille(int _grille[][TAILLE]);
    void RechercherPartie(ETATS_DU_JEU);
private:
    int grille[4][4];
};

#endif /* JEU2048_H */

