//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIAdRawDataRequest-Protocol.h"

@class IMYAdvertiserInfo, NSString, RACDisposable;

@interface IMYAdRawDataRequest : NSObject <IMYIAdRawDataRequest>
{
    _Bool _isRequesting;
    IMYAdvertiserInfo *_adInfo;
    RACDisposable *_requestDisposable;
}

@property(retain, nonatomic) RACDisposable *requestDisposable; // @synthesize requestDisposable=_requestDisposable;
@property(readonly, nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(readonly, copy, nonatomic) IMYAdvertiserInfo *adInfo; // @synthesize adInfo=_adInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestMapResponseWithOperation:(id)arg1;
- (id)requestParmasWithInput:(id)arg1;
- (void)asyncRequestMoreRawDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fails:(CDUnknownBlockType)arg3;
- (void)asyncRequestRawDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fails:(CDUnknownBlockType)arg3;
- (void)requestMoreRawDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fails:(CDUnknownBlockType)arg3;
- (void)requestRawDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fails:(CDUnknownBlockType)arg3;
- (void)setRequesting:(_Bool)arg1;
- (void)cancelRequest;
- (id)initWithADInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

