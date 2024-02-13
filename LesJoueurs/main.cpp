/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: cmainfray
 *
 * Created on 6 février 2024, 15:06
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

#include "joueur.h"
#include "menu.h"
#include "gestionJoueurs.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Menu leMenu("Menu.txt");
    int choix;
    string pseudo;
    int score;
    int duree;
    Joueur tabJoueurs[NB_MAX_JOUEURS];
    int nbJoueurs = 0;
    do {
        choix = leMenu.AfficherEtAttendreChoix();
        switch (choix) {
            case Joueur::AJOUTER:
            {
                int pos;
                cout << "Pseudo score durée :";
                cin >> pseudo >> score >> duree;
                cout << pos << endl; 
                if (nbJoueurs > 0) {
                    pos = RechercherJoueur(tabJoueurs, nbJoueurs, pseudo);
                    
                    if (pos >= 0)
                        tabJoueurs[pos].Actualiser(score, duree);
                    else
                        tabJoueurs[nbJoueurs++] = Joueur(pseudo, score, duree);
                    cout << nbJoueurs << endl; 
                } else{
                    tabJoueurs[nbJoueurs++] = Joueur(pseudo, score, duree);
                     cout << nbJoueurs << endl; 
                }

                //Menu::EffacerEcran();
                break;
            }
            case Joueur::VISUALISER:
                Menu::EffacerEcran();
                cout << "+" << setfill('-') << setw(13) << "+" << setw(7) << "+" << setw(7) << "+" << setfill(' ') << endl;
                for (int i = 0; i < nbJoueurs; i++) {
                    tabJoueurs[i].ObtenirInfo(pseudo, score, duree);
                    cout << "|" << left << setw(12) << pseudo << "|"
                            << right << setw(5) << score << " " << "|"
                            << setw(5) << duree << " " << "|" << endl;
                }
                cout << "+" << setfill('-') << setw(13) << "+" << setw(7) << "+" << setw(7) << "+" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case Joueur::CHARGER:
                break;
            case Joueur::SAUVEGARDER:
                break;
        }
    } while (choix != Joueur::QUITTER);
    return 0;
}