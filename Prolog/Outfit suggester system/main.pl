:- dynamic likefood/1,spicy/1,fried_food/1,hot_food/1.

go :-open('food.txt',append,Stream),repeat,
	write('What type of food you like? [malay/chinese/indian] '),
	write(Stream,'What type of food you like? [malay/chinese/indian] '),

       read(Foodtype),
	write(Stream,Foodtype),
       (   Foodtype=stop, close(Stream),!;
	assert(likefood(Foodtype)),
	write(Stream,likefood(Foodtype)),
	write('You like spicy food? [yes/no] '),
read(Taste),
assert(spicy(Taste)),
	    write(Stream,spicy(Taste)),
	write('You like hot food? [yes/no] '),
read(Taste1),
assert(hot_food(Taste1)),
	write('You like fried food? [yes/no] '),
read(Taste2),
assert(fried_food(Taste2)),

      hypothesize(Foodtype,Dish),
      write('I guess that the food is: '),
      write(Dish),
      nl,
      undo).

hypothesize(indian,kurma)   :- likefood(indian),spicy(no), !.
hypothesize(indian,curry)   :- likefood(indian),spicy(yes), !.
hypothesize(malay,sambal)   :- likefood(malay),hot_food(yes), !.
hypothesize(malay,singgang)   :- likefood(malay),hot_food(no), !.
hypothesize(chinese,stir_fry)   :- likefood(chinese),fried_food(yes), !.
hypothesize(chinese,chicken_soup)   :- likefood(chinese),fried_food(no), !.

undo :- retract(likefood(_)),retract(hot_food(_)),retract(spicy(_)),retract(fried_food(_)),fail.
%undo :- retract(no(_)),fail.
undo.


