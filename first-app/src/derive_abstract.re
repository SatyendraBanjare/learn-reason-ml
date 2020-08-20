type bloodgroup = A | B ;

[@bs.deriving abstract]
type person = {
	name : string,
	mutable age : int,
	[@bs.optional] bg: bloodgroup,
};


let joe = person(~name="Joe", ~age=20, ~bg=A);
let pam = person(~name="pam", ~age=29, ());
Js.log(joe);
Js.log(pam);