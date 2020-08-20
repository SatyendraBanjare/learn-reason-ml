type bloodgroup = A | B ;

[@bs.deriving abstract]
type person = {
	name : string,
	mutable age : int,
	[@bs.optional] bg: bloodgroup,
};


let () = Js.log ("Hello, BuckleScript !!");