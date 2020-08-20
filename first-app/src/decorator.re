let a = Some(5);
let b = None;  // Undefined 

// global val decorator

[@bs.val] // Using an external Js Function
[@bs.scope "Math"]
external roundoff : float => int = "round" ;

[@bs.val] [@bs.scope "Math"] external random : unit => float = "random";

/*
#######################
format : 
external ocaml_function_name : TypeSig = JS_Function_Name ;

Catch : We need to declare decorators before each of external function names !!
###############################
*/


let randnum = random();
let rr = roundoff(5.222111);
Js.log("random no :");
Js.log(randnum);
Js.log(rr);


type timerId;
[@bs.val] external setTimeout: (unit => unit, int) => timerId = "setTimeout" ;
[@bs.val] external clearTimeout: timerId => unit = "clearTimeout" ;

let id = setTimeout(() => (Js.log("hello")), 1000 )
clearTimeout(id)