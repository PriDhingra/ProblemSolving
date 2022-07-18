function rotate(arr , k){
  	const arr1[] = new Array[arr.length]; 
    
    for(var i = 0; i < arr.length;i++) {
        arr1[(arr.length - (i - k)) % arr.length] = arr[i];
    }
    
    arr = arr1;
  }
  








































  process.stdin.resume();
  process.stdin.setEncoding('ascii');
  
  var input_stdin = "";
  var input_stdin_array = "";
  var input_currentline = 0;
  
  process.stdin.on('data', function (data) {
  input_stdin += data;
  });
  
  process.stdin.on('end', function () {
  input_stdin_array = input_stdin.split("\n");
  main();    
  });
  
  function readLine() {
  return input_stdin_array[input_currentline++];
  }
  
  
  function main() {
  
      let n = parseInt(readLine());
      const arr = readLine().replace(/\s+$/g, '').split(' ');
      
      let array = [];
      
      for(let i = 0 ; i<n ; i++){
          array.push((Number)(arr[i]));
      }
      
      let k = parseInt(readLine());
      let res = rotate(array , k);
      console.log(...array);
  
  }
