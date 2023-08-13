nelements(L,Q):- extract(L,A), list_length(A,Q).
extract(X,[X]) :- \+ is_list(X).
extract([],[]).
extract([X|Xs],Zs) :- extract(X,Y), extract(Xs,Ys), append(Y,Ys,Zs).
list_length([],0).
list_length([_|Tail],Len):- list_length(Tail,Len1),Len is Len1 + 1.
append([],List,List).
append([Head | List_1], List_2, [Head | List_3]):-
    append(List_1, List_2, List_3).
%%
 % first extract nested elements from nested list and form one list with
 % the same element, then find the length of the big list.
 % 
