=begin

if condition
  something to be done
elsif different condition
  something else to be done
else
  another different thing to be done
end
=end

booleanOne = true
randomCode = "Hi!"
if booleanOne
  puts "I will be printed!"
elsif randomCode.length>=1
  puts "Even though the above code is true, I won't be executed because the earlier if statement was true!"
else
  puts "I won't be printed because the if statement was executed!"
end


