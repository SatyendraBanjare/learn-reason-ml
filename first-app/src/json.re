type data = {names: array(string)};

// bind to JS' JSON.parse
[@bs.scope "JSON"] [@bs.val]
external parseIntoMyData: string => data = "parse"

let result = parseIntoMyData(" { \"names\": [\"Luke\", \"Christine\"] } ")
let name1 = result.names[0]

Js.log(result);
Js.log(name1);