;
;	leica: /var/named/named.rev
;
;	sw.ccu zone reverse address hosts file for server ccunix
;	140.123.181
;
$ORIGIN 181.123.140.in-addr.arpa.
@       IN      SOA     sw.ccu.edu.tw.       root.sw.ccu.edu.tw.  (
			1997102201   ; Serial
			21600	     ; Refresh	 6 hours
			3600         ; Retry	 1 hour
			1209600      ; Expire	14 days
			172800 )     ; Minimum	 2 days
	IN	NS	leica.ccu.edu.tw.
	IN	NS	suncc.ccu.edu.tw.


2	IN	PTR	isw2.sw.ccu.edu.tw.
5	IN	PTR	isw5.sw.ccu.edu.tw.
	IN	PTR	sw.ccu.edu.tw.
6	IN	PTR	isw6.sw.ccu.edu.tw.

