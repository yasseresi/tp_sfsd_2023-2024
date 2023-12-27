#include <stdio.h>

#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
#include "variable_globale.h"
#include "machine_abtraite.h"
#include "affichage.h"


int main() {
    srand(time(NULL));
    int min = 1;
    tenrg tenrg1;
    FILE *fich, *Fi, *F, *fic, *fichier;
    FILE *s;
    int i, j;

//------------chargement initial-------------------------------

            Ouvrire(&fichier, "PERSONNEL-ANP_DZ.dat", 'N');
            Ouvrire(&fich, "MILITAIRE_INDEX.idx", 'N');
            Ouvrire(&Fi, "FORCE_ARME_INDEX.idx", 'N');
            Ouvrire(&F, "GRADE_INDEX.idx", 'N');
            Lecture = 0;
            Ecriture = 0;
            chargementInitial(fichier, 100000);
            printf("le cout de chargement initial est %d lecture et %d ecriture\n", Lecture, Ecriture);
            printfFichier("PERSONNEL-ANP_DZ.dat");
            printf("test\n");
            Fermer(fichier);
            Sauvegarde_IndexM(fich, indexM);
            Sauvegarde_IndexM(Fi, indexF);
            Sauvegarde_IndexM(F, indexG);
            Fermer(fich);
            Fermer(Fi);
            Fermer(F);
            printGradeIndex("GRADE_INDEX.idx");
            printMilitaireIndex("MILITAIRE_INDEX.idx");
            printForceIndex("FORCE_ARME_INDEX.idx");

  //--------------------chafrgement d'index--------------------------

//                Chargement_index(&indexP);
//            affichIndexPrimaire(indexP);

 //---------------------sauvgard d'indx------------------------------

//            Sauvegarde_Index(indexP);

//---------------------recherche par matricule-----------------------

//            printfFichier("PERSONNEL-ANP_DZ.dat");
//    Ouvrire(&fichier, "PERSONNEL-ANP_DZ.dat", 'A');
//    Ouvrire(&fich, "MILITAIRE_INDEX.idx", 'A');
//    Chargement_index(&indexP);
//    Chargement_indexM(fich, &indexM);
//            Lecture = 0;
//            Ecriture = 0;
//            Rech_Militaires(320697, &i, &j, fichier);
//            printf("le cout de recherche par matricule est %d lecture et %d ecriture\n", Lecture, Ecriture);
//    Fermer(fichier);
//    Fermer(fich);


//----------------------insertion d'un enregistrement----------------

//    Ouvrire(&fichier, "PERSONNEL-ANP_DZ.dat", 'A');
//    Ouvrire(&fich, "MILITAIRE_INDEX.idx", 'A');
//    Ouvrire(&Fi, "FORCE_ARME_INDEX.idx", 'A');
//    Ouvrire(&F, "GRADE_INDEX.idx", 'A');
//    Chargement_indexM(fich, &indexM);
//    Chargement_indexM(Fi, &indexF);
//    Chargement_indexM(F, &indexG);
//    Lecture = 0;
//    Ecriture = 0;
//    Chargement_index(&indexP);
//    tenrg1 = creerEnrg();
//    Lecture = 0;Ecriture = 0;
//    insertion(fichier, tenrg1, &indexP, &indexM, &indexF, &indexG);
//    printf("le cout de insertion est %d lecture et %d ecriture\n", Lecture, Ecriture);
//    affichIndexPrimaire(indexP);
//    affichIndexMilitaire(indexM);
//    printf("le matricule %d\n", tenrg1.Matricule);
//    Sauvegarde_IndexM(fich, indexM);
//    Sauvegarde_IndexM(Fi, indexF);
//    Sauvegarde_IndexM(F, indexG);
//    Sauvegarde_Index(indexP);
//    Fermer(fichier);
//    Fermer(fich);
//    Fermer(Fi);
//    Fermer(F);



//----------------------suppression d'un enregistrement----------------

//    Chargement_index(&indexP);
//    Ouvrire(&fic,"PERSONNEL-ANP_DZ.dat",'A');
//    Ouvrire(&Fi,"MILITAIRE_INDEX.idx",'A');
//    Ouvrire(&fich,"FORCE_ARME_INDEX.idx",'A');
//    Ouvrire(&F,"GRADE_INDEX.idx",'A');
//            Chargement_indexM(Fi,&indexM);
//    Chargement_indexM(fich,&indexF);
//    Chargement_indexM(F,&indexG);
//    printf("***************avant*********************\n");
//    printfFichier("PERSONNEL-ANP_DZ.dat");
//    suppersionEnrg(fic,999998,&indexP);
//    Sauvegarde_Index(indexP);
//    Sauvegarde_IndexM(Fi,indexM);
//    Sauvegarde_IndexM(fich,indexF);
//    Sauvegarde_IndexM(F,indexG);
//    Fermer(fic);
//    Fermer(Fi);
//    Fermer(fich);
//    Fermer(F);
//    printf("***************apres*********************\n");
//    printfFichier("PERSONNEL-ANP_DZ.dat");
//    printf("***************apres*********************\n");
//    printIndexPrimaire("MATRICULE_INDEX.idx");
//    printf("******************************************\n");
//    printMilitaireIndex("MILITAIRE_INDEX.idx");
//    printf("***************apres*********************\n");
//    printForceIndex("FORCE_ARME_INDEX.idx");
//    printf("***************apres*********************\n");
//    printGradeIndex("GRADE_INDEX.idx");

//----------------------modification d'une region militaire----------------

//            Chargement_index(&indexP);
//            printfFichier("PERSONNEL-ANP_DZ.dat");
//            printf("******************************************\n");
//            modifRegionMelitaire(480199,"1RM-Blida");
//            printfFichier("PERSONNEL-ANP_DZ.dat");
//            printf("******************************************\n");

//----------------------affichage des militaires d'une region militaire dans un intervalle donne----------------

//        Chargement_index(&indexP);
//        affichMilitaireIntervalle(400000, 500000);

//-----------------------affichage des militaires dans un intervalle d'age d'une region militaire donne----------------

//    Ouvrire(&Fi,"MILITAIRE_INDEX.idx",'A');
//            Chargement_indexM(Fi,&indexM);
//        Chargement_index(&indexP);
//        rechIntervaleAgeRegion("5RM-Constantine", 17, 18);


// -------------------------suppression d'une force arme-----------------------
//        supprimerForceArme("Marine_nationale");
//        printIndexPrimaire("MATRICULE_INDEX.idx");
//        printf("***************apres*********************\n");
//        printForceIndex("FORCE_ARME_INDEX.idx");



//------------------------affichage des militaires d'un grade donne-----------------------


//        Ouvrire(&F,"GRADE_INDEX.idx",'A');
//        Chargement_indexM(F,&indexG);
//        Chargement_index(&indexP);
//        afficherMilitaireParGrade("Officiers_generaux");
//        Fermer(F);


//------------------------fragmentation-----------------------

//        Ouvrire(&fich, "PERSONNEL-ANP_DZ.dat", 'A');
//        Ouvrire(&Fi,"MILITAIRE_INDEX.idx",'A');
//        Chargement_index(&indexP);
//        Chargement_indexM(Fi,&indexM);
//        Fragmentation(fich);
//        Fermer(fich);
//        Fermer(Fi);
//        printf("***************apres*********************\n");
//        printfFichier("PERSONNEL-ANP_DZ.dat(1RM-Blida)");
//        printf("***************apres*********************\n");
//        printfFichier("PERSONNEL-ANP_DZ.dat(2RM-Oran)");
//        printf("***************apres*********************\n");
//        printfFichier("PERSONNEL-ANP_DZ.dat(3RM-Bechar)");
//        printf("***************apres*********************\n");
//
//        printfFichier("PERSONNEL-ANP_DZ.dat(4RM-Ouargla)");
//        printf("***************apres*********************\n");
//
//        printfFichier("PERSONNEL-ANP_DZ.dat(5RM-Constantine)");
//        printf("***************apres*********************\n");
//
//        printfFichier("PERSONNEL-ANP_DZ.dat(6RM-Tamanrasset)");
//        printf("***************apres*********************\n");



    return 0;
}