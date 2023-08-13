:-discontiguous male/1.
:-discontiguous female/1.
:-discontiguous father/2.
:-discontiguous mother/2.

male(fredTrump).
female(maryAnneTrump).

female(maryanneTrumpBarry).
male(fredTrumpJr).
female(elizabethTrumpGrau).
male(robertTrump).
male(donaldTrump).

female(ivanaTrump).
female(marlaMaples).
female(melaniaTrump).

male(donaldTrumpJr).
female(vanessaTrump).
male(barronTrump).
female(ivankaTrump).
male(jaredKushner).
male(ericTrump).
female(laraYunaska).
female(tiffanyTrump).

/** marriage(M,F)
 */
married(fredTrump, maryAnneTrump).
married(donaldTrump, melaniaTrump).
married(donaldTrumpJr, vanessaTrump).
married(jaredKushner, ivankaTrump).
married(ericTrump, laraYunaska).
divorced(donaldTrump, ivanaTrump).
divorced(donaldTrump, marlaMaples).

/** Children
 */
father(maryanneTrumpBarry,fredTrump).
mother(maryanneTrumpBarry,maryAnneTrump).

father(fredTrumpJr,fredTrump).
mother(fredTrumpJr,maryAnneTrump).

father(elizabethTrumpGrau,fredTrump).
mother(elizabethTrumpGrau,maryAnneTrump)
.
father(robertTrump,fredTrump).
mother(robertTrump,maryAnneTrump).

father(donaldTrump,fredTrump).
mother(donaldTrump,maryAnneTrump).


father(donaldTrumpJr,donaldTrump).
mother(donaldTrumpJr,ivanaTrump).

father(ivankaTrump,donaldTrump).
mother(ivankaTrump,ivanaTrump).

father(ericTrump,donaldTrump).
mother(ericTrump,ivanaTrump).

father(barronTrump,donaldTrump).
mother(barronTrump,melaniaTrump).

father(tiffanyTrump,donaldTrump).
mother(tiffanyTrump,marlaMaples).


father(kaiMadison,donaldTrumpJr).
mother(kaiMadison,vanessaTrump).
father(donaldIII,donaldTrumpJr).
mother(donaldIII,vanessaTrump).
father(chloeSophia,donaldTrumpJr).
mother(chloeSophia,vanessaTrump).
father(tristanMilos,donaldTrumpJr).
mother(tristanMilos,vanessaTrump).
father(spencerFrederick,donaldTrumpJr).
mother(spencerFrederick,vanessaTrump).

father(arabellaRose,jaredKushner).
mother(arabellaRose,ivankaTrump).
father(josephFrederick,jaredKushner).
mother(josephFrederick,ivankaTrump).
father(theodoreJames,jaredKushner).
mother(theodoreJames,ivankaTrump).

%%rules
%Great grandfather is defined as father of grandpas from father's side (2 of them), and father of grandpas from mother's side (2 of them)
%sister/brother is defined as female/male siblings with same pair of parents
%half sister/brother is defined as female/male siblings who are children of same father but different mother, or siblings who are chldren of same mother but different father.

stepMother(A,B):-father(A,X), married(X,B), female(B).
spouse(A,B):-married(A,B),female(B).
exSpouse(A,B):-divorced(A,B),female(B).
sister(A,B):-female(B),((father(A,X),father(B,X)),(mother(A,Y), mother(B,Y))),A\=B.
halfSister(A,B):-female(B),((father(A,X),father(B,X),mother(A,Y),mother(B,Z),Y\=Z);(mother(A,X),mother(B,X),father(A,Y),father(B,Z),Y\=Z)),A\=B.
brother(A,B):-male(B),((father(A,X),father(B,X)),(mother(A,Y), mother(B,Y))),A\=B.
halfBrother(A,B):-male(B),((father(A,X),father(B,X),mother(A,Y),mother(B,Z),Y\=Z);(mother(A,X),mother(B,X),father(A,Y),father(B,Z),Y\=Z)),A\=B.
grandfather(A,B):-male(B),((father(A,X),father(X,B));(mother(A,X),father(X,B))).
grandmother(A,B):-female(B),((mother(A,X),mother(X,B));(father(A,X),mother(X,B))).
greatGrandfather(A,B):-male(B),(father(A,X),father(X,Y),father(Y,B));(father(A,X),mother(X,Y),father(Y,B));(mother(A,X),father(X,Y),father(Y,B));(mother(A,X),mother(X,Y),father(Y,B)).

