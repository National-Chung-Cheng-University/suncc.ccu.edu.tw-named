;
;	laputa: /var/named/named.hosts.cc
;
;	laputa.ccu.edu.tw zone hosts file for cc.ccu.edu.tw
;
$ORIGIN	nyc.cc.ccu.edu.tw.
$TTL	3600
@       IN      SOA 	suncc.ccu.edu.tw.     root.suncc.ccu.edu.tw.  (
			2009061003   ; Serial
			21600	     ; Refresh	 6 hours
			3600	     ; Retry	 1 hour
			1209600      ; Expire	14 days
			172800 )     ; Minimum	 2 days
		IN	A	140.123.19.230
		IN	NS	suncc.ccu.edu.tw.
		IN	NS	ccunix.ccu.edu.tw.
		IN	MX 1	ASPMX.L.GOOGLE.COM.
		IN	MX 5	ALT1.ASPMX.L.GOOGLE.COM.
		IN	MX 5	ALT2.ASPMX.L.GOOGLE.COM.
		IN	MX 10	ASPMX2.GOOGLEEMAIL.COM.
		IN	MX 10	ASPMX3.GOOGLEEMAIL.COM.

googlefffffffff8b751ee	IN	CNAME	google.com.
;;;mail			IN	CNAME	ghs.google.com.
mail			IN	CNAME	ghs.l.google.com.

