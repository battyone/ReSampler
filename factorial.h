/*
* Copyright (C) 2016 - 2018 Judd Niemann - All Rights Reserved.
* You may use, distribute and modify this code under the
* terms of the GNU Lesser General Public License, version 2.1
*
* You should have received a copy of GNU Lesser General Public License v2.1
* with this file. If not, please refer to: https://github.com/jniemann66/ReSampler
*/

// factorial.h : table of factorial constants

#ifndef FACTORIAL_H
#define FACTORIAL_H

const double factorials[] = {
    1                     , // +1.00000000000000000000000000000000000e+00     
    1                     , // +1.00000000000000000000000000000000000e+00     
    2                     , // +2.00000000000000000000000000000000000e+00     
    6                     , // +6.00000000000000000000000000000000000e+00     
    24                    , // +2.40000000000000000000000000000000000e+01     
    120                   , // +1.20000000000000000000000000000000000e+02     
    720                   , // +7.20000000000000000000000000000000000e+02     
    5040                  , // +5.04000000000000000000000000000000000e+03     
    40320                 , // +4.03200000000000000000000000000000000e+04     
    362880                , // +3.62880000000000000000000000000000000e+05     
    3628800               , // +3.62880000000000000000000000000000000e+06     
    39916800              , // +3.99168000000000000000000000000000000e+07     
    479001600             , // +4.79001600000000000000000000000000000e+08     
    6227020800            , // +6.22702080000000000000000000000000000e+09     
    87178291200           , // +8.71782912000000000000000000000000000e+10     
    1307674368000         , // +1.30767436800000000000000000000000000e+12     
    20922789888000        , // +2.09227898880000000000000000000000000e+13     
    355687428096000       , // +3.55687428096000000000000000000000000e+14     
    6402373705728000      , // +6.40237370572800000000000000000000000e+15     
    1.21645100408832e+17  , // +1.21645100408832000000000000000000000e+17     
    2.43290200817664e+18  , // +2.43290200817664000000000000000000000e+18     
    5.109094217170944e+19 , // +5.10909421717094400000000000000000000e+19
    //     
    1.124000727777608e+21 , // +1.12400072777760768000000000000000000e+21     
    2.585201673888498e+22 , // +2.58520167388849766400000000000000000e+22     
    6.204484017332394e+23 , // +6.20448401733239439360000000000000000e+23     
    1.551121004333099e+25 , // +1.55112100433309859840000000000000000e+25     
    4.032914611266057e+26 ,     // +4.03291461126605635584000000000000000e+26     
    1.088886945041835e+28 , // +1.08888694504183521607680000000000000e+28     
    3.048883446117139e+29 , // +3.04888344611713860501504000000000000e+29     
    8.841761993739702e+30 , // +8.84176199373970195454361600000000000e+30     
    2.652528598121911e+32 , // +2.65252859812191058636308480000000000e+32     
    8.222838654177922e+33 ,     // +8.22283865417792281772556288000000000e+33     
    2.631308369336935e+35 , // +2.63130836933693530167218012160000000e+35     
    8.683317618811886e+36 , // +8.68331761881188649551819440128000000e+36     
    2.952327990396042e+38 ,     // +2.95232799039604140847618609643520000e+38     
    1.033314796638615e+40 ,     // +1.03331479663861449296666513375232000e+40     
    3.719933267899013e+41 ,     // +3.71993326789901217467999448150835200e+41     
    1.376375309122635e+43 , // +1.37637530912263450463159795815809024e+43     
    5.230226174666011e+44 , // +5.23022617466601111760007224100074326e+44     
    2.039788208119744e+46 , // +2.03978820811974433586402817399028990e+46     
    8.159152832478977e+47 , // +8.15915283247897734345611269596115994e+47     
    3.345252661316381e+49 , // +3.34525266131638071081700620534407553e+49     
    1.40500611775288e+51  , // +1.40500611775287989854314260624451167e+51     
    6.041526306337383e+52 ,     // +6.04152630633738356373551320685140054e+52     
    2.658271574788449e+54 , // +2.65827157478844876804362581101461616e+54     
    1.196222208654802e+56 , // +1.19622220865480194561963161495657732e+56     
    5.502622159812089e+57 , // +5.50262215981208894985030542880025565e+57     
    2.586232415111682e+59 , // +2.58623241511168180642964355153612013e+59     
    1.241391559253607e+61 , // +1.24139155925360726708622890473733766e+61     
    6.082818640342675e+62 ,     // +6.08281864034267560872252163321295418e+62     
    3.041409320171338e+64 , // +3.04140932017133780436126081660647707e+64     
    1.551118753287382e+66 , // +1.55111875328738228022424301646930328e+66     
    8.065817517094388e+67 , // +8.06581751709438785716606368564037680e+67     
    4.274883284060025e+69 ,     // +4.27488328406002556429801375338939947e+69     
    2.308436973392414e+71 , // +2.30843697339241380472092742683027573e+71     
    1.269640335365828e+73 , // +1.26964033536582759259651008475665158e+73     
    7.109985878048635e+74 , // +7.10998587804863451854045647463724864e+74     
    4.052691950487721e+76 ,     // +4.05269195048772167556806019054323162e+76     
    2.350561331282878e+78 ,     // +2.35056133128287857182947491051507425e+78     
    1.386831185456898e+80   // +1.38683118545689835737939019720389389e+80
};

#endif // FACTORIAL_H