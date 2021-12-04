let quantity = 7;
let price = 14.50;

// classic if/else expression
// let discount = 
//   if (quantity < 10) {
//     0.05;
//   } else {
//     0.10;
//   };

// ternary operator
let discount = quantity < 10 ? 0.05 : 0.10;

let totalPrice = float_of_int(quantity) *. price;
let afterDiscount = totalPrice -. (totalPrice *. discount);
Js.log2("Before discount $", totalPrice);
Js.log2("After discount $", afterDiscount);