# WTF is a "no-framework PHP MVC"?

Essential code taken from [27.02.2006 "The no-framework PHP MVC framework" by
Rasmus Lerdorf](https://toys.lerdorf.com/archives/38-The-no-framework-PHP-MVC-framework.html)

I could not find this code besides author's page and having difficulty evaluating
author's design decision, decided to assemble it in a runnable form to study that.

Had to add categories.txt, 'items' table creation with correct schema,
and [yui](https://en.wikipedia.org/wiki/YUI_Library)-0.11.3
([Aug. 2006](http://web.archive.org/web/20180925230201/https://yuiblog.com/blog/2006/08/28/yui-release-113)) files
(2.9.0 also worked but I could not find a reason to keep them)

This PoC works by some definition of work, though UI is creepy, and I can't help but notice that YUI was
[released](http://web.archive.org/web/20180925230201/https://yuiblog.com/blog/2006/02/13/the-yahoo-user-interface-library/)
less then 2 weeks before the "no-framework PHP MVC" post.

The missing 'ctime' field [WTF](https://github.com/mz0/no-framework-PHP/blob/master/model/items.inc#L8)
(missing in author's listing) is a perfect example of misleading (and for this reason undesirable) code comments.

Note: had to `apt install --no-install-recommends php-apcu php5.6-sqlite3` to complement my Ubuntu PHP setup.
Again APC use seems [unjustified and plain ugly](https://github.com/mz0/no-framework-PHP/blob/23e0723e29c234baaf0d0cf70872876c0fc0f361/model/db.inc#L23).

## Original tree layout approximation
[thanks to archive.org](http://web.archive.org/web/20080920105853/http://talks.php.net/presentations/slides/mvc/example/)
```
tree -sD --timefmt='%FT%RZ'
.
├── add.php         1405 2006-03-30T11:12Z
├── add_c.inc       1347 2006-03-01T21:10Z
├── categories.txt    49 2006-01-24T18:32Z
├── common.js       5k   2006-04-21T02:19Z
├── model/               2006-03-11T02:11Z
│   ├── db.inc       771 2006-03-04T10:11Z
│   ├── example.db  2k   2006-02-27T15:11Z
│   ├── items.inc   2442 2006-03-04T10:11Z
│   └── schema.sql   186 2006-01-24T18:32Z
├── styles.css      1276 2006-02-25T00:06Z
├── ui.inc           882 2006-03-30T11:12Z
└── yui/
    ├── animation.js
    ├── connection.js
    ├── dom.js
    ├── event.js
    └── yahoo.js
```
