//Numpy array shape [144, 20]
//Min -1.179244875908
//Max 0.797997951508
//Number of zeros 0

#ifndef W7_H_
#define W7_H_

namespace CICADA_v2p1{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  weight7_t w7[2880];
#else
  weight7_t w7[2880] = {  -0.085117,    0.026145,   -0.108147,   -0.164113,   -0.190142,    0.165254,    0.117488,   -0.025911,   -0.196510,   -0.156152,   -0.071754,   -0.188872,   -0.017327,    0.041600,    0.191837,   -0.064731,   -0.060141,    0.039160,    0.053363,   -0.002237,   -0.502677,   -0.065278,   -0.065299,   -0.406539,   -0.336940,   -0.046169,   -0.682848,    0.142984,   -0.202569,    0.159470,   -0.017682,   -0.138291,   -0.017910,    0.047697,    1.283060,   -0.068671,   -0.001317,    0.012367,   -0.032191,   -0.538330,    0.043995,    0.011876,   -0.242445,   -0.385861,   -0.752659,    0.009510,   -0.039911,   -0.076908,    0.040960,    0.051814,   -0.168547,    0.158958,   -0.208943,    0.088946,    0.949243,    0.258828,    0.094934,   -0.169594,    0.239413,   -0.027746,    0.079469,   -0.122414,    0.013620,    0.086793,   -0.004192,    0.186755,    0.039035,   -0.016798,   -0.110319,   -0.248907,   -0.020453,   -0.125289,   -0.092591,    0.059095,    0.163801,    0.347293,    0.080948,   -0.042091,   -0.049460,   -0.000868,    0.104539,    0.037167,    0.093202,   -0.361667,   -0.398823,    0.044365,   -0.880542,   -0.013102,    0.040970,   -0.149536,   -0.273140,    0.155819,   -0.089524,   -0.036333,    1.634831,    0.065575,   -0.005819,   -0.008951,   -0.109980,   -0.341268,   -0.110550,    0.102518,   -0.178896,   -0.003347,    0.175968,    0.165961,   -0.172410,   -0.049296,   -0.055903,   -0.100631,    0.024595,    0.112230,    0.064032,   -0.094541,    0.668876,    0.391854,    0.059320,    0.096548,   -0.029246,    0.040768,    0.074977,    0.192916,    0.052877,   -0.404780,   -0.221083,    0.050739,    0.141429,   -0.052169,   -0.040669,   -0.049420,   -0.198704,    0.057880,   -0.043534,    0.107189,    0.551619,    0.176273,   -0.071007,   -0.050347,   -0.142737,    0.004775,   -0.246698,    0.049813,   -0.149619,   -0.284971,   -0.594496,    0.141765,    0.324934,   -0.081812,   -0.007095,    0.188880,    0.060373,    0.048227,    0.095272,    0.232025,    1.849318,    1.396585,   -0.018155,    0.086813,    0.153591,   -0.034524,    0.165049,    0.133644,   -0.113567,    0.103840,    0.219441,   -0.006241,    0.198105,    0.040183,    0.010994,   -0.261342,   -0.038086,   -0.195807,   -0.028681,   -0.047451,    1.043435,    0.312395,    0.122667,    0.066745,    0.100259,   -0.059232,    0.042839,   -0.055074,   -0.236768,    0.203681,    0.203149,    0.143732,    0.062730,   -0.085198,   -0.130769,   -0.066466,   -0.323139,   -0.171512,   -0.130660,    0.175662,    0.701747,    0.368589,   -0.031845,   -0.079534,    0.031841,   -0.068247,    0.089213,    0.264944,    0.103231,    0.010863,    0.065945,    0.071400,   -0.185751,   -0.279472,   -0.008632,   -0.070440,    0.166061,    0.181264,   -0.010404,    0.174121,    1.753745,    0.745715,   -0.080290,    0.224175,   -0.090620,    0.181402,   -0.114943,   -0.134193,   -0.098414,   -0.199965,   -1.022315,    0.142830,   -0.068564,   -0.033175,    0.092210,   -0.511101,   -0.201554,   -0.076123,   -0.101932,    0.172883,    0.991367,    0.265114,   -0.001011,   -0.071330,   -0.058831,    0.173322,    0.152498,    0.134730,   -0.243434,    0.072640,    0.185259,    0.010873,   -0.345588,   -0.116579,   -0.048004,   -0.059513,   -0.048283,   -0.017724,   -0.051718,    0.187785,    0.373593,    0.201415,   -0.050124,   -0.224694,   -0.025034,   -0.167479,    0.031015,   -0.002575,   -0.066793,   -0.459919,   -0.080681,   -0.074239,   -0.150880,    0.037018,   -0.200640,   -0.065100,   -0.023106,   -0.037312,   -0.051314,    0.028532,    0.827705,    0.187062,    0.005390,   -0.066384,    0.034703,   -0.187479,   -0.088189,   -0.022300,    0.073875,   -0.397831,   -0.245024,    0.183660,   -0.520135,   -0.162454,    0.195565,   -0.490666,    0.007022,    0.019742,    0.012765,   -0.026137,    0.812927,    0.173178,    0.040870,   -0.017234,    0.041037,   -0.070217,    0.087925,    0.110367,    0.006498,    0.147208,    0.189148,    0.130010,   -0.244180,   -0.266114,    0.028529,    0.005747,   -0.112936,   -0.204144,    0.079910,   -0.065122,    0.005663,    0.221585,    0.081320,    0.082984,   -0.046968,   -0.151786,   -0.135091,    0.051497,   -0.089522,   -0.446049,   -0.826382,   -0.056909,   -0.412125,    0.033065,    0.260231,   -0.015096,    0.144011,   -0.088719,   -0.168663,   -0.060964,    1.966437,   -0.072329,   -0.005047,    0.050311,    0.010524,   -0.818863,   -0.133704,    0.266494,   -0.035469,   -0.185358,   -1.284495,    0.096283,   -0.075193,    0.181466,    0.106229,    0.226681,   -0.020029,   -0.032352,   -0.136680,    0.043387,    0.796353,    0.211453,   -0.048340,   -0.039283,   -0.147557,   -0.018965,   -0.120129,    0.227606,   -0.318338,   -0.042659,   -0.175838,   -0.142636,    0.089136,   -0.154604,   -0.129131,   -0.071717,   -0.091388,   -0.343780,   -0.003132,    0.087381,    0.234928,    0.150757,    0.024241,   -0.037566,   -0.182373,    0.366677,    0.002973,   -0.210102,   -0.274531,   -0.567759,   -1.024519,    0.015895,   -0.265053,    0.050083,    0.039322,    0.044045,    0.040236,   -0.004133,   -0.101678,    0.037723,    1.922103,    0.541297,    0.256362,   -0.055874,   -0.105089,   -0.023806,   -0.190977,    0.156933,   -0.126415,    0.164794,   -0.031071,    0.088207,   -0.342547,   -0.215976,   -0.028901,    0.273067,    0.133104,    0.015132,   -0.202085,   -0.008561,    0.425799,    0.409866,    0.024079,   -0.159270,   -0.167771,   -0.004608,    0.031576,    0.193600,   -0.092064,   -0.057720,   -0.093342,   -0.017873,    0.009368,   -0.138428,   -0.099988,   -0.074058,    0.031094,   -0.166005,   -0.056252,    0.092567,    0.206339,    0.123457,   -0.031692,    0.090281,    0.135838,    0.148581,   -0.092252,   -0.071942,   -0.069009,   -0.392924,   -0.489183,   -0.097400,   -0.249549,    0.274111,   -0.072152,   -0.212242,   -0.105284,    0.122697,   -0.007873,    0.172264,    1.730957,    0.806317,    0.186719,   -0.110560,   -0.086038,   -0.310650,   -0.091789,    0.150195,    0.109700,   -0.485021,   -0.586760,    0.145987,   -0.452420,   -0.097604,    0.113193,   -0.145509,   -0.096102,   -0.228860,    0.035915,    0.015580,    0.704923,    0.402174,   -0.015598,    0.078962,   -0.141512,   -0.699030,   -0.050667,   -0.067035,   -0.098187,   -0.246538,   -0.105615,   -0.078153,    0.100860,    0.004135,   -0.169860,   -0.084914,   -0.087385,   -0.057923,    0.113060,    0.062342,    0.479386,    0.151319,    0.120911,   -0.262806,   -0.288585,   -0.482203,   -0.345093,   -0.027305,   -0.051581,   -0.150924,   -0.613726,    0.120028,    0.100066,    0.062855,    0.036086,    0.026590,    0.025226,    0.160499,    0.244021,    0.108567,    1.901663,    0.025517,   -0.002795,    0.021705,   -0.255405,   -0.559331,    0.018992,    0.033054,   -0.062767,    0.222855,    0.128908,    0.176322,   -0.661783,    0.085673,   -0.131975,   -0.336749,   -0.130145,    0.169032,   -0.008965,    0.201508,    0.927974,    0.452926,   -0.118641,   -0.018942,    0.115922,    0.083105,    0.032072,    0.011486,   -0.113814,   -0.301961,   -0.123506,    0.000348,   -0.244371,   -0.123222,   -0.177226,   -0.159824,    0.055502,   -0.029998,   -0.101000,    0.028123,    0.667357,    0.203479,    0.066819,   -0.014118,    0.006302,   -0.315592,   -0.233090,    0.114737,    0.192763,    0.056331,   -0.796349,   -0.014881,   -0.171534,   -0.112224,    0.047602,   -0.029446,   -0.152018,    0.108503,   -0.035793,    0.122617,    2.055658,    0.067733,    0.051583,   -0.107849,    0.092577,   -0.337395,    0.121384,    0.095683,   -0.024697,    0.136260,    0.097361,    0.137266,   -0.457980,   -0.085179,   -0.066515,   -0.294247,   -0.037997,    0.205755,   -0.053637,    0.132614,    1.092189,    0.294946,   -0.075949,   -0.215170,   -0.042798,   -0.091753,   -0.156560,    0.026707,   -0.005826,    0.284234,    0.199692,    0.006549,   -0.115926,   -0.148949,   -0.050989,   -0.127629,   -0.089673,    0.010957,   -0.116465,    0.086062,    0.432014,    0.285283,    0.020654,   -0.007807,    0.003501,    0.007913,   -0.189623,    0.036264,    0.181577,    0.111697,    0.012964,    0.132633,   -0.141210,   -0.047393,   -0.109796,   -0.126298,   -0.020917,   -0.329783,   -0.191145,    0.048199,    2.411986,    0.258922,    0.028315,   -0.012270,   -0.100970,   -0.196060,   -0.220803,    0.210297,    0.071946,   -0.116660,   -0.670466,    0.231960,   -0.531558,   -0.037878,    0.021354,   -0.537602,   -0.068036,    0.001345,   -0.308231,   -0.078529,    1.027967,    0.649838,   -0.019090,    0.058189,   -0.081548,   -0.572887,    0.045317,   -0.098881,   -0.141558,   -0.233916,   -0.156046,    0.210674,   -0.177232,   -0.137696,   -0.028570,   -0.029535,   -0.162797,   -0.085889,   -0.202321,    0.019235,    0.107589,    0.160982,    0.001898,   -0.159138,   -0.041912,   -0.362737,    1.082280,    0.253421,   -0.209924,    0.134785,    0.440265,    0.052748,   -0.625761,   -0.139471,   -0.154535,   -0.200517,   -0.019921,    0.030811,    0.069619,    0.172007,    2.468060,    1.027715,    0.079794,   -0.094743,    0.071261,   -0.062103,    0.254526,   -0.005981,   -0.139659,    0.081007,    0.233269,    0.242434,   -0.251685,    0.014950,    0.078875,   -0.357308,   -0.144849,   -0.072298,   -0.140565,    0.041110,    0.954768,    0.882399,    0.080604,    0.098035,   -0.037577,    0.053155,    0.054730,    0.173838,    0.090492,   -0.600859,   -0.545750,    0.093721,    0.185833,   -0.016469,   -0.094924,    0.028967,   -0.047829,   -0.160989,    0.052085,    0.013092,    0.705890,   -0.160513,   -0.016876,    0.029918,   -0.009752,    0.050551,   -0.239564,    0.244291,   -0.115298,   -0.370318,   -0.982212,    0.173104,    0.003890,    0.041867,   -0.093456,    0.008763,    0.024990,    0.419679,   -0.018889,    0.382682,    3.893651,   -0.230309,    0.287825,    0.027928,    0.099188,    0.159031,    0.109493,    0.332748,   -0.134674,    0.223649,    0.041874,    0.012780,    0.233113,    0.040147,   -0.066344,    0.245803,   -0.189148,   -0.016771,   -0.229487,    0.145974,    2.284371,    0.356768,    0.061562,    0.019716,    0.060922,    0.368447,    0.009347,   -0.041623,   -0.003521,   -0.110732,   -0.273502,    0.058610,    0.164823,   -0.077512,   -0.149751,   -0.106520,   -0.127394,    0.024940,   -0.081839,    0.089133,    0.342794,    0.254888,    0.033047,   -0.135373,   -0.066678,    0.058998,   -0.025499,    0.223565,    0.089038,   -0.393094,   -0.840211,    0.034998,    0.265272,    0.208456,    0.045261,   -0.195763,   -0.304372,   -0.024800,    0.036931,    0.139726,    2.767486,    1.605693,    0.100305,   -0.200093,   -0.143973,   -0.210350,   -0.118510,    0.138160,   -0.084755,   -0.572354,   -0.259414,    0.012247,    0.005999,    0.100330,    0.016842,   -0.016089,   -0.186929,   -0.065222,   -0.224746,    0.014213,    0.652579,    0.240723,    0.082188,   -0.077897,    0.110660,   -0.308881,    0.122870,   -0.018785,   -0.185295,    0.086198,   -0.240486,   -0.024288,    0.007259,   -0.144979,   -0.208307,   -0.145119,   -0.131486,   -0.157514,   -0.058237,    0.188988,    0.463227,    0.178806,    0.027676,    0.090422,   -0.185247,   -0.187612,    0.059916,    0.207051,    0.136217,    0.113484,   -0.338020,    0.046189,   -0.165836,    0.159398,   -0.163026,   -0.176463,    0.086270,    0.172240,    0.024288,    0.045910,    1.988535,    0.039683,    0.014654,    0.051341,   -0.289089,   -0.576259,    0.126999,   -0.018309,    0.066575,   -0.386060,   -0.468916,    0.072189,   -0.270258,   -0.049827,   -0.249388,    0.104551,   -0.143113,    0.077174,   -0.026574,    0.001390,    1.086664,    0.260142,    0.128448,   -0.054580,   -0.224121,   -0.890482,    0.034186,   -0.129176,   -0.324094,   -0.245375,   -0.406860,   -0.087500,   -0.103791,   -0.043331,    0.003226,    0.032479,   -0.193349,   -0.004540,   -0.034128,    0.164217,    0.607416,    0.258828,    0.138551,   -0.039115,   -0.337427,   -0.395826,   -0.102061,    0.046932,   -0.017982,   -0.173785,    0.388105,    0.030868,   -0.199338,   -0.052352,    0.043533,    0.098892,   -0.026844,    0.064270,   -0.099317,    0.133513,    0.715696,    0.016511,   -0.075004,    0.049053,   -0.023953,   -0.340333,   -0.108304,    0.071027,   -0.123557,   -0.006439,   -0.123506,   -0.004601,   -0.146113,    0.009588,   -0.142978,   -0.512467,    0.082641,   -0.053271,   -0.155814,   -0.012204,    1.243422,    0.170457,    0.104913,   -0.107805,   -0.150214,   -0.086744,   -0.035011,   -0.104520,    0.162299,   -0.010523,   -0.045418,   -0.003402,   -0.215609,    0.020915,   -0.059631,    0.060825,   -0.089160,   -0.099620,   -0.170394,    0.001565,    0.390580,    0.349076,    0.173239,   -0.169286,   -0.043807,   -0.120668,   -0.073028,   -0.127919,   -0.119244,   -0.612488,   -0.958790,    0.191090,   -0.006191,   -0.142947,    0.134145,   -0.055202,    0.077829,    0.037438,   -0.075367,    0.050044,    3.177817,   -0.071485,    0.019614,   -0.004727,   -0.081548,   -0.426210,   -0.018199,   -0.047713,   -0.041571,   -0.646014,   -1.211852,    0.096498,   -0.082370,    0.059708,    0.016993,   -0.183718,   -0.127344,    0.303484,    0.121074,    0.059107,    1.194530,    0.255639,    0.086901,   -0.188686,    0.152283,   -0.819965,   -0.015887,    0.068781,    0.012235,    0.209694,    0.289059,   -0.071697,   -0.220622,   -0.121868,    0.109364,   -0.039096,    0.037751,   -0.198147,   -0.053590,    0.077723,    0.170568,    0.433132,    0.132321,   -0.152589,   -0.118105,   -0.222537,   -0.113589,   -0.128627,    0.187511,    0.160568,   -0.015860,    0.197249,   -0.136991,    0.129260,   -0.070987,   -0.268047,   -0.238722,    0.135881,    0.081735,    0.068485,    2.403285,    1.252302,    0.106706,   -0.054396,    0.076543,    0.283272,    0.109988,    0.023558,   -0.068158,   -0.929397,   -0.962420,   -0.030560,   -0.087575,    0.111419,    0.076403,   -0.355303,   -0.044269,   -0.149752,    0.134648,    0.090126,    0.844692,    0.537264,    0.191251,   -0.106934,   -0.172240,   -0.762102,    0.099584,   -0.078961,   -0.266331,    0.180451,    0.136167,    0.118132,    0.052348,   -0.153524,    0.106440,   -0.212756,    0.024447,   -0.013213,   -0.137621,    0.031498,    0.378979,    0.369152,    0.124384,   -0.027180,   -0.003048,    0.437762,   -0.102094,   -0.039340,   -0.055547,   -0.336480,   -1.009869,    0.173606,   -0.670357,    0.232408,   -0.167156,   -0.016727,   -0.034230,    0.349006,    0.182792,   -0.002780,    1.000483,    0.056663,   -0.000630,    0.104425,   -0.013119,   -0.527211,   -0.078478,    0.055342,   -0.013966,    0.184875,    0.560573,    0.216034,   -0.226539,    0.166424,    0.060485,   -0.200109,   -0.066478,    0.028751,   -0.193949,    0.097939,   -0.102065,    1.941166,    0.195821,    0.135258,    0.057410,    0.216694,   -0.206930,    0.110318,    0.032353,   -0.112434,   -0.009637,    0.119598,    0.233113,   -0.036688,   -0.194550,   -0.132347,    0.028993,   -0.088509,    0.007460,    0.013466,    0.321663,   -0.012571,   -0.050229,   -0.038552,   -0.169759,   -0.043272,    0.136214,    0.096257,   -0.121292,   -0.667145,   -0.686844,    0.030550,   -0.394785,    0.095481,   -0.118639,   -0.094298,    0.021883,    0.186420,    0.089063,    0.211878,    2.037703,    0.118485,   -0.085441,   -0.005589,   -0.067502,   -0.219031,   -0.068404,   -0.015819,   -0.197283,   -0.018748,   -0.317667,    0.234717,    0.086452,   -0.101318,   -0.222868,   -0.177847,   -0.188201,   -0.137170,   -0.059902,    0.056246,    0.981285,    0.169707,   -0.043112,   -0.076031,    0.005355,    0.318998,   -0.064639,   -0.058882,   -0.035399,   -0.345358,   -0.484041,    0.006272,   -0.068318,   -0.086259,    0.123996,   -0.164827,   -0.072553,   -0.146782,    0.098639,    0.094914,    0.758925,    0.162202,    0.062230,    0.069922,   -0.041654,   -0.113589,   -0.292510,   -0.075677,   -0.168026,   -0.304514,   -0.455303,   -0.226293,   -0.748837,    0.002507,   -0.198389,   -0.048178,    0.026272,   -0.093245,   -0.069422,    0.207943,    1.611214,    0.344104,    0.207126,   -0.095667,    0.168080,   -0.377328,   -0.090303,   -0.030576,   -0.087910,   -0.043765,    0.026101,    0.038564,   -0.608942,    0.011345,   -0.169618,   -0.576343,   -0.020907,    0.459107,   -0.005766,    0.181981,    1.162488,    0.464559,    0.042520,    0.023501,   -0.057791,   -0.259799,   -0.078544,    0.210761,    0.066338,   -0.079646,   -0.120567,    0.035459,   -0.066345,   -0.008161,   -0.313662,   -0.156773,   -0.172767,    0.033949,    0.021937,    0.052905,    0.696084,    0.169144,   -0.068450,   -0.101151,    0.025271,   -0.269315,   -0.246202,    0.095353,   -0.033125,   -0.288744,   -0.481880,    0.092071,   -0.360188,    0.018573,   -0.105314,   -0.209989,    0.193181,   -0.047946,    0.068397,   -0.308405,    1.477245,    0.289224,    0.243349,   -0.004911,   -0.084339,   -0.445842,    0.019884,    0.107254,   -0.305568,    0.151775,    0.001729,    0.050934,   -0.237414,   -0.037805,   -0.103144,   -0.260420,   -0.183536,   -0.179176,    0.012586,    0.011048,    1.102685,    0.426283,    0.100648,   -0.083600,   -0.020647,   -0.036461,    0.160953,    0.040365,   -0.191972,   -0.071619,    0.091787,   -0.090349,   -0.211856,    0.044703,   -0.171447,   -0.192747,    0.011578,   -0.028835,   -0.279258,    0.037104,    0.243906,    0.205731,    0.157918,   -0.066384,   -0.215481,    0.014124,   -0.189788,    0.116885,    0.129551,   -0.072413,   -0.562906,    0.143445,   -0.211089,    0.209847,    0.014903,   -0.089952,   -0.178438,    0.257233,    0.034147,   -0.209169,    1.917546,    0.174866,    0.084726,    0.069482,    0.015333,   -0.217796,   -0.043137,    0.094584,    0.102024,   -0.683341,   -0.226528,    0.074915,   -0.379062,    0.167248,   -0.161398,   -0.018803,    0.095244,    0.122024,   -0.220720,    0.139446,    0.922311,    0.360709,   -0.012650,    0.010694,   -0.047658,    0.279365,    0.038744,   -0.104715,   -0.222723,    0.159291,    0.222682,   -0.036207,   -0.505343,    0.382968,   -0.296046,   -0.011459,    0.096467,   -0.126395,    0.066478,    0.182599,   -0.132864,    0.319619,    0.108032,    0.057203,   -0.044486,   -0.105142,   -0.111739,   -0.399954,    0.053272,   -0.501529,   -0.365461,    0.031688,   -0.208185,    0.599585,   -0.027896,   -0.026945,   -0.146979,    0.258297,   -0.182200,   -0.013477,    2.619292,    0.149162,    0.265645,   -0.130048,   -0.125211,   -0.286310,   -0.015821,   -0.031125,    0.159292,   -0.716045,   -1.006974,    0.122088,    0.221635,   -0.242418,    0.257417,    0.149199,   -0.030128,   -0.083591,   -0.058830,    0.238366,    0.718872,    0.432100,   -0.034965,    0.125119,    0.024900,    0.190250,    0.096083,    0.167796,   -0.004579,    0.130275,    0.309326,    0.035705,   -0.016162,   -0.083770,   -0.194801,   -0.245094,   -0.057168,   -0.046013,   -0.159858,    0.087136,   -0.265865,    0.087902,   -0.059168,   -0.019250,    0.085719,    0.092387,    0.130731,    0.025926,    0.105407,   -0.311548,   -0.481405,    0.083083,   -0.279379,    0.065948,    0.008974,   -0.052187,    0.222796,    0.153577,   -0.139070,    0.114220,    2.118499,    0.276653,    0.003721,   -0.156048,   -0.092072,   -0.182871,   -0.042113,   -0.011388,   -0.002740,   -0.143691,    0.246795,    0.129385,    0.010300,   -0.045435,   -0.133201,   -0.289493,   -0.130362,   -0.147300,    0.148514,   -0.078424,   -0.079276,    0.596928,    0.138723,   -0.083371,   -0.045835,    0.095726,    0.127329,    0.101627,    0.099581,   -0.100436,   -0.094552,    0.094879,   -0.036076,   -0.196324,   -0.069871,    0.163337,   -0.168310,   -0.139384,   -0.055030,    0.068987,    0.144189,    0.172521,   -0.034249,   -0.097912,   -0.180767,    0.138998,   -0.080097,    0.140577,   -0.198757,   -0.560895,   -0.718261,   -0.017063,   -0.372734,   -0.046753,    0.052054,   -0.296926,   -0.177600,   -0.083199,    0.019510,    0.089495,    2.196670,    0.694118,    0.054550,   -0.002244,   -0.071600,   -0.105743,   -0.271933,    0.107401,   -0.122449,   -0.819062,   -1.401259,    0.018006,   -0.897580,    0.192591,    0.032459,    0.124773,   -0.197629,   -0.000476,   -0.015258,    0.138523,    0.790967,    0.161076,   -0.067763,   -0.113984,   -0.190478,   -0.693221,    0.113622,    0.131202,    0.015281,   -0.179401,    0.087249,   -0.116472,   -0.379034,   -0.011620,    0.068062,   -0.581239,   -0.211267,    0.037242,   -0.050891,    0.051889,    0.640701,    0.263050,    0.109015,   -0.049995,   -0.087953,   -0.315058,    0.030024,    0.154711,   -0.265985,   -0.326808,   -0.674485,    0.076073,    0.091656,    0.046240,    0.003467,   -0.068559,    0.085373,    0.207493,    0.086552,   -0.096374,    1.754159,    0.512497,    0.142921,   -0.079674,   -0.206563,   -0.551151,    0.057438,    0.051937,   -0.067050,   -0.662919,   -0.112357,    0.013784,   -0.140059,   -0.069589,   -0.146717,    0.174707,   -0.042188,   -0.230051,   -0.048050,    0.107014,    0.997030,    0.345792,    0.051126,    0.047935,    0.018423,   -0.420967,   -0.026027,   -0.026487,   -0.143675,    0.008736,    0.161491,    0.036884,   -0.219307,   -0.086570,   -0.024449,   -0.097810,    0.114613,   -0.244076,   -0.209470,    0.101817,    0.679787,    0.201790,    0.019128,   -0.146745,   -0.111978,   -0.277929,    0.031874,   -0.043087,    0.125723,   -0.336735,   -0.751579,   -0.009182,   -0.488003,    0.080129,    0.097024,   -0.309609,    0.031074,    0.026733,    0.015380,    0.063615,    2.275394,    0.540828,    0.312601,    0.056790,   -0.105480,   -0.493722,    0.196823,    0.197188,   -0.050542,   -0.479065,    0.070957,    0.007789,   -0.416973,    0.086698,   -0.247268,   -0.366230,    0.018402,    0.149346,    0.023658,    0.036076,    1.112077,    0.300293,    0.046594,   -0.257138,   -0.213226,   -0.484239,   -0.003666,    0.034958,    0.126791,    0.190860,    0.014477,    0.074567,    0.052238,   -0.049735,   -0.016269,   -0.295294,    0.107019,   -0.126592,   -0.076863,    0.128304,    0.265865,    0.203104,   -0.039696,   -0.213656,    0.066977,   -0.059666,   -0.332674,    0.016600,   -0.083331,   -0.274136,   -0.394069,    0.109452,   -0.109023,    0.078775,   -0.069610,   -0.060116,    0.012879,   -0.068711,    0.002502,    0.076450,    2.173882,    0.378345,    0.015245,   -0.034697,   -0.228734,   -0.028247,    0.140838,   -0.011144,   -0.150133,   -0.144031,   -0.689610,    0.059184,   -0.118912,   -0.008582,    0.044809,   -0.131549,   -0.189394,    0.139216,   -0.021052,    0.101198,    0.960016,    0.253012,    0.067124,    0.070723,    0.020369,    0.109048,   -0.014038,    0.063117,   -0.134941,   -0.029073,   -0.016637,    0.011365,   -0.165453,   -0.125052,   -0.147882,    0.030847,   -0.001450,   -0.024225,   -0.023630,    0.088094,    0.074028,    0.214455,    0.032952,    0.053999,    0.029019,   -0.308447,   -0.171159,    0.117678,    0.026745,   -0.028534,   -0.981045,    0.068428,   -0.273298,    0.160111,   -0.075860,   -0.155869,   -0.132768,   -0.124728,   -0.190854,   -0.014190,    2.195427,    1.060080,    0.048263,   -0.162174,    0.060314,   -0.060835,   -0.075770,    0.042611,    0.118502,   -0.090991,   -0.227565,    0.250110,    0.027009,    0.073889,   -0.067892,   -0.502356,   -0.067572,   -0.088733,   -0.261790,    0.073051,    0.654236,    0.319994,   -0.084831,   -0.026353,    0.003779,   -0.028414,   -0.078082,    0.111575,   -0.230071,    0.138472,   -0.058080,   -0.014378,    0.264532,   -0.064228,   -0.115906,   -0.079735,   -0.030325,   -0.173627,   -0.094322,    0.129052,    0.172640,    0.071673,   -0.018002,   -0.116695,   -0.110052,    0.385308,   -0.329701,    0.153295,    0.054449,   -0.304287,   -0.723014,    0.074618,   -0.366132,    0.135720,    0.128769,   -0.408625,    0.168961,    0.061944,    0.030770,    0.202839,    1.608866,    0.746934,   -0.062373,   -0.194803,   -0.025549,    0.084741,    0.052880,    0.129909,   -0.026903,   -0.082255,   -0.677121,   -0.025877,   -0.652223,    0.190084,   -0.069921,   -0.219461,    0.140598,   -0.026635,    0.081594,    0.140380,    1.137490,    0.526663,    0.070940,   -0.108474,   -0.231782,    0.128280,    0.065630,    0.030930,   -0.039376,   -0.875988,   -0.515803,   -0.098158,    0.314196,   -0.050650,    0.157700,    0.220490,   -0.261355,   -0.243389,   -0.259786,    0.140018,    0.122091,    0.145222,    0.093255,   -0.061534,    0.066328,   -0.150484,   -0.216641,    0.044113,   -0.180103,   -0.522774,   -0.819900,   -0.001127,   -0.550596,    0.065600,   -0.060887,    0.041739,    0.018816,    0.078883,   -0.095770,    0.031136,    1.528899,    0.460337,    0.062135,   -0.236004,   -0.050027,   -0.479732,    0.022823,    0.136109,    0.074350,    0.003687,   -0.109288,    0.220308,    0.157207,   -0.059635,    0.092441,   -0.320394,    0.006085,   -0.166285,    0.031372,    0.012566,    0.784199,    0.522723,   -0.008119,    0.033790,   -0.283230,   -0.209048,    0.174066,   -0.151062,    0.036250,    0.051310,    0.135217,    0.113459,    0.217965,    0.075810,   -0.227290,    0.223382,    0.101122,   -0.106878,   -0.153603,   -0.079638,    0.488502,    0.206106,    0.184210,    0.072598,   -0.222411,   -0.310183,   -0.224865,    0.049984,    0.064894,   -0.349868,   -0.591860,    0.237863,   -0.317017,   -0.000952,    0.006482,   -0.144374,    0.027859,    0.134340,   -0.059187,    0.096152,    2.348593,    0.815417,    0.047462,    0.003239,    0.120731,   -0.527745,    0.005186,   -0.171787,    0.149332,   -0.200617,   -1.224341,   -0.047378,   -0.184792,    0.165967,    0.133492,   -0.011122,    0.072257,   -0.026467,    0.205669,    0.102050,    1.064014,    0.315022,    0.218326,    0.143048,    0.007579,    0.050818,    0.258060,    0.006152,   -0.050968,   -0.136855,   -0.013353,    0.173975,   -0.340767,   -0.091748,   -0.050517,   -0.037819,   -0.147659,   -0.252889,   -0.112477,   -0.073717,    0.667495,    0.195130,    0.074012,   -0.150160,   -0.049893,   -0.034624,   -0.062459,    0.171751,   -0.032897,   -0.171005,   -0.421553,    0.130676,    0.122062,   -0.329756,    0.096974,   -0.022226,   -0.065383,   -0.175701,    0.017675,    0.094914,    2.076651,   -0.000469,   -0.008920,   -0.092666,   -0.021533,    0.037362,   -0.197517,    0.154113,    0.020197,   -0.655460,   -0.860089,    0.091855,    0.184052,    0.032169,   -0.003658,   -0.425778,   -0.090886,   -0.012890,   -0.075649,    0.149864,    1.065533,    0.324685,   -0.084993,   -0.080951,   -0.087933,   -0.312253,   -0.127957,    0.045089,   -0.015034,   -0.009871,    0.181024,    0.137419,    0.145949,   -0.083441,   -0.040839,   -0.019991,   -0.119120,   -0.170055,    0.105459,   -0.043994,    0.385194,    0.186593,    0.016190,   -0.212644,    0.036609,    0.050417,   -0.186386,    0.104898,    0.118601,   -0.116689,   -0.207946,    0.012165,   -0.315100,    0.241119,   -0.017646,   -0.080143,    0.088302,    0.039161,   -0.049056,   -0.100053,    2.061873,    0.098878,    0.102108,   -0.121070,    0.077748,    0.080534,   -0.008654,   -0.132142,   -0.279219,   -0.585429,   -0.270434,    0.172110,    0.124911,    0.022946,   -0.129171,    0.162113,   -0.247135,    0.095150,    0.160348,    0.055381,    1.035563,    0.351796,    0.078038,   -0.202795,   -0.042489,   -1.094055,    0.068999,    0.093889,    0.125149,    0.053778,    0.031978,    0.072015,    0.027448,   -0.075701,    0.117514,   -0.137829,   -0.040837,   -0.217763,   -0.176593,    0.094541,    0.067537,    0.143439,   -0.010895,   -0.017032,   -0.194947,   -0.292019,   -0.088817,    0.192867,   -0.094478,   -0.440519,   -0.769253,    0.030294,   -0.016600,    0.184631,    0.055813,    0.050874,    0.120530,    0.280463,    0.013094,    0.104841,    2.427179,    0.665974,   -0.022276,   -0.216051,    0.088942,    0.129749,   -0.092351,   -0.136390,   -0.025202,   -0.177387,   -0.103887,   -0.124722,    0.244070,    0.231548,   -0.275093,   -0.370824,    0.054890,    0.105841,    0.000856,    0.161566,    0.460879,    0.437353,    0.236166,   -0.148232,   -0.204369,   -0.587178,    0.094729,   -0.097209,   -0.318061,    0.176451,    0.134698,   -0.133310,    0.218567,    0.007740,   -0.329278,    0.005233,   -0.220123,    0.050104,   -0.034871,    0.024771,    0.316691,    0.078615,    0.224412,   -0.068258,   -0.073897,    0.216327,   -0.256574,    0.192123,   -0.119284,    0.413885,   -0.700197,    0.075509,    0.070317,   -0.112334,   -0.169337,   -0.245484,   -0.227273,    0.222891,    0.051643,    0.263908,    2.363233,   -0.420749,   -0.096527,    0.004322,    0.115026,    0.299632,   -0.029462,    0.244194,    0.156197,   -0.646326,   -1.415995,    0.102206,   -0.085931,    0.185162,   -0.005145,    0.002945,   -0.160154,   -0.060515,    0.005682,    0.113425,    0.858227,    0.274964,   -0.102556,   -0.288411,   -0.244551,    0.091753,    0.198574,    0.125209,    0.030197,    0.024875,   -0.051641,    0.146858,    0.158084,   -0.274586,   -0.119825,   -0.301059,   -0.007870,   -0.156099,   -0.080183,   -0.035048,    0.249568,    0.346824,    0.032141,    0.002896,   -0.014777,   -0.325976,   -0.341823,    0.129762,   -0.000514,   -0.720668,    0.028997,    0.088217,   -0.733223,   -0.065490,    0.135753,   -0.151665,   -0.308898,    0.194000,   -0.069930,    0.298384,    4.525513,    1.090288,    0.136319,   -0.087385,   -0.255374,   -0.399732,    0.203759,    0.172605,    0.142250,   -0.155944,   -0.245845,    0.047460,    0.091081,    0.010961,   -0.185717,   -0.369210,   -0.091112,    0.241358,   -0.126229,    0.173502,    0.764173,    0.577697,   -0.015302,   -0.082526,    0.008640,   -0.077729,    0.064672,    0.076202,   -0.227777,   -0.094196,   -0.167411,   -0.103211,    0.069276,   -0.188437,   -0.281977,   -0.085677,    0.034546,    0.076179,   -0.058190,    0.151884,    0.461708,    0.381629,    0.060866,   -0.027673,    0.091835,   -0.254490,   -0.102755,    0.182370,    0.098602,   -0.061890,   -0.712945,    0.335806,   -0.225525,   -0.087796,   -0.154334,   -0.076684,   -0.155283,    0.165641,    0.145429,    0.176270,    2.854359,    3.073951,    0.245429,    0.020799,   -0.116447,   -0.492620,    0.021040,    0.082354,   -0.176799,   -0.150045,   -0.547695,    0.261270,    0.126527,   -0.040275,    0.051090,   -0.251054,    0.121930,   -0.020709,    0.086975,   -0.143826,    0.977280,    0.199164,    0.021389,   -0.285841,   -0.188356,   -0.571819,    0.058594,    0.000073,   -0.116079,   -0.123950,   -0.098571,    0.066973,    0.027393,    0.064209,   -0.252835,    0.001951,   -0.200528,   -0.208025,   -0.097971,   -0.000888,    0.653960,    0.168299,    0.070511,   -0.044265,   -0.020843,   -0.287946,   -0.107016,    0.118008,   -0.025875,   -0.287496,   -0.219657,    0.136548,   -0.084151,   -0.274037,   -0.095245,   -0.182476,   -0.029812,    0.139538,    0.177713,    0.105180,    1.955941,    0.592425,   -0.002748,    0.094004,    0.043642,    0.055092,    0.118510,    0.015673,   -0.183327,   -0.612290,   -0.394976,    0.041198,   -0.080644,    0.000494,    0.033433,   -0.310584,    0.102325,    0.033809,   -0.008438,    0.063428,    1.077411,    0.225806,    0.103749,    0.022770,    0.065350,   -0.196026,    0.082277,    0.153356,    0.056991,   -0.142755,   -0.001340,    0.003238,    0.021229,   -0.269152,   -0.144114,   -0.065704,   -0.153636,    0.039820,   -0.096730,    0.036929,    0.250949,    0.243725,    0.022572,    0.073680,   -0.049646,   -0.136127,    0.529398,    0.289148,    0.106495,   -0.035653,    0.283743,    0.053301,   -0.240071,   -0.177184,   -0.017164,   -0.259746,   -0.210725,    0.354358,    0.117933,    0.204965,    2.466403,    1.117962,    0.079851,   -0.117531,    0.156948,    0.124507,    0.344565,    0.046517,    0.014144,    0.172764,    0.313043,    0.019082,   -0.215006,   -0.110614,   -0.032308,   -0.095398,    0.061537,    0.016239,   -0.232159,    0.046377,    0.877977,    0.495142,    0.140593,    0.050681,   -0.114315,    0.022571,    0.091624,    0.054463,   -0.291098,   -0.079759,    0.071433,   -0.099224,    0.116611,   -0.084649,   -0.112248,   -0.086334,   -0.014566,    0.183968,   -0.060965,    0.058511,    0.055383,    0.323090,    0.151993,    0.082095,   -0.075956,   -0.301769,    0.870296,    0.168968,    0.039999,    0.062627,    0.398779,    0.288192,   -0.482223,    0.065051,   -0.103526,   -0.330185,    0.024072,   -0.064186,   -0.004609,    0.247441,    2.617773,    1.393864,    0.021523,   -0.000229,   -0.060427,    0.374089,   -0.185098,   -0.015502,    0.201141,    0.035455,   -0.386377,    0.183803,    0.074070,   -0.141721,   -0.000643,    0.050431,   -0.128626,    0.041585,   -0.211850,    0.121390,    0.769698,    0.080491,   -0.069805,    0.011407,    0.127249,   -0.162938,    0.119930,   -0.096623,    0.090244,   -0.813191,   -0.600805,    0.044724,    0.200269,    0.011729,   -0.152625,    0.122325,   -0.289195,   -0.064073,   -0.002164,    0.003667,   -0.057455,   -0.089497,    0.157069,    0.101750,   -0.027855,    0.084274,    0.076530,    0.151757,    0.006231,   -0.561604,   -0.140402,    0.090226,    0.087958,    0.012388,   -0.119896,   -0.027246,   -0.081428,   -0.234044,    0.080315,   -0.113180,    1.676126,    0.386319,    0.020588,    0.000194,   -0.018824,    0.400801,   -0.134562,    0.133326,   -0.076239,    0.100578,   -0.164127,   -0.101684,    0.113160,   -0.201923,    0.193374,   -0.079345,   -0.168389,   -0.122052,   -0.089581,    0.150751,    0.621504,    0.506024,    0.128353,    0.112655,    0.009103,    0.233722,    0.022031,   -0.029124,   -0.207698,   -0.031058,   -0.232189,    0.181016,    0.231771,   -0.047558,   -0.291795,   -0.114981,   -0.021193,   -0.099410,    0.002775,   -0.107598,    0.143913,   -0.060040,    0.094142,   -0.232985,   -0.263345,    0.130284,   -0.201348,    0.374127,    0.114556,   -0.014919,    0.175406,    0.203142,    0.153975,    0.066057,    0.037925,   -0.380048,    0.105510,   -0.029199,    0.035050,    0.144550,    3.952348,   -0.056944,    0.160990,   -0.076215,    0.000762,    0.035960,   -0.429814,   -0.059590,   -0.084191,    0.094764,   -0.199130,   -0.066552,   -0.182299,   -0.012132,   -0.002663,    0.160144,   -0.242835,    0.094702,   -0.234670,    0.050780,    0.614874,    0.150944,    0.132350,   -0.102110,   -0.171180,    0.006811,    0.068966,   -0.113992,   -0.164376,    0.148797,    0.247919,    0.027998,   -0.647100,   -0.158044,   -0.076283,    0.029996,   -0.087966,   -0.151882,   -0.269052,    0.190892,    0.648712,    0.584170,    0.059530,   -0.097912,   -0.291509,    0.205275,    0.063219,   -0.017418,   -0.026438,   -0.276547,   -0.153453,   -0.014040,   -0.230072,   -0.161630,   -0.022631,   -0.334301,    0.105057,    0.096804,   -0.003010,    0.123691,    1.266210,   -0.012758,    0.006487,   -0.085149,    0.120731,   -0.160233,   -0.288778,    0.304638,   -0.238676,    0.219649,    0.447482,    0.066809,   -0.109051,    0.074749,   -0.080031,   -0.440537,    0.073529,    0.028723,   -0.164458,    0.099948,    1.115116,    1.315625,    0.014005,    0.074983,   -0.178275,    0.251619,    0.000099,   -0.080914,   -0.088296,   -0.511570,   -0.829018,    0.055792,    0.000438,   -0.151017,   -0.013858,    0.073810,   -0.100974,    0.058525,   -0.082996,   -0.004321,    0.739727,    0.168862,    0.111715,   -0.047944,    0.027928,   -0.259465,    0.070089,    0.253372,    0.112914,    0.004340,   -0.626993,   -0.079199,   -0.138799,    0.118720,    0.062927,   -0.195160,   -0.185568,   -0.268652,   -0.176527,    0.076789,    1.856224,    0.191002,    0.040297,   -0.024610,    0.039286,   -0.423672,    0.153092,   -0.018040,   -0.002967,    0.354094,   -0.376783,    0.200887,   -0.479648,   -0.031986,    0.095516,   -0.036204,    0.108656,   -0.010242,   -0.004703,    0.051994,    1.260271,    0.742244,    0.077800,   -0.135866,   -0.070704,   -0.236928,    0.054895,    0.051009,   -0.198015,   -0.037270,    0.118839,   -0.004919,   -0.204624,   -0.070687,   -0.060284,   -0.057899,    0.018934,    0.097672,   -0.048868,    0.015638,    0.256888,    0.102349,    0.068107,   -0.118473,    0.038740,   -0.211085,    0.015227,   -0.077581,   -0.223168,   -0.340167,   -0.787360,    0.115355,   -0.368269,    0.042086,    0.252362,    0.133820,   -0.028905,    0.026705,    0.081528,    0.020403,    2.593051,    0.316242,    0.090126,    0.115507,   -0.060057,    0.127846,   -0.174264,    0.004211,   -0.250457,    0.173615,    0.046498,    0.054613,   -0.085055,   -0.181575,   -0.250343,   -0.063646,    0.016104,   -0.128960,    0.100013,    0.006050,    0.910434,    0.242224,    0.094113,   -0.060601,   -0.028638,    0.051118,    0.058561,    0.026548,    0.078731,    0.108407,    0.055271,   -0.043945,   -0.478991,    0.133286,   -0.071208,   -0.050998,    0.124435,    0.171680,   -0.108930,    0.178932,   -0.234100,    0.191753,    0.016018,    0.048454,    0.112637,   -0.180734,   -0.072401,    0.244340,    0.073934,    0.201043,   -0.061710,    0.022218,    0.074782,    0.157074,   -0.102752,   -0.178609,    0.110836,    0.175085,   -0.023103,    0.132112,    2.610453,    2.032539,    0.134497,    0.032285,    0.040223,   -0.172654,    0.268563,   -0.116641,   -0.081511,   -0.866203,    0.150169,    0.028828,   -0.001917,    0.197806,   -0.186079,   -0.427499,    0.032899,    0.060234,    0.113897,    0.138009,    0.263241,    0.429755,    0.146250,   -0.057899,   -0.225624,   -0.216227};
#endif
}

#endif
