<?php
function head($title="Default") { ?>
<!DOCTYPE HTML>
<html lang="en">
 <head>
  <title><?php echo $title?></title>
  <style type="text/css" media="screen">@import "styles.css";</style>
  <script type="text/javascript" src="yui/yahoo.js"></script>
  <script type="text/javascript" src="yui/dom.js"></script>
  <script type="text/javascript" src="yui/event.js"></script>
  <script type="text/javascript" src="yui/connection.js"></script>
  <script type="text/javascript" src="yui/animation.js"></script>
  <script type="text/javascript" src="common.js"></script>
 </head>
 <body>
  <div class="main">
<?php
}

function foot() { ?>
  </div><br clear="left"/>
  <font size="-1">Server -&gt; Client JSON Messages</font>
  <div id="debug" class="debug"></div>
  <script>fancyItems(); fancyForm();</script>
 </body>
</html>
<?php
}
?>
