print("length: ")
input1 = readline()
length = parse(Int64, input1)

print("width: ")
input2 = readline()
width = parse(Int64, input2)

area = width * length
perimeter = (width * 2) + (length * 2)

# length: 143
# width: 82
# julia> show(area)
# 11726
# julia> show(perimeter)
# 450