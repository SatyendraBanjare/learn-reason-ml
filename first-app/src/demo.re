type bloodgroup = A | B ;

[@bs.deriving abstract]
type person = {
	name : string,
	mutable age : int,
	[@bs.optional] bg: bloodgroup,
};


let name_obj = [%bs.obj 
	{
  	info: {
  		author: "Bob"
  		}
	}
];

let name = name_obj##info##author;

let () = Js.log ("Hello, BuckleScript !!");