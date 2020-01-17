translator([], []).
translator([H|T], [NewH|NewT]):-
             translation(H, NewH),
             translator(T,NewT).
translation(i, je) :- !.
translation(like, adore) :- !.
translation(cake, gatuae) :- !.
translation(you, vous) :- !.
translation(hate, haine) :- !.
translation(pie, tarte) :- !.
translation(we, nous) :- !.
translation(are, sont) :- !.
translation(passing, depassment) :- !.
translation(X, X).
