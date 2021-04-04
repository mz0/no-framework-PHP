# WTF is a "no-framework PHP MVC"?

Essential code taken around 2018-09-07 from ["The no-framework PHP MVC framework" by
Rasmus Lerdorf](https://toys.lerdorf.com/archives/38-The-no-framework-PHP-MVC-framework.html)

Had to add categories.txt, 'items' table creation with correct schema,
and [yui](https://en.wikipedia.org/wiki/YUI_Library)-0.11.3
([Aug. 2006](http://web.archive.org/web/20180925230201/https://yuiblog.com/blog/2006/08/28/yui-release-113)) files
(2.9.0 also worked but I could not find a reason to keep them)

This PoC works by some definition of work, though UI is creepy, and I can't help but notice that YUI was
[released](http://web.archive.org/web/20180925230201/https://yuiblog.com/blog/2006/02/13/the-yahoo-user-interface-library/)
less then 2 weeks before the "no-framework PHP MVC" post.

The missing 'ctime' field in the original author's comment
is a perfect example of misleading, and thus undesirable code comments. Dropped this comment for good.

Note: had to `apt install --no-install-recommends php-apcu php5.6-sqlite3` to complement my Ubuntu PHP setup.
Again APC use seems [unjustified and plain ugly](https://github.com/mz0/no-framework-PHP/blob/23e0723e29c234baaf0d0cf70872876c0fc0f361/model/db.inc#L23).

## Original tree layout
[thanks to archive.org](http://web.archive.org/web/20080920105853/http://talks.php.net/presentations/slides/mvc/example/)
```
tree -sD --timefmt='%F %R'
.
├── add.php         2006-03-30 11:12 1k
├── add_c.inc       2006-03-01 21:10 1k
├── categories.txt  2006-01-24 18:32   49
├── common.js       2006-04-21 02:19 5k
├── model/          2006-07-14 04:52
│   ├── db.inc      2006-03-04 10:11  771
│   ├── example.db  2006-02-27 15:11 2k
│   ├── items.inc   2006-03-04 10:11 2k
│   └── schema.sql  2006-01-24 18:32  186
├── styles.css      2006-02-25 00:06 1k
├── ui.inc          2006-03-30 11:12  882
└── yui/
    ├── animation.js
    ├── connection.js
    ├── dom.js
    ├── event.js
    └── yahoo.js
```
