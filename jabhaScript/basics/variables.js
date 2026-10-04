const accountId = 144553
let accountEmail = "rajiv@gmail.com"
var accountPassword = "12345"
accountCity = "Srinagar"
let accountState;

// accountId = 2

accountEmail = "rr@google.com"
accountPassword = "11223344"
accountCity = "Udhampur"

console.log(accountId);

/* 
prefer not to use var, because of issues in block scope and functional scope 
*/

console.table([accountId, accountEmail, accountPassword, accountCity, accountState])