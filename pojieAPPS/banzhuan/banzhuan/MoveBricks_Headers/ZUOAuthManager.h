//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZOAuthManager.h"

@interface ZUOAuthManager : ZOAuthManager
{
}

+ (id)getInstance;
- (void)setLoginSuccessPage:(id)arg1;
- (void)customUIWithParams:(id)arg1 topCustomViews:(CDUnknownBlockType)arg2 bottomCustomViews:(CDUnknownBlockType)arg3;
- (void)gmbc:(id)arg1 listener:(CDUnknownBlockType)arg2;
- (void)gmbc:(id)arg1 mobile:(id)arg2 listener:(CDUnknownBlockType)arg3;
- (void)oauth:(double)arg1 resultListener:(CDUnknownBlockType)arg2;
- (void)login:(id)arg1 timeout:(double)arg2 resultListener:(CDUnknownBlockType)arg3;
- (void)loginPre:(double)arg1 resultListener:(CDUnknownBlockType)arg2;
- (void)init:(id)arg1 pubKey:(id)arg2 serviceType:(unsigned long long)arg3;

@end

