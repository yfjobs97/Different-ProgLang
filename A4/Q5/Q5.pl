color(red).
color(green).
color(blue).
%color(yellow). %Not required


adjColorAssign(C1,C2) :- color(C1), color(C2), C1 \= C2.

regionColor(Wise,Denton,Collin,Hunt,Parker,Tarrant,Dallas,Kaufman,Rockwall,VanZandt,Hood,Johnson,Ellis,Navarro):- adjColorAssign(Wise,Denton),adjColorAssign(Wise,Tarrant),adjColorAssign(Wise,Parker),adjColorAssign(Denton,Tarrant),adjColorAssign(Denton,Dallas),adjColorAssign(Denton,Collin),adjColorAssign(Collin,Dallas),adjColorAssign(Collin,Rockwall),adjColorAssign(Collin,Hunt),adjColorAssign(Hunt,Rockwall),adjColorAssign(Hunt,Kaufman),adjColorAssign(Hunt,VanZandt),adjColorAssign(Parker,Tarrant),adjColorAssign(Parker,Johnson),adjColorAssign(Parker,Hood),adjColorAssign(Tarrant,Dallas),adjColorAssign(Tarrant,Ellis),adjColorAssign(Tarrant,Johnson),adjColorAssign(Dallas,Rockwall),adjColorAssign(Dallas,Kaufman),adjColorAssign(Dallas,Ellis),adjColorAssign(Kaufman,Ellis),adjColorAssign(Kaufman,Rockwall),adjColorAssign(Kaufman,Hunt),adjColorAssign(Kaufman,VanZandt),adjColorAssign(Hood,Johnson),adjColorAssign(Johnson,Ellis),adjColorAssign(Ellis,Navarro).

%The county names are used as variable to hold color.
%As the color is filled in adjColorAssign(), it always ensures adjacent counties has different color