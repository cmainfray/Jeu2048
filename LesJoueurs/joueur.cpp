/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Joueur.cpp
 * Author: cmainfray
 * 
 * Created on 6 février 2024, 15:17
 */

#include "joueur.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include "menu.h"
using namespace std;

Joueur::Joueur(string _pseudo,int _score,int _duree):
pseudo(_pseudo),score(_score), duree(_duree)
{
}

Joueur::Joueur():
score(0),duree(0)
{
    pseudo.clear();
}

void Joueur::Actualiser(int _nouveauScore,int _duree){
    if(score < _nouveauScore){
        score = _nouveauScore;
    }
        duree += _duree;
}
void Joueur::ObtenirInfo(string _pseudo,int _score, int _duree ){
    _pseudo = pseudo;
    _score = score;
    _duree = duree;
}
bool Joueur::operator<(const Joueur &_autre){
    
   //return (score < _autre.score); autre méthode possible
    bool resultat = false;
      if(score < _autre.score)
          resultat = true;
    return(resultat);
    
        
}
bool Joueur::operator!=(const string &_pseudo){
    return(pseudo != _pseudo);
}


