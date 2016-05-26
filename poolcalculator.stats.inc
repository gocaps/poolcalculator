<?php

define('LAST_UPDATE', 'No updates yet... tourney hasn\'t started...');

# TEAM 1
define('FRANCE_WINS', 2);
define('FRANCE_DRAWS', 1);
define('FRANCE_BNS', 0);

define('GERMANY_WINS', 3);
define('GERMANY_DRAWS', 0);
define('GERMANY_BNS', 1);

define('SPAIN_WINS', 1);
define('SPAIN_DRAWS', 1);
define('SPAIN_BNS', 0);


#TEAM 2
define('ENGLAND_WINS', 0);
define('ENGLAND_DRAWS', 2);
define('ENGLAND_BNS', 0);

define('BELGIUM_WINS', 2);
define('BELGIUM_DRAWS', 1);
define('BELGIUM_BNS', 0);

define('ITALY_WINS', 3);
define('ITALY_DRAWS', 0);
define('ITALY_BNS', 1);

define('FRANCE', serialize(array(FRANCE_WINS, FRANCE_DRAWS, FRANCE_BNS)));
define('GERMANY', serialize(array(GERMANY_WINS, GERMANY_DRAWS, GERMANY_BNS)));
define('SPAIN', serialize(array(SPAIN_WINS, SPAIN_DRAWS, SPAIN_BNS)));
define('ENGLAND', serialize(array(ENGLAND_WINS, ENGLAND_DRAWS, ENGLAND_BNS)));
define('BELGIUM', serialize(array(BELGIUM_WINS, BELGIUM_DRAWS, BELGIUM_BNS)));
define('ITALY', serialize(array(ITALY_WINS, ITALY_DRAWS, ITALY_BNS)));
