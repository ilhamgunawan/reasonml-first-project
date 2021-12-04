let quantity = 7;
let price = 14.50;
let discount = quantity < 10 ? 0.05 : 0.10;
let totalPrice = float_of_int(quantity) *. price;
let afterDiscount = totalPrice -. (totalPrice *. discount);

// use the delimiters {js|...|js} that tell ReasonML to evaluate the strings as Unicode:
Js.log("Before discount " ++ Js.Float.toString(totalPrice) ++ {js| €|js});
Js.log("After discount " ++ Js.Float.toString(afterDiscount) ++ {js| €|js});