edge(c1,c2,4).
edge(c1,c3,10).
edge(c1,c5,2).
edge(c2,c4,6).
edge(c2,c5,1).
edge(c2,c6,1).
edge(c3,c4,1).
edge(c3,c5,2).
edge(c4,c5,8).

check_connected(V1,V2,Len) :- edge(V1,V2,Len).
check_connected(V1,V2,Len) :- edge(V2,V1,Len).

path_taken(V1,V2,Path,Len) :-
       travel_path(V1,V2,[V1],RevPath,Len),
       reverse(RevPath,Path).

travel_path(V1,V2,Visited,[V2|Visited],Len) :-
       check_connected(V1,V2,Len).
travel_path(V1,V2,Visited,Path,Len) :-
       check_connected(V1,Vnext, LenNext),
       Vnext \== V2,
       \+member(Vnext,Visited),
       travel_path(Vnext,V2,[Vnext|Visited],Path,Len1),
       Len is LenNext+Len1.

shortest_path(V1,V2,Path,Length) :-
   setof([Path,Length], path_taken(V1, V2, Path, Length), PathSet),
   sort(2, @=<,PathSet, SortedList),
   SortedList=[[Path, Length]|_].
