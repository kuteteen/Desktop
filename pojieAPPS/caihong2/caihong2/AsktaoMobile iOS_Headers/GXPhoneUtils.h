//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GXPhoneUtils : NSObject
{
}

+ (id)binaryStringWithInteger:(long long)arg1 andLength:(int)arg2;
+ (int)genFetchPnTypeByMask:(int)arg1 andMobile:(int)arg2;
+ (id)toIPV4Address:(struct in_addr)arg1;
+ (id)toIPV6Address:(struct in6_addr)arg1;
+ (id)genDeviceIPAdress;
+ (id)interceptString:(id)arg1 forPrefixKey:(id)arg2 andEndKey:(id)arg3;
+ (id)decryptionPhoneNumber:(id)arg1;
+ (id)encryptPhoneNumber:(id)arg1;
+ (_Bool)isMobileTypeOperatorPermitted:(int)arg1;
+ (_Bool)isCidMaskValid:(id)arg1 andMask:(id)arg2;
+ (_Bool)getAllowsForATS;
+ (id)retriveLocalLanguageCode;
+ (int)genMobileType;
+ (id)retriveMobileNetTypeCode;
+ (id)retriveDeviceId;
+ (id)retriveDeviceToken;
+ (_Bool)isAppLocationAlways;
+ (_Bool)isAppLocationInUse;
+ (_Bool)retriveAppCurFlightMode;
+ (_Bool)retriveAppCurBluetoothStates;
+ (id)retriveAppNetWorkStates;
+ (id)retriveAppLocationDescription;
+ (id)retriveBackgroundMode;
+ (id)retriveAppName;
+ (id)retriveAppVersion;
+ (id)retriveBundleId;
+ (id)retriveIsJailbreak;
+ (id)retriveMacAddr;
+ (id)retriveIDFA;
+ (id)retrivePlatform;
+ (id)retriveDeviceName;
+ (id)getSysInfoByName:(char *)arg1;

@end

