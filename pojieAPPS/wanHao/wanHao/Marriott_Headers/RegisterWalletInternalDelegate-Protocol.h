//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LegicStatus, NSData, NSString;

@protocol RegisterWalletInternalDelegate <NSObject>
- (void)token:(NSString *)arg1;
- (void)walletInstanceId:(NSString *)arg1;
- (void)deviceId:(NSData *)arg1;
- (void)fail:(LegicStatus *)arg1;
- (void)success:(_Bool)arg1;
@end
