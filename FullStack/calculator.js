let num1 = 36;
let num2 = 12;
const op = '%';
switch(op){
    case '+': 
        console.log(num1+num2);
        break;
    case '-':
        console.log(num1-num2);
        break;
    case '*':
        console.log(num1*num2);
    case '/':
        console.log(num1/num2);
    case '%':
        console.log(num1%num2);
    default:
        console.log("Enter a valid operator");
}