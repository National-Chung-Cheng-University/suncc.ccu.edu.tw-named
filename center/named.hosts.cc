;
;	laputa: /var/named/named.hosts.cc
;
;	laputa.ccu.edu.tw zone hosts file for cc.ccu.edu.tw
;
$ORIGIN	cc.ccu.edu.tw.
$TTL	360000
@       IN      SOA 	suncc.ccu.edu.tw.     root.suncc.ccu.edu.tw.  (
			2009061003   ; Serial
			21600	     ; Refresh	 6 hours
			3600	     ; Retry	 1 hour
			1209600      ; Expire	14 days
			172800 )     ; Minimum	 2 days
		IN	NS	suncc.ccu.edu.tw.
		IN	NS	ccunix.ccu.edu.tw.
		IN	NS	dns2.ccu.edu.tw.

; room director
director	IN	A	140.123.19.15

; room 312
;chang		IN	A	140.123.19.21
mars		IN	A	140.123.19.22
;mars2		IN	A	140.123.19.23
;tsices-3f	IN	A	140.123.19.26
;tsices-bsd	IN	A	140.123.19.27
;tsices-nb	IN	A	140.123.19.28
;tsices-nt	IN	A	140.123.19.29
;linux9		IN	A	140.123.19.30


taco		IN	A	140.123.19.31
smart		IN	A	140.123.19.32
		IN      MX 0    smart.cc.ccu.edu.tw.
		IN      MX 10   relay.ccu.edu.tw.
		IN      MX 100  relay.edu.tw.
figter		IN	A	140.123.19.33
companion	IN	A	140.123.19.34
axelrod 	IN	A	140.123.19.47
rts		IN	A	140.123.19.48
tswang		IN	A	140.123.19.49
;ntsrv-hp	IN	A	140.123.20.56
;

; room 319
jason 		IN	A	140.123.19.52
;asen 		IN	A	140.123.19.53
posen 		IN	A	140.123.19.54
jsguo		IN	A	140.123.19.56
guo		IN	A	140.123.19.57
amigo		IN	A	140.123.19.58
huang3		IN	A	140.123.19.59
steve70		IN	A	140.123.19.70
;steve71		IN	A	140.123.19.71
steve72		IN	A	140.123.19.72
steve73		IN	A	140.123.19.73
steve74		IN	A	140.123.19.74
steve75		IN	A	140.123.19.75


; room 219
ccuexchange	IN	A	140.123.19.84
		IN	MX 0	ccuexchange.cc.ccu.edu.tw.
printers	IN	A	140.123.11.92

lucy		IN	A	140.123.14.245

; room 121
netgrd		IN	A	140.123.19.101
academic	IN	CNAME	netgrd.cc.ccu.edu.tw.
account		IN	CNAME	netgrd.cc.ccu.edu.tw.
project		IN	CNAME	netgrd.cc.ccu.edu.tw.
person		IN	CNAME	netgrd.cc.ccu.edu.tw.
graduate	IN	CNAME	netgrd.cc.ccu.edu.tw.
course		IN	CNAME	netgrd.cc.ccu.edu.tw.
elite		IN	CNAME	netgrd.cc.ccu.edu.tw.

robert		IN	A	140.123.19.112
robert-1	IN	A	140.123.19.113
;
harmonica	IN	A	140.123.19.114
harmonicax	IN	A	140.123.19.116
;
obione		IN	A	140.123.19.117
;
; yoda is the testing site of center3, STOP!
yoda		IN	A	140.123.19.118
spike		IN	CNAME	yoda.cc.ccu.edu.tw.
moffice		IN	CNAME	yoda.cc.ccu.edu.tw.
vote		IN	CNAME	yoda.cc.ccu.edu.tw.
phpnuke		IN	CNAME	yoda.cc.ccu.edu.tw.
postnuke	IN	CNAME	yoda.cc.ccu.edu.tw.
groupware	IN	CNAME	yoda.cc.ccu.edu.tw.
horde		IN	CNAME	yoda.cc.ccu.edu.tw.
;
nidalap-3	IN	A	140.123.19.119
;
huang-1		IN	A	140.123.19.120
huang-2		IN	A	140.123.19.121
huang-3		IN	A	140.123.19.122
;
victora		IN	A	140.123.19.123
victora-1	IN	A	140.123.19.124
;
tina-1		IN	A	140.123.19.127
tina-2		IN	A	140.123.19.128
tina-3		IN	A	140.123.19.129
;
r121-x01	IN	A	140.123.19.131
r121-x02	IN	A	140.123.19.132
r121-x03	IN	A	140.123.19.133
;
hellfire	IN	A	140.123.19.134
ghosts		IN	A	140.123.19.135
ghosts-lab	IN	CNAME	ghosts.cc.ccu.edu.tw.
life-edu	IN	CNAME	ghosts.cc.ccu.edu.tw.
;
r121-x06	IN	A	140.123.19.136
ieeksh		IN	A	140.123.19.139
printsrv-2100	IN	A	140.123.19.140
printsrv-5000	IN	A	140.123.19.141
;

; room 122
;; welearn		IN	A	140.123.19.208
;; ale		IN	A	140.123.19.209
;; ale2		IN	A	140.123.19.196
ccu-nben	IN	A	140.123.19.190
nbenproxy	IN	A	140.123.19.193
wen205		IN	A	140.123.19.205
wen206		IN	A	140.123.19.206
webguider	IN	A	140.123.230.100
ale2		IN	A	140.123.230.101
ale		IN	A	140.123.230.10
welearn		IN	A	140.123.230.20

;
dedu		IN	A	140.123.19.193

; room 124
liouyc-1	IN	A	140.123.19.151
liouyc-2	IN	A	140.123.19.152
;liouyc-3	IN	A	140.123.19.153
liouyc-4	IN	A	140.123.19.154
liouyc-5	IN	A	140.123.19.155
ycprint		IN	CNAME	liouyc-5.cc.ccu.edu.tw.
crh-1		IN	A	140.123.19.161
crh-2		IN	A	140.123.19.162
crh-3		IN	A	140.123.19.163
changrh-ftp	IN	A	140.123.19.164
hicsys		IN	A	140.123.19.165
nnm-cw2k	IN	A	211.79.63.53

; room 317
enid		IN	A	140.123.19.210
lacky		IN	A	140.123.19.211
info		IN	A	140.123.19.212
tychu		IN	A	140.123.19.213
mingling	IN	A	140.123.19.214
sheena		IN	A	140.123.19.216
exchange	IN	A	140.123.19.217
yukico		IN	A	140.123.19.218
gardener	IN	A	140.123.19.221
blacky		IN	CNAME	info.cc.ccu.edu.tw.
unixdb		IN	A	140.123.19.229
nyc		IN	A	140.123.19.230

nyc		IN	NS	suncc.ccu.edu.tw.
   		IN	NS	ccunix.ccu.edu.tw.

cia		IN	A	140.123.19.220

; room 316 - mis
mis		IN	A	140.123.26.150
misshare	IN	A	140.123.26.151
miswww1		IN	A	140.123.26.152
miswww2		IN	A	140.123.26.153
miswww3		IN	A	140.123.26.154

; room 121
alpha1		IN	A	140.123.30.31
alpha2		IN	A	140.123.30.32
www0		IN	A	140.123.30.51
www1		IN	A	140.123.30.52
www2		IN	A	140.123.30.53
www3		IN	A	140.123.30.54
www4		IN	A	140.123.30.55
gamma1		IN	A	140.123.30.56
gamma2		IN	A	140.123.30.57
gamma3		IN	A	140.123.30.58
gamma4		IN	A	140.123.30.59
gamma5		IN	A	140.123.30.60
;
;
;
; 140.123.29.0
cc100                   A       140.123.29.100
cc101                   A       140.123.29.101
cc102                   A       140.123.29.102
cc103                   A       140.123.29.103
cc104                   A       140.123.29.104
cc105                   A       140.123.29.105
cc106                   A       140.123.29.106
cc107                   A       140.123.29.107
cc108                   A       140.123.29.108
cc109                   A       140.123.29.109
cc110                   A       140.123.29.110
cc111                   A       140.123.29.111
		IN	MX	0	cc111.cc.ccu.edu.tw.
cc112                   A       140.123.29.112
cc113                   A       140.123.29.113
cc114                   A       140.123.29.114
cc115                   A       140.123.29.115
cc116                   A       140.123.29.116
cc117                   A       140.123.29.117
cc118                   A       140.123.29.118
cc119                   A       140.123.29.119
cc120                   A       140.123.29.120
cc121                   A       140.123.29.121
cc122                   A       140.123.29.122
cc123                   A       140.123.29.123
cc124                   A       140.123.29.124
cc125                   A       140.123.29.125
cc126                   A       140.123.29.126
cc127                   A       140.123.29.127
cc128                   A       140.123.29.128
cc129                   A       140.123.29.129
cc130                   A       140.123.29.130
cc131                   A       140.123.29.131
cc132                   A       140.123.29.132
cc133                   A       140.123.29.133
cc134                   A       140.123.29.134
cc135                   A       140.123.29.135
cc136                   A       140.123.29.136
cc137                   A       140.123.29.137
cc138                   A       140.123.29.138
cc139                   A       140.123.29.139
cc140                   A       140.123.29.140
cc141                   A       140.123.29.141
cc142                   A       140.123.29.142
cc143                   A       140.123.29.143
cc144                   A       140.123.29.144
cc145                   A       140.123.29.145
cc146                   A       140.123.29.146
cc147                   A       140.123.29.147
cc148                   A       140.123.29.148
cc149                   A       140.123.29.149
cc150                   A       140.123.29.150
cc151                   A       140.123.29.151
cc152                   A       140.123.29.152
cc153                   A       140.123.29.153
cc154                   A       140.123.29.154
cc155                   A       140.123.29.155
cc156                   A       140.123.29.156
cc157                   A       140.123.29.157
cc158                   A       140.123.29.158
cc159                   A       140.123.29.159
cc160                   A       140.123.29.160
cc161                   A       140.123.29.161
cc162                   A       140.123.29.162
cc163                   A       140.123.29.163
cc164                   A       140.123.29.164
cc165                   A       140.123.29.165
cc166                   A       140.123.29.166
cc167			A       140.123.29.167
cc168			A       140.123.29.168
cc169			A       140.123.29.169
cc170                   A       140.123.29.170
cc171                   A       140.123.29.171
cc172                   A       140.123.29.172
cc173                   A       140.123.29.173
cc174                   A       140.123.29.174
cc175                   A       140.123.29.175
cc176                   A       140.123.29.176
cc177                   A       140.123.29.177
cc178                   A       140.123.29.178
cc179                   A       140.123.29.179
cc180                   A       140.123.29.180
cc181                   A       140.123.29.181
cc182                   A       140.123.29.182
cc183                   A       140.123.29.183
cc184                   A       140.123.29.184
cc185                   A       140.123.29.185
cc186                   A       140.123.29.186
cc187                   A       140.123.29.187
cc188                   A       140.123.29.188
cc189                   A       140.123.29.189
cc190                   A       140.123.29.190
cc191                   A       140.123.29.191
cc192                   A       140.123.29.192
cc193                   A       140.123.29.193
cc194                   A       140.123.29.194
cc195                   A       140.123.29.195
cc196                   A       140.123.29.196
cc197                   A       140.123.29.197
cc198                   A       140.123.29.198
cc199                   A       140.123.29.199
cc200                   A       140.123.29.200
cc201                   A       140.123.29.201
cc202                   A       140.123.29.202
cc203                   A       140.123.29.203
cc204                   A       140.123.29.204
cc205                   A       140.123.29.205
cc206                   A       140.123.29.206
cc207                   A       140.123.29.207
cc208                   A       140.123.29.208
cc209                   A       140.123.29.209
cc210                   A       140.123.29.210
cc211                   A       140.123.29.211
cc212                   A       140.123.29.212
cc213                   A       140.123.29.213
cc214                   A       140.123.29.214
cc215                   A       140.123.29.215
cc216                   A       140.123.29.216
cc217                   A       140.123.29.217
cc218                   A       140.123.29.218
cc219                   A       140.123.29.219
cc220                   A       140.123.29.220
cc221                   A       140.123.29.221
cc222                   A       140.123.29.222
cc223                   A       140.123.29.223
cc224                   A       140.123.29.224
cc225                   A       140.123.29.225
cc226                   A       140.123.29.226
cc227                   A       140.123.29.227
cc228                   A       140.123.29.228
cc229                   A       140.123.29.229
cc230                   A       140.123.29.230
cc231                   A       140.123.29.231
cc232                   A       140.123.29.232
cc233                   A       140.123.29.233
cc234                   A       140.123.29.234
cc235                   A       140.123.29.235
cc236                   A       140.123.29.236
cc237                   A       140.123.29.237
cc238                   A       140.123.29.238
cc239                   A       140.123.29.239
cc240                   A       140.123.29.240
cc241                   A       140.123.29.241
cc242                   A       140.123.29.242
cc243                   A       140.123.29.243
cc244                   A       140.123.29.244
cc245                   A       140.123.29.245
cc246                   A       140.123.29.246
cc247                   A       140.123.29.247
cc248                   A       140.123.29.248
cc249                   A       140.123.29.249
cc250                   A       140.123.29.250
cc251                   A       140.123.29.251
cc252                   A       140.123.29.252
cc253                   A       140.123.29.253
cc254                   A       140.123.29.254
cc50                    A       140.123.29.50
cc51                    A       140.123.29.51
cc52                    A       140.123.29.52
cc53                    A       140.123.29.53
cc54                    A       140.123.29.54
cc55                    A       140.123.29.55
cc56                    A       140.123.29.56
cc57                    A       140.123.29.57
cc58                    A       140.123.29.58
cc59                    A       140.123.29.59
cc60                    A       140.123.29.60
cc61                    A       140.123.29.61
cc62                    A       140.123.29.62
cc63                    A       140.123.29.63
cc64                    A       140.123.29.64
cc65                    A       140.123.29.65
cc66                    A       140.123.29.66
cc67                    A       140.123.29.67
cc68                    A       140.123.29.68
cc69                    A       140.123.29.69
cc70                    A       140.123.29.70
cc71                    A       140.123.29.71
cc72                    A       140.123.29.72
cc73                    A       140.123.29.73
cc74                    A       140.123.29.74
cc75                    A       140.123.29.75
cc76                    A       140.123.29.76
cc77                    A       140.123.29.77
cc78                    A       140.123.29.78
cc79                    A       140.123.29.79
cc80                    A       140.123.29.80
cc81                    A       140.123.29.81
cc82                    A       140.123.29.82
cc83                    A       140.123.29.83
cc84                    A       140.123.29.84
cc85                    A       140.123.29.85
cc86                    A       140.123.29.86
cc87                    A       140.123.29.87
cc88                    A       140.123.29.88
cc89                    A       140.123.29.89
cc90                    A       140.123.29.90
cc91                    A       140.123.29.91
cc92                    A       140.123.29.92
cc93                    A       140.123.29.93
cc94                    A       140.123.29.94
cc95                    A       140.123.29.95
cc96                    A       140.123.29.96
cc97                    A       140.123.29.97
cc98                    A       140.123.29.98
cc99                    A       140.123.29.99
;

