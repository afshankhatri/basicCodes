
//pehle hi merge kar dia 
let nums1 =[1,2,3,4,5]
let nums2=[6,7,8,9]
let m=5
let n=4

for (let i = 0; i < nums2.length; i++) {  
    nums1.push(nums2[i])
}
console.log(nums1);
   

{
let nums1 =[1,2,3,4,5]
let nums2=[2,4,7,8,9]
let m=5
let n=5

let store = []
let ptr1 = 0
let ptr2 = 0
while (ptr1 < m && ptr2 < n) {
    if (nums1[ptr1] < nums2[ptr2]) {
        store.push(nums1[ptr1])
        ptr1++
        // console.log(store);
    } 
    else if(nums1[ptr1] > nums2[ptr2]) {
        store.push(nums2[ptr2])
        ptr2++
        // console.log(store);
    } 
    else if (nums1[ptr1] == nums2[ptr2]) {
        store.push(nums1[ptr1])
        ptr1++
        // console.log(store);
    }
}
console.log(ptr1,ptr2);

while (ptr1 < m) {
    store.push(nums1[ptr1]);
    ptr1++;
    // console.log(store);
    
}

// Handle remaining elements in nums2
while (ptr2 < n) {
    store.push(nums2[ptr2]);
    ptr2++;
    // console.log(store);
    
}
nums1 = store
console.log(nums1);
// console.log(store);

}


// for (let i = 0; i < nums1.length; i++) {
//     for (let j = 0; j < nums2.length; j++) {
//         if (nums1[i] >= nums2[j]) {
//             store.push(nums2[j])            
//         }
//         else{
//             store.push(nums1[i])
//         }
//     }
    
// }
// console.log(store);



