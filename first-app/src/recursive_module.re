module rec Expression: {
  type t =
    | Int(int)
    | Add(t, t)
    | Sub(t, t)
    | If(Condition.t, t, t);
  let evaluate: t => int;
} = {
  type t =
    | Int(int)
    | Add(t, t)
    | Sub(t, t)
    | If(Condition.t, t, t);
  let rec evaluate =
    fun
    | Int(x) => x
    | Add(e1, e2) => evaluate(e1) + evaluate(e2)
    | Sub(e1, e2) => evaluate(e1) - evaluate(e2)
    | If(c, t, e) =>
      if (Condition.evaluate(c)) {
        evaluate(t);
      } else {
        evaluate(e);
      };
}
and Condition: {
  type t =
    | Result(bool)
    | And(t, t)
    | Or(t, t)
    | Eq(Expression.t, Expression.t);
  let evaluate: t => bool;
} = {
  type t =
    | Result(bool)
    | And(t, t)
    | Or(t, t)
    | Eq(Expression.t, Expression.t);
  let rec evaluate =
    fun
    | Result(x) => x
    | And(e1, e2) => evaluate(e1) && evaluate(e2)
    | Or(e1, e2) => evaluate(e1) || evaluate(e2)
    | Eq(e1, e2) => Expression.evaluate(e1) == Expression.evaluate(e2);
};

let x: Expression.t = Int(12);
let y: Expression.t = Int(45);
let z: Expression.t = Add(x, y);

Js.log(Expression.evaluate(z));

let u: Condition.t = Eq(x, y);

Js.log(Condition.evaluate(u));