=== Random header image script ===
Contributors: onykage
Donate link: https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=2861201
Tags: php, Random, wordpress, GD libs, onykage, image, header, generator
Requires at least: 2.4
Tested up to: 2.8.2
Stable tag: 0.1.16

A random header image script for wordpress

== Description ==

A random header image script for wordpress.  This script is NOT a plugin.  Its a hack.  There is no options panel, no insite configuration.  If you know your WP installation this script shouldnt be hard to implement.  Please see http://www.onykage.com/forum/viewtopic.php?f=18&t=122 for more information.

== Installation ==

Please see the below post for directions.
http://www.onykage.com/forum/viewtopic.php?f=18&t=122

== Changelog ==

0.1.10 project start
0.1.15 added htaccess.zip to fix repo error
	   added createHT function to create the htaccess file automatically when it doesnt exist.

== Frequently Asked Questions ==

Q: Where is the htaccess file?
A: The repository sees this file as a system file and thus it is not added to the *.zip file created from wordpress.  The script will create the htaccess file if it does not exist.  Alternatively, the htaccess file is supplied in the htaccess.zip.

Q: This script doesnt work.  Why is it even a plugin?
A: I summited the idea to the wordpress team and asked them what they thought.  I even told them that this was a hack not a plugin.  They allowed it anyway.  There is no options panel, and until i learn how to make one for actual plugins there wont be one.