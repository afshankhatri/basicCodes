// try 2 Final 
{
    let arr = [1,2,3,4,5,6]
    let row =2
    let col = 3
    let store = []

    for (let i = 0; i < row; i++) {
        store.push(arr.slice(col*i,col*i+col))        
    }
    console.log(store);
}



// try 1
// let arr = [[1,2,3],[1,2,3]]

let arr = [1,2,3,4,5,6]
let row =3
let col = 2
let ptr =0
let store =[]
let save = []

// if (row*col != original.length) {
//     return []   
// }

for (let i = 0; i < row; i++) {
    store = new Array (col)
    for (let j = 0; j < col; j++) {
        store.push(arr[i][j])
        ptr++
    }
    
    console.log(store);
}




