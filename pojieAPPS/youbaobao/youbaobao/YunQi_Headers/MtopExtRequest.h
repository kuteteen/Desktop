//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TBSDKRequest;

@interface MtopExtRequest : NSObject
{
    _Bool _needLogin;
    _Bool _needAuth;
    _Bool _needWUA;
    _Bool _isCanceled;
    unsigned char _retryCount;
    int _sessionExpiredOption;
    int _authExpiredOption;
    double _timeOutSeconds;
    CDUnknownBlockType _startedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _succeedBlock;
    NSString *_apiName;
    NSString *_apiVersion;
    NSString *_requestID;
    NSString *_customHost;
    NSDictionary *_userInfo;
    NSString *_bizID;
    TBSDKRequest *_mrequest;
}

@property(readonly, nonatomic) unsigned char retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) TBSDKRequest *mrequest; // @synthesize mrequest=_mrequest;
@property(readonly, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(copy) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
@property(copy) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy) CDUnknownBlockType startedBlock; // @synthesize startedBlock=_startedBlock;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(nonatomic) int authExpiredOption; // @synthesize authExpiredOption=_authExpiredOption;
@property(nonatomic) int sessionExpiredOption; // @synthesize sessionExpiredOption=_sessionExpiredOption;
@property(nonatomic) _Bool needWUA; // @synthesize needWUA=_needWUA;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
- (void).cxx_destruct;
- (void)setToCacncel:(_Bool)arg1;
- (id)getBizParameters;
@property(readonly, nonatomic) NSDictionary *requestHeaders;
- (id)description;
- (void)cancel;
- (_Bool)isUseHttpPost;
- (void)useHttpPost;
- (void)removeBizParameter:(id)arg1;
- (void)addBizParameters:(id)arg1;
- (void)addBizParameter:(id)arg1 forKey:(id)arg2;
- (id)getExtParameters;
- (void)removeExtParameter:(id)arg1;
- (void)addExtParameters:(id)arg1;
- (void)addExtParameter:(id)arg1 forKey:(id)arg2;
- (void)addProtocolParameter:(id)arg1 forKey:(id)arg2;
- (void)addHttpHeaders:(id)arg1;
- (void)addHttpHeader:(id)arg1 forKey:(id)arg2;
- (void)reset;
- (double)getTimeOutSeconds;
- (void)makeRequest;
- (_Bool)isNeedRetry;
- (void)retryed;
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2 bizID:(id)arg3;

@end
