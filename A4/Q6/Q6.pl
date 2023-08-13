population(dallas,2600000).
population(denton,850000).
population(collin,1000000).
population(tarrant,2000000).
income(dallas,60000).
income(denton,65000).
income(collin,90000).
income(tarrant,62000).

neighbor(dallas,tarrant).
neighbor(dallas,denton).
neighbor(dallas,collin).

popList([[dallas,2600000],[denton,850000],[collin,1000000],[tarrant, 2000000]]).


smallPop(A,B):- population(A,X), population(B,Y), (X<Y).
smallPopHighin(A,B):- population(A,X),population(B,Y),(X<Y),income(A,W),income(B,Z),(W>Z).
smallPopLowin(A,B):- population(A,X),population(B,Y),(X<Y),income(A,W),income(B,Z),(W<Z).
largestPop(Q):- popList(L), max(L,A), population(Q,A).

max([], R, R).
max([[_,X]|Xs], WK, R):- X >  WK, max(Xs, X, R).
max([[_,X]|Xs], WK, R):- X =< WK, max(Xs, WK, R).
max([[_,X]|Xs], R):- max(Xs, X, R).
% max extract and compare every second second section of each element to
% determine the greatest population. By matching the greatest population
% value with the state, we have the county with greatest population
% output.
%
% max stores the first element at R and replace R whenever a greater
% value found.
