WTF no-framework PHP MVC
========================

Code taken from [27.02.2006 "The no-framework PHP MVC framework" by
Rasmus Lerdorf](https://toys.lerdorf.com/archives/38-The-no-framework-PHP-MVC-framework.html)

I could not find this code besides author's page and having difficulty evaluating
author's design decision decided to re-create it in a runnable form to study that.

Had to add categories.txt, 'items' table creation with correct schema
and yui-0.11.3 ([Aug. 2006](https://yuiblog.com/blog/2006/08/28/yui-release-113))
files (2.9.0 also worked but I could not find a reason to keep them)

Use these yui/ files **only** inside a temporary sandbox!

This PoC works by some definition of "work" but its UX is creepy and [just
released](https://yuiblog.com/blog/2006/02/13/the-yahoo-user-interface-library)
YUI use seems neither justified nor professional.

The missing 'ctime' field [WTF](https://github.com/mz0/no-framework-PHP/blob/master/model/items.inc#L8)
(missing in author's listing) is a perfect example of unrelible (and for this reason undesirable) code comments.

Note: had to *apt install --no-install-recommends php-apcu php5.6-sqlite3* to my Ubuntu PHP setup.
