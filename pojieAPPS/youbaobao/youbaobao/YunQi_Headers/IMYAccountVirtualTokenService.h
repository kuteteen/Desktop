//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYAccountVirtualTokenService : NSObject
{
}

+ (id)getUnloginVirtualToken:(long long)arg1 retryOnFailure:(_Bool)arg2;
+ (id)getUnloginVirtualToken:(long long)arg1;
+ (id)getNologinSignal:(long long)arg1;
+ (void)reqUnloginVirtualToken:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3 retryOnFailure:(_Bool)arg4;
+ (void)reqUnloginVirtualToken:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end
