# Personalized Echo
read name
echo "Welcome $name"


# Looping with Numbers
for((i = 1; i <= 50; i++)); do 
    echo $i
done


# The World of Numbers
read num1
read num2

add=$((num1 + num2))
minus=$((num1 - num2))
div=$((num1 * num2))
times=$((num1 / num2))

echo $add
echo $minus
echo $div
echo $times


# Comparing Numbers
read num1
read num2

if [ $num1 -gt $num2 ]; then 
    echo "X is greater than Y"
elif [ $num1 -lt $num2 ]; then
    echo "X is less than Y"
elif [ $num1 -eq $num2 ]; then
    echo "X is equal to Y"
fi

# Getting started with conditionals
read char

case "$char" in 
    [Yy])
        echo "YES"
        ;;
    [Nn])
        echo "NO"
        ;;
esac