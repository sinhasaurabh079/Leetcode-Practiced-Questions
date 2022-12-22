``` EXPLANATION ```
<br>
` On observation of different Roman numbers we come up with 2 observations: `


    When the Roman numerals when read from LEFT to RIGHT, are in non-increasing order, then they all get summed up.
    for example :

    III > All of them individually are of value 1 => 1 + 1 + 1 = 3
    XVI > All of them are decreasing in value when read from L to R => 10 + 5 + 1 = 16
    XII > They are first decreasing and then remaining continuing with the same value 
    => 10 + 1 + 1 = 12

2.When we encounter a Roman numeral thats of value higher than the previous ,
then the smaller value gets subtracted from the larger value.
for example :

    IX > The next value after 1 is 10 which means that the value has increased ,
    there we subtract 1 from 10 => 10 - 1 = 9
    CXL > The first C gets added up as its next numeral is X ( because C > X ) ,
    where as we go forward the X will be subtracted from L ( because X < L ).
    => 100 + (50 - 10) = 140
