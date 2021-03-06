// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var Caml_obj = require("bs-platform/lib/js/caml_obj.js");

function fact(n) {
  if (n === 0 || n === 1) {
    return 1;
  } else {
    return Math.imul(n, fact(n - 1 | 0));
  }
}

console.log("factorial 5:");

console.log(fact(5));

function sort(param) {
  if (param) {
    return insert(param.hd, sort(param.tl));
  } else {
    return /* [] */0;
  }
}

function insert(elem, param) {
  if (!param) {
    return {
            hd: elem,
            tl: /* [] */0
          };
  }
  var t = param.tl;
  var h = param.hd;
  if (Caml_obj.caml_lessthan(elem, h) || Caml_obj.caml_equal(elem, h)) {
    return {
            hd: elem,
            tl: {
              hd: h,
              tl: t
            }
          };
  } else {
    return {
            hd: h,
            tl: insert(elem, t)
          };
  }
}

console.log("Sorting :");

console.log($$Array.of_list(sort($$Array.to_list([
                  1,
                  3,
                  2,
                  4,
                  5,
                  10,
                  23,
                  3
                ]))));

exports.fact = fact;
exports.sort = sort;
exports.insert = insert;
/*  Not a pure module */
