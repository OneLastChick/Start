
<?php 
    class xctf{
        public $flag = '111';
        public function __wakeup(){
        exit('bad requests');}
    }
    $test = new xctf();
    echo serialize($test);
?>
