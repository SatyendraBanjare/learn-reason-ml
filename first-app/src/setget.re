type bloodgroup = A | B ;

type person = {
	name : string,
	friends : array(string),
	age : int,
	bg: Js.Nullable.t(bloodgroup),
};

// Uninitialized Hero data

let hero = {
  name: "",
  friends: [|""|],
  age: 0,
  bg: Js.Nullable.null,
};

//[@bs.val] external hero : person = "ironman"; // let our hero object is iron man

[@bs.set] external setName: (person, string) => unit = "name";
[@bs.set] external setFriends: (person, array(string)) => unit = "friends";
[@bs.set] external setAge: (person, int) => unit = "age";
[@bs.set] external setBg: (person, bloodgroup) => unit = "bg";

[@bs.get] external getName : person => string = "name";
[@bs.get] external getFriends : person => array(string) = "friends";
[@bs.get] external getAge : person => int = "age";
[@bs.get] external getBg : person => bloodgroup = "bg";

setName( hero,"Tony Stark");
setFriends(hero, [| "hulk","thor" |] );
setAge(hero,52);
setBg(hero,A);

Js.log("\n Hero Details : \n");
Js.log( getName(hero));
Js.log(getFriends(hero));
Js.log(getAge(hero));
Js.log(getBg(hero)); // wont print anything 

/////////////////////////////////////////////////////////

type t;
[@bs.new] external create: int => t = "Int32Array" ;
[@bs.get_index] external get: (t, int) => int = "" ;
[@bs.set_index] external set: (t, int, int) => unit = "" ;

let i32arr = create(3);
i32arr->set(0, 42);
Js.log("\n New array creation and value\n");
Js.log(i32arr->get(0));
