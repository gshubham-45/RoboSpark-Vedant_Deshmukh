<?php
$con=mysqli_connect('localhost','root','','robospark1');
if(!$con)
{
    echo "connection error".mysqli_connect_error();
}
else
    echo "You enter id of following student";
    ?>