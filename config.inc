<?php
/***
	@file: config.inc
	@author: Onykage
	@detail: Settings and configuration for image rotator hack for wordpress.
***/

/***
	set this variable to how wide you want your header background image to be.
	this value should be width in pixels.
	default for this variable is 1200px.  Make sure to end the line with a ";".
	failure to not end the line with a semicolon will result in a error.
***/
$imgx = 1000;

/***
	set this variable to how high you want your header background image to be.
	this value should be width in pixels.
	default for this variable is 200px.  Make sure to end the line with a ";".
	failure to not end the line with a semicolon will result in a error.
***/
$imgy = 50;



/*******************************************************************************
 *         Dont edit anything below here unless you know what it does.
 *******************************************************************************/
$defx = 1200;
$defy = 200;

//some idiot checking
if(!isset($imgx)){
	$imgx = $defx;
}elseif(isset($imgx) && !is_int($imgx)){
	$imgx = $defx;
}elseif(isset($imgx) && $imgx == ""){ //just in case
	$imgx = $defx;
}
if(!isset($imgy)){
	$imgy = $defy;
}elseif(isset($imgy) && !is_int($imgy)){
	$imgy = $defy;
}elseif(isset($imgy) && $imgy == ""){ //just in case
	$imgy = $defy;
}
?>