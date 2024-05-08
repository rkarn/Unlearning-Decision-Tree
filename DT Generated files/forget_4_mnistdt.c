#include <stdio.h>

int decision_tree_inference(double feature_num[]) {
int label_class= -1;
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] <= 5.5) && (feature_num[149] <= 4.5) && (feature_num[494] <= 4.0) && (feature_num[538] <= 26.5)){
    label_class = 1;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] <= 173.0) && (feature_num[72] <= 1.0) && (feature_num[455] > 0.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] > 2.5) && (feature_num[153] > 1.0) && (feature_num[488] <= 60.0) && (feature_num[315] <= 94.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] <= 63.5) && (feature_num[155] > 0.5) && (feature_num[517] > 0.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] <= 173.0) && (feature_num[72] <= 1.0) && (feature_num[455] <= 0.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] <= 63.5) && (feature_num[155] > 0.5) && (feature_num[517] <= 0.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] > 5.5) && (feature_num[598] > 0.5) && (feature_num[486] <= 7.5) && (feature_num[427] <= 168.5) && (feature_num[269] > 4.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] <= 63.5) && (feature_num[155] <= 0.5) && (feature_num[652] <= 6.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] > 2.5) && (feature_num[153] <= 1.0) && (feature_num[208] > 51.5) && (feature_num[316] <= 38.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] > 28.5) && (feature_num[156] > 0.5) && (feature_num[101] <= 1.0) && (feature_num[656] > 1.5) && (feature_num[434] <= 0.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] <= 2.5) && (feature_num[462] <= 81.0) && (feature_num[315] <= 54.5) && (feature_num[178] > 3.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] <= 1.0) && (feature_num[345] <= 104.5) && (feature_num[343] <= 132.5) && (feature_num[348] <= 3.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] > 1.5) && (feature_num[516] > 14.5) && (feature_num[376] <= 3.5) && (feature_num[207] <= 0.5) && (feature_num[263] <= 9.0)){
    label_class = 1;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] <= 63.5) && (feature_num[155] <= 0.5) && (feature_num[652] > 6.0)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] <= 18.0) && (feature_num[526] > 1.0) && (feature_num[370] <= 11.5) && (feature_num[284] <= 19.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] > 1.5) && (feature_num[516] > 14.5) && (feature_num[376] <= 3.5) && (feature_num[207] > 0.5) && (feature_num[484] <= 7.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] > 0.5) && (feature_num[509] <= 12.5) && (feature_num[572] > 112.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] <= 2.5) && (feature_num[462] > 81.0) && (feature_num[628] <= 24.0) && (feature_num[375] <= 14.5)){
    label_class = 1;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] > 0.5) && (feature_num[655] <= 0.5) && (feature_num[271] > 1.0) && (feature_num[354] > 10.5) && (feature_num[156] > 13.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] <= 5.5) && (feature_num[149] > 4.5) && (feature_num[318] <= 13.5) && (feature_num[516] > 16.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] > 1.5) && (feature_num[516] <= 14.5) && (feature_num[353] > 2.5) && (feature_num[346] <= 1.0) && (feature_num[652] <= 59.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] > 0.5) && (feature_num[509] <= 12.5) && (feature_num[572] <= 112.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] <= 84.5) && (feature_num[545] <= 5.5) && (feature_num[318] <= 38.5) && (feature_num[292] <= 168.5)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] <= 0.5) && (feature_num[152] > 6.0) && (feature_num[438] <= 27.0) && (feature_num[343] <= 5.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] > 5.5) && (feature_num[265] <= 34.0) && (feature_num[460] > 241.0) && (feature_num[270] > 159.0)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] > 0.5) && (feature_num[439] > 12.5) && (feature_num[380] > 9.5) && (feature_num[316] <= 3.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] > 0.5) && (feature_num[522] <= 1.5) && (feature_num[275] <= 33.5) && (feature_num[346] <= 7.0) && (feature_num[268] > 236.5)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] > 5.5) && (feature_num[598] > 0.5) && (feature_num[486] > 7.5) && (feature_num[400] > 24.5) && (feature_num[242] > 56.0)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] > 1.5) && (feature_num[516] <= 14.5) && (feature_num[353] <= 2.5) && (feature_num[322] > 8.5) && (feature_num[546] <= 2.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] > 116.5) && (feature_num[406] <= 53.5) && (feature_num[237] > 1.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] > 0.5) && (feature_num[509] > 12.5) && (feature_num[351] <= 48.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] <= 5.5) && (feature_num[486] <= 58.0) && (feature_num[186] <= 2.5) && (feature_num[294] > 89.0) && (feature_num[492] <= 72.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] <= 116.5) && (feature_num[485] <= 93.0) && (feature_num[375] <= 22.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] > 1.5) && (feature_num[516] <= 14.5) && (feature_num[353] > 2.5) && (feature_num[346] <= 1.0) && (feature_num[652] > 59.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] > 2.5) && (feature_num[153] > 1.0) && (feature_num[488] <= 60.0) && (feature_num[315] > 94.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] > 28.5) && (feature_num[156] <= 0.5) && (feature_num[381] <= 4.5) && (feature_num[217] <= 1.5) && (feature_num[542] > 70.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] <= 0.5) && (feature_num[594] > 21.5) && (feature_num[464] <= 125.0)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] > 5.5) && (feature_num[598] > 0.5) && (feature_num[486] <= 7.5) && (feature_num[427] > 168.5) && (feature_num[381] <= 132.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] <= 18.0) && (feature_num[526] <= 1.0) && (feature_num[541] > 42.0) && (feature_num[320] <= 62.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] > 84.5) && (feature_num[319] <= 0.5) && (feature_num[345] <= 27.5) && (feature_num[608] > 5.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] > 0.5) && (feature_num[655] > 0.5) && (feature_num[354] > 0.5) && (feature_num[434] <= 47.0) && (feature_num[484] > 54.0)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] > 173.0) && (feature_num[427] > 16.5) && (feature_num[329] > 3.0)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] > 0.5) && (feature_num[522] > 1.5) && (feature_num[293] <= 65.0) && (feature_num[511] > 55.0) && (feature_num[385] <= 214.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] > 6.0) && (feature_num[211] > 53.5) && (feature_num[427] > 1.0) && (feature_num[470] > 3.0)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] <= 0.5) && (feature_num[152] <= 6.0) && (feature_num[601] <= 74.0) && (feature_num[432] > 210.0)){
    label_class = 1;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] > 1.0) && (feature_num[494] > 23.5) && (feature_num[358] > 176.5) && (feature_num[621] <= 230.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] > 0.5) && (feature_num[439] <= 12.5) && (feature_num[464] <= 1.0) && (feature_num[125] > 11.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] <= 0.5) && (feature_num[152] <= 6.0) && (feature_num[601] > 74.0) && (feature_num[270] > 27.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] > 5.5) && (feature_num[598] <= 0.5) && (feature_num[210] > 4.5) && (feature_num[653] <= 80.0) && (feature_num[154] > 8.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] > 6.0) && (feature_num[211] > 53.5) && (feature_num[427] <= 1.0) && (feature_num[154] > 4.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] > 173.0) && (feature_num[427] <= 16.5) && (feature_num[241] > 1.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] > 5.5) && (feature_num[598] <= 0.5) && (feature_num[210] > 4.5) && (feature_num[653] > 80.0) && (feature_num[319] <= 62.5)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] <= 84.5) && (feature_num[545] > 5.5) && (feature_num[578] > 35.5) && (feature_num[575] > 213.5)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] > 0.5) && (feature_num[439] > 12.5) && (feature_num[380] <= 9.5) && (feature_num[568] > 69.0)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] > 6.0) && (feature_num[211] <= 53.5) && (feature_num[571] > 31.0) && (feature_num[626] > 2.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] > 0.5) && (feature_num[655] <= 0.5) && (feature_num[271] > 1.0) && (feature_num[354] <= 10.5) && (feature_num[357] > 4.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] > 84.5) && (feature_num[319] > 0.5) && (feature_num[440] > 77.5) && (feature_num[547] > 162.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] <= 18.0) && (feature_num[526] <= 1.0) && (feature_num[541] <= 42.0) && (feature_num[603] > 231.5)){
    label_class = 1;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] <= 0.5) && (feature_num[594] <= 21.5) && (feature_num[156] > 0.5)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] <= 5.5) && (feature_num[486] <= 58.0) && (feature_num[186] > 2.5) && (feature_num[301] > 54.0) && (feature_num[381] <= 11.0)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] > 0.5) && (feature_num[522] > 1.5) && (feature_num[293] <= 65.0) && (feature_num[511] <= 55.0) && (feature_num[654] > 1.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] > 0.5) && (feature_num[522] > 1.5) && (feature_num[293] > 65.0) && (feature_num[301] > 38.0) && (feature_num[440] > 124.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] > 1.0) && (feature_num[494] > 23.5) && (feature_num[358] <= 176.5) && (feature_num[374] <= 41.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] > 116.5) && (feature_num[406] > 53.5) && (feature_num[486] > 33.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] <= 5.5) && (feature_num[149] > 4.5) && (feature_num[318] <= 13.5) && (feature_num[516] <= 16.5)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] <= 2.5) && (feature_num[462] > 81.0) && (feature_num[628] > 24.0) && (feature_num[518] <= 2.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] > 0.5) && (feature_num[655] > 0.5) && (feature_num[354] > 0.5) && (feature_num[434] <= 47.0) && (feature_num[484] <= 54.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] <= 116.5) && (feature_num[485] > 93.0) && (feature_num[215] > 1.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] > 63.5) && (feature_num[213] <= 5.0) && (feature_num[402] > 3.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] > 116.5) && (feature_num[406] > 53.5) && (feature_num[486] <= 33.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] <= 109.5) && (feature_num[371] > 63.5) && (feature_num[213] > 5.0) && (feature_num[315] <= 11.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] <= 28.5) && (feature_num[98] > 0.5) && (feature_num[537] > 8.0) && (feature_num[496] <= 252.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] > 34.5) && (feature_num[297] <= 5.5) && (feature_num[486] > 58.0) && (feature_num[656] > 7.5) && (feature_num[300] > 5.5) && (feature_num[407] <= 90.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] > 1.5) && (feature_num[298] > 116.5) && (feature_num[406] <= 53.5) && (feature_num[237] <= 1.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] > 173.0) && (feature_num[427] > 16.5) && (feature_num[329] <= 3.0)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] > 0.5) && (feature_num[655] > 0.5) && (feature_num[354] <= 0.5) && (feature_num[514] <= 86.5) && (feature_num[357] > 9.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] > 18.0) && (feature_num[575] <= 89.0) && (feature_num[210] > 21.5) && (feature_num[498] > 111.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] > 18.0) && (feature_num[575] > 89.0) && (feature_num[240] > 107.0) && (feature_num[481] > 178.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] > 109.5) && (feature_num[655] > 26.5) && (feature_num[487] <= 1.5) && (feature_num[354] > 33.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] > 84.5) && (feature_num[319] > 0.5) && (feature_num[440] <= 77.5) && (feature_num[609] > 209.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] <= 0.5) && (feature_num[152] > 6.0) && (feature_num[438] > 27.0) && (feature_num[484] > 42.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] <= 18.0) && (feature_num[526] > 1.0) && (feature_num[370] > 11.5) && (feature_num[263] > 28.5)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] > 0.5) && (feature_num[515] <= 84.5) && (feature_num[545] <= 5.5) && (feature_num[318] <= 38.5) && (feature_num[292] > 168.5)){
    label_class = 1;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] > 5.5) && (feature_num[265] > 34.0) && (feature_num[514] > 11.5) && (feature_num[434] <= 98.0)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] <= 2.5) && (feature_num[462] > 81.0) && (feature_num[628] <= 24.0) && (feature_num[375] > 14.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] <= 28.5) && (feature_num[98] > 0.5) && (feature_num[537] <= 8.0) && (feature_num[242] > 7.0) && (feature_num[460] > 19.0)){
    label_class = 2;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] <= 93.5) && (feature_num[296] > 2.5) && (feature_num[153] > 1.0) && (feature_num[488] > 60.0) && (feature_num[627] > 248.5)){
    label_class = 3;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] > 0.5) && (feature_num[658] <= 0.5) && (feature_num[345] <= 18.0) && (feature_num[526] > 1.0) && (feature_num[370] <= 11.5) && (feature_num[284] > 19.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] > 28.5) && (feature_num[156] > 0.5) && (feature_num[101] > 1.0) && (feature_num[271] > 136.5) && (feature_num[294] <= 0.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] > 0.5) && (feature_num[346] <= 0.5) && (feature_num[348] > 109.5) && (feature_num[655] <= 26.5) && (feature_num[130] > 48.5) && (feature_num[270] > 22.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] <= 28.5) && (feature_num[98] > 0.5) && (feature_num[537] <= 8.0) && (feature_num[242] > 7.0) && (feature_num[460] <= 19.0)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] <= 0.5) && (feature_num[594] > 21.5) && (feature_num[464] > 125.0)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] <= 47.5) && (feature_num[380] <= 1.5) && (feature_num[324] <= 173.0) && (feature_num[72] > 1.0) && (feature_num[236] <= 6.0)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] <= 0.5) && (feature_num[405] <= 1.5) && (feature_num[485] <= 6.0) && (feature_num[154] > 0.5) && (feature_num[509] > 12.5) && (feature_num[351] > 48.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] <= 1.0) && (feature_num[345] <= 104.5) && (feature_num[343] > 132.5) && (feature_num[441] > 240.5)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] <= 24.5) && (feature_num[290] <= 34.5) && (feature_num[486] > 93.5) && (feature_num[656] > 0.5) && (feature_num[439] <= 12.5) && (feature_num[464] > 1.0) && (feature_num[148] > 131.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] <= 1.0) && (feature_num[345] > 104.5) && (feature_num[239] > 88.0) && (feature_num[526] > 14.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] > 1.0) && (feature_num[494] > 23.5) && (feature_num[358] > 176.5) && (feature_num[621] > 230.5)){
    label_class = 2;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] > 28.5) && (feature_num[156] > 0.5) && (feature_num[101] > 1.0) && (feature_num[271] > 136.5) && (feature_num[294] > 0.5)){
    label_class = 0;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] <= 0.5) && (feature_num[430] > 0.5) && (feature_num[211] <= 28.5) && (feature_num[98] > 0.5) && (feature_num[537] <= 8.0) && (feature_num[242] <= 7.0) && (feature_num[240] > 1.0)){
    label_class = 0;
  }
if( (feature_num[350] > 126.5) && (feature_num[489] > 24.5) && (feature_num[234] <= 0.5) && (feature_num[402] <= 0.5) && (feature_num[300] <= 5.5) && (feature_num[149] > 4.5) && (feature_num[318] > 13.5) && (feature_num[405] <= 12.5)){
    label_class = 3;
  }
if( (feature_num[350] <= 126.5) && (feature_num[568] > 0.5) && (feature_num[435] <= 0.5) && (feature_num[489] > 47.5) && (feature_num[320] > 1.0) && (feature_num[494] <= 23.5) && (feature_num[380] > 17.5) && (feature_num[378] <= 12.5)){
    label_class = 1;
  }
  return label_class;
}
