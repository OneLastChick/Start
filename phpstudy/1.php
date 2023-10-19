
<?php
class xctf{
    public $flag = '111';
    public function __wakeup(){       //_wakeup()是魔法函数，被反序列化时立即被调用
    exit('bad requests');            //这里没有被反序列化，根本不运行魔法函数
    }
}
$x= new xctf();   //创建新对象
print(serialize($x));   //对对象序列化输出
?>
<!-- ————————————————
版权声明：本文为CSDN博主「Miracle&amp;」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/m0_74979597/article/details/131648972 -->