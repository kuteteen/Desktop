//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYAccountUserInfoService : NSObject
{
}

+ (id)renewTokenAvailableNotification;
+ (id)renewSocialAuthToken:(long long)arg1 account:(id)arg2 password:(id)arg3;
+ (id)putUserInfo:(id)arg1;
+ (id)getAllInfo;
+ (id)getUserBindInfo;
+ (id)getUserInfo;
+ (void)putWithUserInfo:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)getWithSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;

@end

