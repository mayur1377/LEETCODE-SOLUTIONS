/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
  let ans=[] ;
  for(var i=0 ;i<arr.length ; i++)
      {
          ans.push(fn(arr[i] , i));
      }
    return ans;
};