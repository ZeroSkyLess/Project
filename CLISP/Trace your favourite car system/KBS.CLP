         CLIPS (Quicksilver Beta 3/26/08)
CLIPS> (deftemplate car
(slot car_name)
(slot body_type)
(slot brand)
(slot engineCC)
(slot price))
CLIPS> (deffacts carmodel
(car (car_name "Rusa EX") (body_type mpv) (brand perodua) (engineCC 1.3) (price 12000))
 (car (car_name "Sage FLX") (body_type sedan) (brand proton) (engineCC 1.3) (price 33000))
 (car (car_name "Axia SE") (body_type hatchback) (brand perodua) (engineCC 1.0) (price 40000))
 (car (car_name Iriz) (body_type hatchback) (brand proton) (engineCC 1.3) (price 43000))
(car (car_name "Myvi SE") (body_type hatchback) (brand perodua) (engineCC 1.5) (price 53000))
(car (car_name Avanza) (body_type mpv) (brand toyota) (engineCC 1.5) (price 63000))
(car (car_name Alza) (body_type mpv) (brand perodua) (engineCC 1.5) (price 64000))
 (car (car_name Suprima) (body_type hatchback) (brand proton) (engineCC 1.5) (price 77000))
(car (car_name Inspira) (body_type sedan) (brand proton) (engineCC 1.7) (price 80000))
 (car (car_name "Carrola Altis") (body_type sedan) (brand toyota) (engineCC 2.0) (price 110000))
 (car (car_name Camry) (body_type sedan) (brand toyota) (engineCC 2.5) (price 145000))
 (car (car_name Alphard) (body_type mpv) (brand toyota) (engineCC 3.5) (price 324000)))
CLIPS> (reset)
CLIPS> (defrule question1
(start)
=>
(printout t crlf "---------------------------------------------------------------" crlf)
(printout t "        Welcome to Trace Your Favourite Car System        " crlf)
(printout t "---------------------------------------------------------------" crlf)
(printout t "Thank you for using this system, what can I call you?" crlf)
(assert (name (read))))
CLIPS> (defrule question2
(name ?a)
=>
(printout t crlf "Hi " ?a ", please answering some question so I will show you the car" crlf)
(assert (go)))
CLIPS> (defrule choosing
(go)
=>
(printout t crlf crlf "Please select which one is the most important thing that you to prefer to buy a car" crlf)
(printout t "1. Body Type" crlf)
(printout t "2. Brand" crlf)
(printout t "3. Price" crlf)
(printout t "4. Don't care" crlf)
(printout t "What is your choice (entering number) : " )
(assert (choice (read))))
CLIPS> (defrule ChooseError
?fact <- (go)
?fact1 <- (choice ?)
(and ( and (and (not (choice 1))  (not (choice 2))) (not (choice 3))) (not (choice 4)))
=>
(printout t crlf "Wrong input!!!" )
(retract ?fact)
(retract ?fact1)
(assert (go)))
CLIPS> (defrule checkBodyType
(choice 1) (name ?a)
=>
(printout t crlf "Which body type of car you prefer? "crlf)
(printout t "1. HatchBack" crlf)
(printout t "2. Sedan" crlf)
(printout t "3. MPV" crlf)
(printout t "What is your choice (entering number) : ")
(assert (body (read)))
(printout t crlf ?a ", the car you can buy is: " crlf))
CLIPS> (defrule CeckBodyTypeError
?fact <- (choice 1)
?fact1 <- (body ?)
( and (and (not (body 1))  (not (body 2))) (not (body 3)))
=>
(printout t crlf "Wrong input!!!" )
(retract ?fact)
(retract ?fact1)
(assert (choice 1)))
CLIPS> (defrule bodyHatch
(body 1)
(car (car_name ?a) (body_type hatchback) (brand ?c) (engineCC ?d) (price ?e))
=>
(printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: HatchBack " crlf)
(printout t "Brand: " ?c crlf)
(printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot1 ?e)))
CLIPS> (defrule cl1
?fact <- (tot1 ?a)
(not (test (= ?a 40000)))
=>
(retract ?fact))
CLIPS> (defrule BodyCont1
?fact <- (tot1 ?a)
?fact1 <- (body 1)
 (test (= ?a 40000))
=>
(printout t "Want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule bodySedan
(body 2)
(car (car_name ?a) (body_type sedan) (brand ?c) (engineCC ?d) (price ?e))
=>
 (printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: Sedan " crlf)
 (printout t "Brand: " ?c crlf)
(printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot2 ?e)))
CLIPS> (defrule cl2
?fact <- (tot2 ?a)
(not (test (= ?a 33000)))
=>
(retract ?fact))
CLIPS> (defrule BodyCont2
?fact <- (tot2 ?a)
?fact1 <- (body 2)
 (test (= ?a 33000))
=>
(printout t "want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule bodyMPV
(body 3)
 (car (car_name ?a) (body_type mpv) (brand ?c) (engineCC ?d) (price ?e))
=>
 (printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: MPV " crlf)
(printout t "Brand: " ?c crlf)
 (printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot3 ?e)))
CLIPS> (defrule cl3
?fact <- (tot3 ?a)
(not (test (= ?a 12000)))
=>
(retract ?fact))
CLIPS> (defrule BodyCont3
?fact <- (tot3 ?a)
?fact1 <- (body 3)
 (test (= ?a 12000))
=>
(printout t "want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule checkbrand
(choice 2) (name ?a)
=>
(printout t crlf "Which brand of car you prefer? "crlf)
(printout t "1. Proton" crlf)
(printout t "2. Toyota" crlf)
(printout t "3. Perodua" crlf)
(printout t "What is your choice (entering number) : ")
(assert (bd (read)))
(printout t crlf ?a ", the car you can buy is: " crlf))
CLIPS> (defrule CeckBrandError
?fact <- (choice 2)
?fact1 <- (bd ?)
( and (and (not (bd 1))  (not (bd 2))) (not (bd 3)))
=>
(printout t crlf "Wrong input!!!" )
(retract ?fact)
(retract ?fact1)
(assert (choice 2)))
CLIPS> (defrule brandProton
(bd 1)
 (car (car_name ?a) (body_type ?b) (brand proton) (engineCC ?d) (price ?e))
=>
 (printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: " ?b crlf)
(printout t "Brand: Proton " crlf)
(printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot4 ?e)))
CLIPS> (defrule cancel1
?fact <- (tot4 ?a)
(not (test (= ?a 33000)))
=>
(retract ?fact))
CLIPS> (defrule goCont2
?fact <- (tot4 ?a)
?fact1 <- (bd 1)
 (test (= ?a 33000))
=>
(printout t "Want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule brandToyota
(bd 2)
 (car (car_name ?a) (body_type ?b) (brand toyota) (engineCC ?d) (price ?e))
=>
 (printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: " ?b crlf)
(printout t "Brand: Toyota " crlf)
(printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot5 ?e)))
CLIPS> (defrule cancel2
?fact <- (tot5 ?a)
(not (test (= ?a 63000)))
=>
(retract ?fact))
CLIPS> (defrule goCont3
?fact <- (tot5 ?a)
?fact1 <- (bd 2)
 (test (= ?a 63000))
=>
(printout t "Want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule brandPerodua
(bd 3)
 (car (car_name ?a) (body_type ?b) (brand perodua) (engineCC ?d) (price ?e))
=>
 (printout t crlf "Car Name: " ?a crlf)
(printout t "Body Type: " ?b crlf)
(printout t "Brand: Perodua " crlf)
(printout t "Engine CC: " ?d crlf)
(printout t "Price: RM " ?e crlf)
 (assert (tot6 ?e)))
CLIPS> (defrule cancel3
?fact <- (tot6 ?a)
(not (test (= ?a 12000)))
=>
(retract ?fact))
CLIPS> (defrule goCont4
?fact <- (tot6 ?a)
?fact1 <- (bd 3)
 (test (= ?a 12000))
=>
(printout t "Want to continue? [yes / no] ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule prices
(choice 3) (name ?a)
=>
(printout t ?a ", what is your badget? : RM " )
(assert (badget (read)))
(printout t crlf "The car you can buy is:" crlf))
CLIPS> (defrule sugcar
(badget ?a) 
(car (car_name ?b) (body_type ?c) (brand ?d) (engineCC ?e) (price ?f))
(test (> ?a ?f))
=>
 (printout t crlf "Car Name: " ?b crlf)
(printout t "Body Type: " ?c crlf)
(printout t "Brand: " ?d crlf)
(printout t "Engine CC: " ?e crlf)
(printout t "Price: RM " ?f crlf)
(assert (total ?f)))
CLIPS> (defrule cancel
?fact <- (total ?a)
(not (test (= ?a 12000)))
=>
(retract ?fact))
CLIPS> (defrule goCont5
?fact <- (total ?a)
?fact1 <- (badget ?)
(test (= ?a 12000))
=>
(printout t "Want to continue? [yes / no] : ")
(retract ?fact)
(retract ?fact1)
(assert (con (read))))
CLIPS> (defrule ConError
?fact <- (con ?)
(and (not (con yes))
(not (con no)))
=>
(printout t crlf "Wrong input!!!" crlf)
(printout t "Want to continue? [yes / no] : ")
(retract ?fact)
(assert (con (read))))
CLIPS> (defrule ContYes
?fact <- (go)
?fact1 <- (con yes)
?fact2 <- (choice ?)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (go)))
CLIPS> (defrule ContNo
?fact <- (go)
?fact1 <- (con no)
?fact2 <- (start)
?fact3 <- (choice ?)
?fact4 <- (name ?)
=>
(retract ?fact)
(retract ?fact1)
 (retract ?fact2)
(retract ?fact3)
(retract ?fact4)
(assert (start)))
CLIPS> (defrule dontCare
(choice 4)
=>
(printout t crlf "Please answering the following question." crlf)
(assert (start1)))
CLIPS> (defrule bodytype
 (start1)
=>
(printout t crlf "What body type of car you like?" crlf)
(printout t "1. Hatchback" crlf)
(printout t "2. Sedan" crlf)
(printout t "3. MPV" crlf)
(printout t "What is your choice (entering number): ")
(assert (bt (read))))
CLIPS> (defrule errorbodytype1
?fact <- (start1)
?fact1 <- (bt ?)
 (and (and (not (bt 1))
(not (bt 2)))
(not (bt 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
 (assert (start1)))
CLIPS> (defrule hatchback
(bt 1)
=>
(printout t crlf "What brand of car you like?" crlf)
(printout t "1. Proton" crlf)
(printout t "2. Perodua" crlf)
(printout t "3. Back to choosing other body type" crlf)
(printout t "What is your choice (entering number): ")
(assert (b (read))))
CLIPS> (defrule errorhatchback
?fact <- (bt 1)
?fact1 <- (b ?)
 (and (and (not (b 1))
(not (b 2)))
(not (b 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
 (assert (bt 1)))
CLIPS> (defrule sedan
(bt 2)
=>
(printout t crlf "What brand of car you like?" crlf)
(printout t "1. Toyota" crlf)
(printout t "2. Proton" crlf)
(printout t "3. Back to choosing other body type" crlf) 
(printout t "What is your choice (entering number): ")
(assert (b (read))))
CLIPS> (defrule errorsedan
?fact <- (bt 2)
?fact1 <- (b ?)
 (and (and (not (b 1))
(not (b 2)))
(not (b 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
 (assert (bt 2)))
CLIPS> (defrule mpv
(bt 3)
=>
(printout t crlf "What brand of car you like?" crlf)
(printout t "1. Toyota" crlf)
(printout t "2. Perodua" crlf)
(printout t "3. Back to choosing other body type" crlf)
(printout t "What is your choice (entering number): ")
(assert (b (read))))
CLIPS> (defrule errormpv
?fact <- (bt 3)
?fact1 <- (b ?)
 (and (and (not (b 1))
(not (b 2)))
(not (b 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
 (assert (bt 3)))
CLIPS> (defrule brand1
(bt 1) (b 1)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 1.3" crlf)
(printout t "2. 1.5" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))
CLIPS> (defrule errorbrand1
?fact <- (bt 1)
?fact1 <- (b 1)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 1))
(assert (b 1)))
CLIPS> (defrule brand2
(bt 1) (b 2)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 1.0" crlf)
(printout t "2. 1.5" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))
CLIPS> (defrule errorbrand2
?fact <- (bt 1)
?fact1 <- (b 2)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 1))
(assert (b 2)))
CLIPS> (defrule brand3
(bt 2) (b 1)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 2.0" crlf)
(printout t "2. 2.5" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))
CLIPS> (defrule errorbrand3
?fact <- (bt 2)
?fact1 <- (b 1)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 2))
(assert (b 1)))
CLIPS> (defrule brand4
(bt 2) (b 2)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 1.3" crlf)
(printout t "2. 1.7" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))
CLIPS> (defrule errorbrand4
?fact <- (bt 2)
?fact1 <- (b 2)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 2))
(assert (b 2)))
CLIPS> (defrule brand5
(bt 3) (b 1)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 1.5" crlf)
(printout t "2. 3.5" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))
CLIPS> (defrule errorbrand5
?fact <- (bt 3)
?fact1 <- (b 1)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 3))
(assert (b 1)))
CLIPS> (defrule brand6
(bt 3) (b 2)
=>
(printout t crlf "Please select the engine CC of the car?" crlf)
(printout t "1. 1.3" crlf)
(printout t "2. 1.5" crlf)
(printout t "3. Back to choosing other brand" crlf)
(printout t "What is your choice (entering number): ")
(assert (cc (read))))

CLIPS> (defrule errorbrand6
?fact <- (bt 3)
?fact1 <- (b 2)
?fact2 <- (cc ?)
(and (and (not (cc 1))
(not (cc 2)))
(not (cc 3)))
=>
(printout t crlf "Wrong input!!" crlf)
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 3))
(assert (b 2)))
CLIPS> (defrule sug1
(bt 1) (b 1) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Iriz which achieve your requirement" crlf)
(printout t "The price is about RM 43000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug2
(bt 1) (b 1) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Suprima S which achieve your requirement" crlf)
(printout t "The price is about RM 77000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug3
(bt 1) (b 2) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Axia SE which achieve your requirement" crlf)
(printout t "The price is about RM 40000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug4
(bt 1) (b 2) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Myvi SE which achieve your requirement" crlf)
(printout t "The price is about RM 53000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug5
(bt 2) (b 1) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Carrola Altis which achieve your requirement" crlf)
(printout t "The price is about RM 110000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug6
(bt 2) (b 1) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Camry which achieve your requirement" crlf)
(printout t "The price is about RM 145000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))

CLIPS> (defrule sug7
(bt 2) (b 2) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Saga FLX which achieve your requirement" crlf)
(printout t "The price is about RM 33000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug8
(bt 2) (b 2) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Inspira which achieve your requirement" crlf)
(printout t "The price is about RM 80000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug9
(bt 3) (b 1) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Avanza which achieve your requirement" crlf)
(printout t "The price is about RM 63000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug10
(bt 3) (b 1) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Alphard which achieve your requirement" crlf)
(printout t "The price is about RM 324000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug11
(bt 3) (b 2) (cc 1)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Rusa EX which achieve your requirement" crlf)
(printout t "The price is about RM 12000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule sug12
(bt 3) (b 2) (cc 2)  (name ?a)
=>
(printout t crlf ?a ", we suggest you to buy Alza which achieve your requirement" crlf)
(printout t "The price is about RM 64000" crlf)
(printout t "Thank you" crlf)
 (assert (continue)))
CLIPS> (defrule cont
?fact1 <- (start1)
?fact2 <- (bt ?)
?fact3 <- (b ?)
?fact4 <- (cc ?)
?fact5 <- (continue)
=>
(printout t crlf "The car is not suitable for you or you want to check the other car" crlf)
(printout t "yes for continue, no for finish : " )
(assert (cont (read)))
(retract ?fact1)
(retract ?fact2)
(retract ?fact3)
(retract ?fact4)
(retract ?fact5))
CLIPS> (defrule errorcont
?fact <- (cont ?)
(and (not (cont yes))
(not (cont no)))
=>
(printout t crlf "Wrong input, please type yes or no only!!" crlf)
(printout t crlf "The car is not suitable for you or you want to check the other car" crlf)
(printout t "yes for continue, no for finish : " )
 (retract ?fact)
(assert (cont (read))))
CLIPS> (defrule cont1
 ?fact <- (cont yes)
?fact1 <- (go)
?fact2 <- (choice ?)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
 (assert (go)))

CLIPS> (defrule cont2
?fact <- (start)
 ?fact1 <- (cont no)
?fact2 <- (name ?)
?fact3 <- (go)
?fact4 <- (choice ?)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(retract ?fact3)
(retract ?fact4)
(assert (start)))
CLIPS> (defrule back1
?fact <- (start1)
?fact1 <- (bt ?)
?fact2 <- (b 3)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (start1)))
CLIPS> (defrule back2
?fact <- (bt 1)
?fact1 <- (b ?)
?fact2 <- (cc 3)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
 (assert (bt 1)))
CLIPS> (defrule back3
?fact <- (bt 2)
?fact1 <- (b ?)
?fact2 <- (cc 3)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
 (assert (bt 2)))
CLIPS> (defrule back4
?fact <- (bt 3)
?fact1 <- (b ?)
?fact2 <- (cc 3)
=>
(retract ?fact)
(retract ?fact1)
(retract ?fact2)
(assert (bt 3)))
CLIPS> 
