undefined4 main(int argc,char **argv)
{
  undefined4 result;
  int lenNumeroDeSerie;
  int in_GS_OFFSET;
  int i;
  int codeVM [4];
  undefined4 local_6c4;
  int local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  int local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  int local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  int local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  int local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  int local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  int local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  int local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  int local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  int local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  int local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  int local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  int local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  int local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  int local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  int local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined *local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int canary;
  undefined4 *local_10;
  char **argv2;
  
  argv2 = argv;
  local_10 = &argc;
  canary = *(int *)(in_GS_OFFSET + 0x14);
  if (argc == 2) {
    lenNumeroDeSerie = strlen(argv[1]);
    if (lenNumeroDeSerie == 0x12) {
      codeVM[0] = 0;
      codeVM[1] = (int)*argv2[1];
      codeVM[2] = 1;
      codeVM[3] = 0;
      local_6c4 = 0;
      local_6c0 = (int)argv2[1][1];
      local_6bc = 1;
      local_6b8 = 1;
      local_6b4 = 0;
      local_6b0 = (int)argv2[1][2];
      local_6ac = 1;
      local_6a8 = 2;
      local_6a4 = 0;
      local_6a0 = (int)argv2[1][3];
      local_69c = 1;
      local_698 = 3;
      local_694 = 0;
      local_690 = (int)argv2[1][4];
      local_68c = 1;
      local_688 = 4;
      local_684 = 0;
      local_680 = (int)argv2[1][5];
      local_67c = 1;
      local_678 = 5;
      local_674 = 0;
      local_670 = (int)argv2[1][6];
      local_66c = 1;
      local_668 = 6;
      local_664 = 0;
      local_660 = (int)argv2[1][7];
      local_65c = 1;
      local_658 = 7;
      local_654 = 0;
      local_650 = (int)argv2[1][8];
      local_64c = 1;
      local_648 = 8;
      local_644 = 0;
      local_640 = (int)argv2[1][9];
      local_63c = 1;
      local_638 = 9;
      local_634 = 0;
      local_630 = (int)argv2[1][0xa];
      local_62c = 1;
      local_628 = 0xa;
      local_624 = 0;
      local_620 = (int)argv2[1][0xb];
      local_61c = 1;
      local_618 = 0xb;
      local_614 = 0;
      local_610 = (int)argv2[1][0xc];
      local_60c = 1;
      local_608 = 0xc;
      local_604 = 0;
      local_600 = (int)argv2[1][0xd];
      local_5fc = 1;
      local_5f8 = 0xd;
      local_5f4 = 0;
      local_5f0 = (int)argv2[1][0xe];
      local_5ec = 1;
      local_5e8 = 0xe;
      local_5e4 = 0;
      local_5e0 = (int)argv2[1][0xf];
      local_5dc = 1;
      local_5d8 = 0xf;
      local_5d4 = 0;
      local_5d0 = (int)argv2[1][0x10];
      local_5cc = 1;
      local_5c8 = 0x10;
      local_5c4 = 0;
      local_5c0 = (int)argv2[1][0x11];
      local_5bc = 1;
      local_5b8 = 0x11;
      local_5b4 = 0;
      local_5b0 = 0xffffffff;
      local_5ac = 2;
      local_5a8 = 0;
      local_5a4 = 4;
      local_5a0 = 0;
      local_59c = 1;
      local_598 = 0x12;
      local_594 = 0;
      local_590 = 3;
      local_58c = 2;
      local_588 = 1;
      local_584 = 4;
      local_580 = 0;
      local_57c = 2;
      local_578 = 0x12;
      local_574 = 3;
      local_570 = 0;
      local_56c = 5;
      local_568 = 0xfd;
      local_564 = 0;
      local_560 = 0xfffffffe;
      local_55c = 2;
      local_558 = 2;
      local_554 = 4;
      local_550 = 0;
      local_54c = 1;
      local_548 = 0x12;
      local_544 = 0;
      local_540 = 3;
      local_53c = 2;
      local_538 = 1;
      local_534 = 4;
      local_530 = 0;
      local_52c = 2;
      local_528 = 0x12;
      local_524 = 3;
      local_520 = 0;
      local_51c = 5;
      local_518 = 0xc3;
      local_514 = 0;
      local_510 = 3;
      local_50c = 2;
      local_508 = 2;
      local_504 = 4;
      local_500 = 0;
      local_4fc = 1;
      local_4f8 = 0x12;
      local_4f4 = 0;
      local_4f0 = 0xfffffffe;
      local_4ec = 2;
      local_4e8 = 3;
      local_4e4 = 4;
      local_4e0 = 0;
      local_4dc = 2;
      local_4d8 = 0x12;
      local_4d4 = 3;
      local_4d0 = 0;
      local_4cc = 5;
      local_4c8 = 0x18;
      local_4c4 = 0;
      local_4c0 = 0;
      local_4bc = 2;
      local_4b8 = 4;
      local_4b4 = 4;
      local_4b0 = 0;
      local_4ac = 1;
      local_4a8 = 0x12;
      local_4a4 = 0;
      local_4a0 = 1;
      local_49c = 2;
      local_498 = 3;
      local_494 = 4;
      local_490 = 0;
      local_48c = 2;
      local_488 = 0x12;
      local_484 = 3;
      local_480 = 0;
      local_47c = 5;
      local_478 = 0x72;
      local_474 = 0;
      local_470 = 3;
      local_46c = 2;
      local_468 = 4;
      local_464 = 4;
      local_460 = 0;
      local_45c = 1;
      local_458 = 0x12;
      local_454 = 0;
      local_450 = 0xfffffffb;
      local_44c = 2;
      local_448 = 5;
      local_444 = 4;
      local_440 = 0;
      local_43c = 2;
      local_438 = 0x12;
      local_434 = 3;
      local_430 = 0;
      local_42c = 5;
      local_428 = 7;
      local_424 = 0;
      local_420 = 6;
      local_41c = 2;
      local_418 = 0;
      local_414 = 4;
      local_410 = 0;
      local_40c = 1;
      local_408 = 0x12;
      local_404 = 0;
      local_400 = 0xfffffff7;
      local_3fc = 2;
      local_3f8 = 5;
      local_3f4 = 4;
      local_3f0 = 0;
      local_3ec = 2;
      local_3e8 = 0x12;
      local_3e4 = 3;
      local_3e0 = 0;
      local_3dc = 5;
      local_3d8 = 0x1e;
      local_3d4 = 0;
      local_3d0 = 9;
      local_3cc = 2;
      local_3c8 = 6;
      local_3c4 = 4;
      local_3c0 = 0;
      local_3bc = 1;
      local_3b8 = 0x12;
      local_3b4 = 0;
      local_3b0 = 0xfffffff8;
      local_3ac = 2;
      local_3a8 = 7;
      local_3a4 = 4;
      local_3a0 = 0;
      local_39c = 2;
      local_398 = 0x12;
      local_394 = 3;
      local_390 = 0;
      local_38c = 5;
      local_388 = 0xd1;
      local_384 = 0;
      local_380 = 0xfffffff9;
      local_37c = 2;
      local_378 = 9;
      local_374 = 4;
      local_370 = 0;
      local_36c = 1;
      local_368 = 0x12;
      local_364 = 0;
      local_360 = 7;
      local_35c = 2;
      local_358 = 6;
      local_354 = 4;
      local_350 = 0;
      local_34c = 2;
      local_348 = 0x12;
      local_344 = 3;
      local_340 = 0;
      local_33c = 5;
      local_338 = 0x4d;
      local_334 = 0;
      local_330 = 1;
      local_32c = 2;
      local_328 = 8;
      local_324 = 4;
      local_320 = 0;
      local_31c = 1;
      local_318 = 0x12;
      local_314 = 0;
      local_310 = 1;
      local_30c = 2;
      local_308 = 9;
      local_304 = 4;
      local_300 = 0;
      local_2fc = 2;
      local_2f8 = 0x12;
      local_2f4 = 3;
      local_2f0 = 0;
      local_2ec = 5;
      local_2e8 = 0xe7;
      local_2e4 = 0;
      local_2e0 = 0xfffffff9;
      local_2dc = 2;
      local_2d8 = 0xb;
      local_2d4 = 4;
      local_2d0 = 0;
      local_2cc = 1;
      local_2c8 = 0x12;
      local_2c4 = 0;
      local_2c0 = 8;
      local_2bc = 2;
      local_2b8 = 8;
      local_2b4 = 4;
      local_2b0 = 0;
      local_2ac = 2;
      local_2a8 = 0x12;
      local_2a4 = 3;
      local_2a0 = 0;
      local_29c = 5;
      local_298 = 0xbf;
      local_294 = 0;
      local_290 = &DAT_fffffffa;
      local_28c = 2;
      local_288 = 0xa;
      local_284 = 4;
      local_280 = 0;
      local_27c = 1;
      local_278 = 0x12;
      local_274 = 0;
      local_270 = 8;
      local_26c = 2;
      local_268 = 0xb;
      local_264 = 4;
      local_260 = 0;
      local_25c = 2;
      local_258 = 0x12;
      local_254 = 3;
      local_250 = 0;
      local_24c = 5;
      local_248 = 0xba;
      local_244 = 0;
      local_240 = 0xfffffffd;
      local_23c = 2;
      local_238 = 7;
      local_234 = 4;
      local_230 = 0;
      local_22c = 1;
      local_228 = 0x12;
      local_224 = 0;
      local_220 = 4;
      local_21c = 2;
      local_218 = 0xa;
      local_214 = 4;
      local_210 = 0;
      local_20c = 2;
      local_208 = 0x12;
      local_204 = 3;
      local_200 = 0;
      local_1fc = 5;
      local_1f8 = 0x8a;
      local_1f4 = 0;
      local_1f0 = 0;
      local_1ec = 2;
      local_1e8 = 0xd;
      local_1e4 = 4;
      local_1e0 = 0;
      local_1dc = 1;
      local_1d8 = 0x12;
      local_1d4 = 0;
      local_1d0 = 2;
      local_1cc = 2;
      local_1c8 = 0x10;
      local_1c4 = 4;
      local_1c0 = 0;
      local_1bc = 2;
      local_1b8 = 0x12;
      local_1b4 = 3;
      local_1b0 = 0;
      local_1ac = 5;
      local_1a8 = 0x80;
      local_1a4 = 0;
      local_1a0 = 5;
      local_19c = 2;
      local_198 = 0x11;
      local_194 = 4;
      local_190 = 0;
      local_18c = 1;
      local_188 = 0x12;
      local_184 = 0;
      local_180 = 0xfffffff9;
      local_17c = 2;
      local_178 = 0xe;
      local_174 = 4;
      local_170 = 0;
      local_16c = 2;
      local_168 = 0x12;
      local_164 = 3;
      local_160 = 0;
      local_15c = 5;
      local_158 = 0x81;
      local_154 = 0;
      local_150 = 8;
      local_14c = 2;
      local_148 = 0xf;
      local_144 = 4;
      local_140 = 0;
      local_13c = 1;
      local_138 = 0x12;
      local_134 = 0;
      local_130 = 0xfffffff7;
      local_12c = 2;
      local_128 = 0xc;
      local_124 = 4;
      local_120 = 0;
      local_11c = 2;
      local_118 = 0x12;
      local_114 = 3;
      local_110 = 0;
      local_10c = 5;
      local_108 = 0x38;
      local_104 = 0;
      local_100 = 0xffffffff;
      local_fc = 2;
      local_f8 = 0x10;
      local_f4 = 4;
      local_f0 = 0;
      local_ec = 1;
      local_e8 = 0x12;
      local_e4 = 0;
      local_e0 = 2;
      local_dc = 2;
      local_d8 = 0x11;
      local_d4 = 4;
      local_d0 = 0;
      local_cc = 2;
      local_c8 = 0x12;
      local_c4 = 3;
      local_c0 = 0;
      local_bc = 5;
      local_b8 = 0xa4;
      local_b4 = 0;
      local_b0 = 7;
      local_ac = 2;
      local_a8 = 0xe;
      local_a4 = 4;
      local_a0 = 0;
      local_9c = 1;
      local_98 = 0x12;
      local_94 = 0;
      local_90 = 0xfffffffe;
      local_8c = 2;
      local_88 = 0xf;
      local_84 = 4;
      local_80 = 0;
      local_7c = 2;
      local_78 = 0x12;
      local_74 = 3;
      local_70 = 0;
      local_6c = 5;
      local_68 = 0xf7;
      local_64 = 0;
      local_60 = 9;
      local_5c = 2;
      local_58 = 0xc;
      local_54 = 4;
      local_50 = 0;
      local_4c = 1;
      local_48 = 0x12;
      local_44 = 0;
      local_40 = 0xfffffff9;
      local_3c = 2;
      local_38 = 0xd;
      local_34 = 4;
      local_30 = 0;
      local_2c = 2;
      local_28 = 0x12;
      local_24 = 3;
      local_20 = 0;
      local_1c = 5;
      local_18 = 0x37;
      for (i = 0; i < 0xd8; i = i + 1) {
        vm(codeVM + i * 2);
      }
      puts(s_Le_num_ro_de_s_rie_est_valide._080ba05c);
      result = 0;
    }
    else {
      puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080ba008);
      result = 1;
    }
  }
  else {
    puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080ba008);
    result = 1;
  }
  if (canary != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    failedCanary();
  }
  return result;
}

