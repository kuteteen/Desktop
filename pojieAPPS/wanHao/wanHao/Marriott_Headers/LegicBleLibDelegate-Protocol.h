//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSUUID;

@protocol LegicBleLibDelegate <NSObject>
- (void)bleLibDidFailWithError:(NSError *)arg1;
- (void)bleLibDidSendData:(NSData *)arg1 projectNr:(unsigned long long)arg2 receiver:(NSUUID *)arg3;
- (void)bleLibDidReceiveData:(NSData *)arg1 projectNr:(unsigned long long)arg2 sender:(NSUUID *)arg3;
- (_Bool)bleLibDidReceiveReadRequestToProject:(unsigned long long)arg1 sender:(NSUUID *)arg2;
- (void)bleLibDidDisableProjectWithProjectNr:(unsigned long long)arg1;
- (void)bleLibDidEnableProjectWithProjectNr:(unsigned long long)arg1;
- (void)bleLibDidUpdateState:(unsigned long long)arg1;
@end

