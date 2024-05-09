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

# Looping and Skipping
for((i=1; i<=99; i++)); do
    if((i%2==1)); then
        echo $i
    fi
done

# More on condition
read x
read y
read z

if [ $x -eq $y ] && [ $y -eq $z ]; then
echo "EQUILATERAL"
elif [ $x -eq $y ] || [ $y -eq $z ] || [ $x -eq $z ]; then
echo "ISOSCELES"
else
echo "SCALENE"
fi``

# Arithmetics Operations
read X

result=$(echo "scale = 4;$X" | bc)
printf "%.3f\n" $result