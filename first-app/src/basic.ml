(* Factorial *)

let rec fact n:int = match n with
	| 0 -> 1
	| 1 -> 1
	| n -> n * (fact (n-1) );;


let _ = Js.log("factorial 5:");;
let _ =  Js.log(fact 5);;


(* Sort*)

let rec sort = function
  | [] -> []
  | h::t -> insert h (sort t)
and insert elem  = function
  | [] -> [elem]
  | h::t -> if (elem < h || elem = h) then elem :: h :: t
      else h :: (insert elem t);;

let _ = Js.log("Sorting :");;

let () = 
    [| 1; 3 ; 2; 4; 5; 10; 23; 3|]
    |> Array.to_list 
    |> sort
    |> Array.of_list
    |> Js.log   ;

