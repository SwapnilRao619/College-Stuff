const fs=require('fs')
fs.writeFile('example.txt','Hello, world!',err=>{
  if(err) throw err
  console.log("Data written!")
  fs.appendFile('example.txt',' How are you?',err=>{
    if(err) throw err
    console.log("Data updated!")
    fs.readFile("example.txt",'utf8',(err,data)=>{
      if(err) throw err
      console.log("File content: ",data)
      fs.unlink("example.txt",err=>{
        if(err) throw err
        console.log("File deleted!")
      })
    })
  })
})