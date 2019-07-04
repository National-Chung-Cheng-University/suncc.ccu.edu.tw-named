; named.boot

directory	/var/named

; type    domain		source host/file		backup file
;
primary		0.0.127.in-addr.arpa		named.local
cache		.				named.ca
;
primary		adm.ccu.edu.tw			pri/named.hosts.adm
;
;
primary		fol.ccu.edu.tw			pri/named.hosts.fol
primary		apollo.ccu.edu.tw		pri/named.hosts.apollo
primary		english.ccu.edu.tw		pri/named.hosts.english
primary		42.123.140.in-addr.arpa		pri/named.rev.fol
;
primary		sport.ccu.edu.tw		pri/named.hosts.sport
primary		226.123.140.in-addr.arpa	pri/named.rev.sport
;
primary		chem.ccu.edu.tw			pri/named.hosts.chem
primary		76.123.140.in-addr.arpa		pri/named.rev.chem
;
secondary    ccu.edu.tw              140.123.7.2 140.123.1.2    sec/ccu.zone
secondary    123.140.in-addr.arpa    140.123.7.2 140.123.1.2    sec/ccu.rev
;
secondary    ccunix.ccu.edu.tw       140.123.3.5 140.123.2.5    sec/ccunix.zone 
secondary    2.123.140.in-addr.arpa  140.123.3.5 140.123.2.5    sec/ccunix.rev.2
secondary    3.123.140.in-addr.arpa  140.123.3.5 140.123.2.5    sec/ccunix.rev.3
secondary    4.123.140.in-addr.arpa  140.123.3.5 140.123.2.5    sec/ccunix.rev.4
;
secondary    sw.ccu.edu.tw		sec/named.hosts.sw
secondary    181.123.140.in-addr.arpa	sec/named.rev.sw
;
secondary    cy.edu.tw       140.123.254.1  140.123.7.2	sec/cy.zone 
secondary    dorm.ccu.edu.tw 140.123.254.21 140.123.7.2	sec/dorm.zone 
;
secondary    96.28.163.in-addr.arpa  140.123.7.2 140.123.1.2	sec/tanet-163-28.rev.96
secondary    100.28.163.in-addr.arpa 140.123.7.2 140.123.1.2	sec/tanet-163-28.rev.100
;
stub    edu.tw		140.123.7.2 140.111.1.2	stub/edu.zone
;
stub    gov.tw		140.123.7.2 168.95.1.1	stub/gov.zone

stub    org.tw		140.123.7.2 140.92.1.50	stub/org.zone
stub    com.tw		140.123.7.2 140.92.1.50	stub/com.zone
stub    net.tw		140.123.7.2 140.92.1.50	stub/net.zone
stub    hinet.net	140.123.7.2 168.95.1.1	stub/hinet.zone
;
stub	freebsd.org	168.95.192.1 204.216.27.3	stub/freebsd.zone

