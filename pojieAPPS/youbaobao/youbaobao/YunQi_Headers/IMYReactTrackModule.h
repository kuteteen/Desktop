//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface IMYReactTrackModule : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__321;
+ (const struct RCTMethodInfo *)__rct_export__270;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)onGaEvent:(id)arg1 param:(id)arg2;
- (void)onUmengEvent:(id)arg1 param:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

