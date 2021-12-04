let quantity = 7;
let price = 14.50;
let discount = quantity < 10 ? 0.05 : 0.10;
let totalPrice = float_of_int(quantity) *. price;
let afterDiscount = totalPrice -. (totalPrice *. discount);
Js.log("Before discount: $" ++ Js.Float.toString(totalPrice)); // leverage JavaScript Float function with Js.Float
Js.log2("After discount $", afterDiscount);