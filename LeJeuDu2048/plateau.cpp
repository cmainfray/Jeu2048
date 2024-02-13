/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Plateau.cpp
 * Author: cmainfray
 * 
 * Created on 5 février 2024, 14:00
 */

#include "plateau.h"

Plateau::Plateau() :
nbCoups(0),
score(0) {
}

void Plateau::Afficher() {
    int laGrille[TAILLE][TAILLE];
    system("clear");
    leJeu.ObtenirGrille(laGrille);
    cout << "| Score : " << score << " | Nombre de coups : " << nbCoups << " |" << endl;
    cout << endl;
    for (int ligne = 0; ligne < 4; ligne++) {
        cout << " +";
        for (int indice = 0; indice < 4; indice++) {
            cout << setw(7) << setfill('-') << '+';
            cout << "|" << setfill(' ') << setw(4) << "|" << setfill(' ') << setw(4) << "|" << setfill(' ') << setw(4) << "|" << endl;
        }
    }
    cout << setw(7) << setfill('-') << '+';
    cout << "F pour sortir du jeu" << endl;
    cout << "Votre déplacment : H (^), B(v), G(<-), D(->) :" << endl;
}



