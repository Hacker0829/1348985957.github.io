<?php
$z[0]=Array("field","",277,306);
$z[0][4]=array();
$z[0][4]['name']="keywords";
$z[1]=Array("field","",346,405);
$z[1][4]=array();
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",418,437);
$z[2][4]=array();
$z[2][4]['name']="title";
$z[3]=Array("global","",438,464);
$z[3][4]=array();
$z[3][4]['name']="cfg_webname";
$z[4]=Array("include","",1039,1074);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1163,1192);
$z[5][4]=array();
$z[5][4]['name']="position";
$z[6]=Array("field","",1219,1241);
$z[6][4]=array();
$z[6][4]['name']="typename";
$z[7]=Array("list","\r\n    <div class=\"block\">\r\n      <h2><span class=\"category\"> <a href=\"[field:typeurl/]\" rel=\"category tag\" >[field:typename/]</a> <i class=\"fa fa-caret-right\"></i></span><a href=\"[field:arcurl/]\"  target=\"_ablank\" >[field:title/]</a></h2>\r\n      <div class=\"clear\"></div>\r\n      [field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"\r\n      <div class='viewimg'> <a href='{@me['arcurl']}' title='{@me['title']}' target='_ablank' class='ipic'> <img src='{@me['litpic']}' alt='{@me['title']}' class='thumbnail' /><span class='shine' style='background-position: 160px 50%;'> </span></a> </div>\r\n      \"); [/field:array]\r\n      <div class=\"preview\"> [field:description function=\"cn_substr(@me,600)\"/]…… </div>\r\n      <div class=\"preem\"> <span><i class=\"fa fa-clock-o\"></i> [field:pubdate function=\"MyDate('m-d',@me)\"/] </span><span><i class=\"fa fa-comment-o\"></i> <a href=\"[field:arcurl/]\" class=\"ds-thread-count\" data-thread-key=\"156\">暂无评论</a> </span><span><i class=\"fa fa-eye\"></i> [field:click/] </span><span> </span><span class=\"more\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">阅读详情</a></span> </div>\r\n    </div>\r\n    ",1274,2479);
$z[7][4]=array();
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",2522,2588);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",2625,2661);
$z[9][4]=array();
$z[9][4]['filename']="right.htm";
$z[10]=Array("include","",2697,2734);
$z[10][4]=array();
$z[10][4]['filename']="footer.htm";

?>