/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
 let ans=[];
 for(var i =0; i<arr.length ; i++)
     {
         if(fn(arr[i] , i))
             {
                 ans.push(arr[i]);
             }
     }
    return ans;
};