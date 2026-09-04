var i = 1;

// while (i <= 5) {
//     var s = 1;
//     var pattern = "";

//     while (s <= i) {
//         pattern += "*";
//         s++;
//     }

//     console.log(pattern);
//     i++;
// }
// do {
//     var s = 1;
//     var pattern = "";

//     while (s <= i) {
//         pattern += "*";
//         s++;
//     }

//     console.log(pattern);
//     i++;
// } while (i <= 5);
// var i = 1;
// for (i; i <= 5; i++) {
//     console.log("*".repeat(i));  
// }
function printPattern(n) {
    for (var i = 1; i <= n; i++) {
        console.log("*".repeat(i));
    }   }

printPattern(15);
printPattern(25);
printPattern(215);
