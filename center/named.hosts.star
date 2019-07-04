;
;	ccunix: /var/named/named.hosts
;
;	ccunix.ccu.edu.tw zone hosts file for server ccunix
;
$ORIGIN	star.ccu.edu.tw.
$TTL	360000

@       IN      SOA 	suncc.ccu.edu.tw.     root.suncc.ccu.edu.tw.  (
			2008090801   ; Serial
			21600	     ; Refresh	 6 hours
			3600	     ; Retry	 1 hour
			1209600      ; Expire	14 days
			172800 )     ; Minimum	 2 days
		IN	NS	suncc.ccu.edu.tw.
		IN	A	140.123.27.25


ftp		IN	A	140.123.27.30

www1		IN	A	140.123.27.25
www		IN	A	140.123.27.25

passage		IN	A	140.123.27.51

