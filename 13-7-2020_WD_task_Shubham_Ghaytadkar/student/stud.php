<?php
include('db1.php');
if(isset($_POST['submit']))
{
    $studID=$_POST['id'];
    echo "<br>";
    //echo $studID;
    echo "<br>";
    $query="SELECT * FROM `student` WHERE `stud_id`='$studID' ";
    $run=mysqli_query($con,$query);
    $row=mysqli_num_rows($run);
    if($row==1)
    {
        $stud_row=mysqli_fetch_assoc($run);
        foreach ($stud_row as $k => $v)
        {
            echo $k." =>>> ".$v;
            echo "<br>";
        }
        echo "<br>";
        echo "         THANK  YOU !!!!     ";
    }
    else
    {
        echo "Failed!  ";
        echo " No Student found with such ID";
        echo "<br>";
        echo "Provide Valid ID";
    }
}
?>