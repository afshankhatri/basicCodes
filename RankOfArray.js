





//NOT COMPLETED ,NEED TO UNDERSTAND HASHMAP PROPERLY //








let arr = [66,1,55,8,4,32,58]
let store = arr.map((val,index)=> [val,index])
console.log(store);
store.sort((a,b)=>a[0]-b[0])
console.log(store);


// for (let i = 0; i < arr.length; i++) {
//     store.push(arr[i])    
// }
// console.log(store[0][1]);

let temp = 0

for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[i] < arr[j]) {
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp 
        }
    }   
}
let rank =[]
for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < store.length; j++) {
        if (arr[i] == store[j]) {
            // rank.push(i)
        }
    }
}
console.log(index);
