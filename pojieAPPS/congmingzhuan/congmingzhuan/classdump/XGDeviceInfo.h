//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/XGJceObjectV2.h>

@class NSString;

@interface XGDeviceInfo : XGJceObjectV2
{
    unsigned int jcev2_p_11_o_isRooted;
    NSString *jcev2_p_0_o_imei;
    NSString *jcev2_p_1_o_model;
    NSString *jcev2_p_2_o_os;
    NSString *jcev2_p_3_o_network;
    NSString *jcev2_p_4_o_sdCard;
    NSString *jcev2_p_5_o_sdDouble;
    NSString *jcev2_p_6_o_resolution;
    NSString *jcev2_p_7_o_manu;
    NSString *jcev2_p_8_o_apiLevel;
    NSString *jcev2_p_9_o_sdkVersion;
    NSString *jcev2_p_10_o_sdkVersionName;
    NSString *jcev2_p_12_o_appList;
    NSString *jcev2_p_13_o_cpuInfo;
    NSString *jcev2_p_14_o_language;
    NSString *jcev2_p_15_o_timezone;
    NSString *jcev2_p_16_o_launcherName;
    NSString *jcev2_p_17_o_xgAppList;
    NSString *jcev2_p_18_o_idfa;
    NSString *jcev2_p_19_o_idfv;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_idfv, setter=setJce_idfv:) NSString *jcev2_p_19_o_idfv; // @synthesize jcev2_p_19_o_idfv;
@property(retain, nonatomic, getter=jce_idfa, setter=setJce_idfa:) NSString *jcev2_p_18_o_idfa; // @synthesize jcev2_p_18_o_idfa;
@property(retain, nonatomic, getter=jce_xgAppList, setter=setJce_xgAppList:) NSString *jcev2_p_17_o_xgAppList; // @synthesize jcev2_p_17_o_xgAppList;
@property(retain, nonatomic, getter=jce_launcherName, setter=setJce_launcherName:) NSString *jcev2_p_16_o_launcherName; // @synthesize jcev2_p_16_o_launcherName;
@property(retain, nonatomic, getter=jce_timezone, setter=setJce_timezone:) NSString *jcev2_p_15_o_timezone; // @synthesize jcev2_p_15_o_timezone;
@property(retain, nonatomic, getter=jce_language, setter=setJce_language:) NSString *jcev2_p_14_o_language; // @synthesize jcev2_p_14_o_language;
@property(retain, nonatomic, getter=jce_cpuInfo, setter=setJce_cpuInfo:) NSString *jcev2_p_13_o_cpuInfo; // @synthesize jcev2_p_13_o_cpuInfo;
@property(retain, nonatomic, getter=jce_appList, setter=setJce_appList:) NSString *jcev2_p_12_o_appList; // @synthesize jcev2_p_12_o_appList;
@property(nonatomic, getter=jce_isRooted, setter=setJce_isRooted:) unsigned int jcev2_p_11_o_isRooted; // @synthesize jcev2_p_11_o_isRooted;
@property(retain, nonatomic, getter=jce_sdkVersionName, setter=setJce_sdkVersionName:) NSString *jcev2_p_10_o_sdkVersionName; // @synthesize jcev2_p_10_o_sdkVersionName;
@property(retain, nonatomic, getter=jce_sdkVersion, setter=setJce_sdkVersion:) NSString *jcev2_p_9_o_sdkVersion; // @synthesize jcev2_p_9_o_sdkVersion;
@property(retain, nonatomic, getter=jce_apiLevel, setter=setJce_apiLevel:) NSString *jcev2_p_8_o_apiLevel; // @synthesize jcev2_p_8_o_apiLevel;
@property(retain, nonatomic, getter=jce_manu, setter=setJce_manu:) NSString *jcev2_p_7_o_manu; // @synthesize jcev2_p_7_o_manu;
@property(retain, nonatomic, getter=jce_resolution, setter=setJce_resolution:) NSString *jcev2_p_6_o_resolution; // @synthesize jcev2_p_6_o_resolution;
@property(retain, nonatomic, getter=jce_sdDouble, setter=setJce_sdDouble:) NSString *jcev2_p_5_o_sdDouble; // @synthesize jcev2_p_5_o_sdDouble;
@property(retain, nonatomic, getter=jce_sdCard, setter=setJce_sdCard:) NSString *jcev2_p_4_o_sdCard; // @synthesize jcev2_p_4_o_sdCard;
@property(retain, nonatomic, getter=jce_network, setter=setJce_network:) NSString *jcev2_p_3_o_network; // @synthesize jcev2_p_3_o_network;
@property(retain, nonatomic, getter=jce_os, setter=setJce_os:) NSString *jcev2_p_2_o_os; // @synthesize jcev2_p_2_o_os;
@property(retain, nonatomic, getter=jce_model, setter=setJce_model:) NSString *jcev2_p_1_o_model; // @synthesize jcev2_p_1_o_model;
@property(retain, nonatomic, getter=jce_imei, setter=setJce_imei:) NSString *jcev2_p_0_o_imei; // @synthesize jcev2_p_0_o_imei;
- (void).cxx_destruct;
- (id)init;

@end
