type document;
[@bs.send] external getElementById: (document, string) => Dom.element = "getElementById";
[@bs.val] external doc : document = "document";

let el = getElementById(doc, "myId");


[@bs.module "path"] [@bs.variadic] external join: array(string) => string = "join";
let v = join([|"a", "b" , "aaa" , "ccc"|]);


type x;
[@bs.val] external x: x = "x";
[@bs.set] external set_onload: (x, [@bs.this] ((x, int) => unit)) => unit = "onload";
[@bs.get] external resp: x => int = "response";

set_onload(x, [@bs.this] ((o, v) => Js.log(resp(o) + v)));

/*

Use [@bs.set] or [@bs.get] to acces fields of objects.

Use [@bs.send] to access functions of objects.

use [@bs.variadic] if the function can have arbitrary no of parameters. 

*/