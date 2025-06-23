let str = "afshan.khatri.badshah.khan"
let a = str.split(".")
let store = []
for (let i = (a.length-1); i >=0 ; i--) {
    store+store.push(a[i])
}
console.log(store);

str= store.join(".")
console.log(str);


//as a function
{
    function reverseWords(str) {
        let a = str.split(".");
        let store = [];
        for (let i = (a.length-1); i >=0 ; i--) {
            store+store.push(a[i]);
        }
        str= store.join(".");
        return str;
    }
}