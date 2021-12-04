let quantity = 7;
let price = 14.50;
let discount = quantity < 10 ? 0.05 : 0.10;
let totalPrice = float_of_int(quantity) *. price;
let afterDiscount = totalPrice -. (totalPrice *. discount);

// This is an example of bad unicode
// Strings in double quotes are evaluated as ASCII, whereas JavaScript evaluates them as Unicode
Js.log("Before discount " ++ Js.Float.toString(totalPrice) ++ "€");
Js.log("After discount " ++ Js.Float.toString(afterDiscount) ++ "€");