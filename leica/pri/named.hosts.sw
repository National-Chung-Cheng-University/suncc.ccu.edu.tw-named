;
;	ccunix: /var/named/named.hosts
;
;	ccunix.ccu.edu.tw zone hosts file for server ccunix
;
$ORIGIN	sw.ccu.edu.tw.
@       IN      SOA 	sw.ccu.edu.tw.     root.sw.ccu.edu.tw.  (
			1997081701   ; Serial
			21600	     ; Refresh	 6 hours
			3600	     ; Retry	 1 hour
			1209600      ; Expire	14 days
			172800 )     ; Minimum	 2 days
		IN	A	140.123.181.5
            	IN      NS      leica.ccu.edu.tw.
		IN	NS	suncc.ccu.edu.tw.


isw2		IN	A	140.123.181.2
		IN	MX	0 isw2.sw.ccu.edu.tw.
gopher		IN	CNAME	isw2.sw.ccu.edu.tw.

isw5 		IN	A	140.123.181.5
		IN	MX	0 isw5.sw.ccu.edu.tw.
ns		IN	CNAME	isw5.sw.ccu.edu.tw.

isw6		IN	A	140.123.181.6
		IN	MX	0 isw6.sw.ccu.edu.tw.


