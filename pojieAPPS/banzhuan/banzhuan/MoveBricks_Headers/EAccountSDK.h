//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAccountSDK : NSObject
{
}

+ (void)preGetMobileRedirect:(id)arg1 timeoutInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
+ (void)preGetMobileRedirect:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)mobileCode:(id)arg1 appSecret:(id)arg2 randomkey:(id)arg3 bussinessType:(id)arg4 timeoutInterval:(double)arg5 block:(CDUnknownBlockType)arg6;
+ (void)getMobileCodeWithBussinessType:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)initWithSelfKey:(id)arg1 appSecret:(id)arg2;

@end

