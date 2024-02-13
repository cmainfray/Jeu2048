/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "gestionJoueurs.h"

using namespace std;


int RechercherJoueur(Joueur * _tab, const int _nb, const string &_pseudo){
    int i = 0;
    while(_tab[i] != _pseudo && i < _nb){
        i++;
    }
    if (i == _nb)
        i = -1;
    
    return i;
}
void TrierTableauJoueurs(Joueur * _tab, int _score,const int _nb){
    bool tri = false;
    int borne = _nb;
    Joueur sub[_nb];
    while(tri = false){
        tri = true;
        for(int i = 0;i < borne; i++){
            if(_tab[i+1] < _tab[i]){
                sub[i] = _tab[i];
                _tab[i] = _tab[i+1];
                _tab[i+1] = sub[i];
            }
        }
        borne = borne - 1; 
    
    }
}