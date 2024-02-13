/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Jeu2048.cpp
 * Author: cmainfray
 * 
 * Created on 5 février 2024, 14:00
 */

#include "jeu2048.h"

Jeu2048::Jeu2048()
{
    srand(time(nullptr));
    for(int ligne = 0 ; ligne < 4 ; ligne++)
    {
        for (int colonne = 0 ; colonne < 4 ; colonne++)
        {
            grille[ligne][colonne] = 0;
        }
    }
}
void Jeu2048::PlacerNouvelleTuile(){
    
}
void Jeu2048::ObtenirGrille(int _grille[][TAILLE]){
    
}