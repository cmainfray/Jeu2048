/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   gestionJoueurs.h
 * Author: cmainfray
 *
 * Created on 7 février 2024, 09:22
 */

#ifndef GESTIONJOUEURS_H
#define GESTIONJOUEURS_H

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

#include "joueur.h"
#include "menu.h"

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

    int RechercherJoueur(Joueur * _tab, const int _nb, const string &_pseudo);


#ifdef __cplusplus
}
#endif

#endif /* GESTIONJOUEURS_H */

