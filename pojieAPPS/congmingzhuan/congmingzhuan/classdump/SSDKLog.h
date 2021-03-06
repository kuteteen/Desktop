//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/MOBFDataModel.h>

@class NSString, SSDKContentEntity, SSDKUser;

@interface SSDKLog : MOBFDataModel
{
    unsigned long long _type;
    NSString *_typeSign;
    NSString *_content;
    SSDKUser *_user;
    SSDKContentEntity *_contentEntity;
    unsigned long long _platformType;
    NSString *_target;
    NSString *_eventId;
    NSString *_eventTarget;
    NSString *_eventParams;
    NSString *_api;
}

+ (id)_apiLog;
+ (id)_eventLog;
+ (id)_authLog;
+ (id)_shareLog;
+ (id)_existLog;
+ (id)_runLog;
+ (id)logWithType:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
@property(copy, nonatomic) NSString *eventParams; // @synthesize eventParams=_eventParams;
@property(copy, nonatomic) NSString *eventTarget; // @synthesize eventTarget=_eventTarget;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) SSDKContentEntity *contentEntity; // @synthesize contentEntity=_contentEntity;
@property(retain, nonatomic) SSDKUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *typeSign; // @synthesize typeSign=_typeSign;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_convertContentEntityImage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_convertContentEntityImages:(CDUnknownBlockType)arg1;
- (void)_convertContentEntityToDictionary:(CDUnknownBlockType)arg1;
- (id)_encryptData:(id)arg1;
- (id)_encryptDeviceString;
- (void)_handleContent:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getContent:(CDUnknownBlockType)arg1;

@end

