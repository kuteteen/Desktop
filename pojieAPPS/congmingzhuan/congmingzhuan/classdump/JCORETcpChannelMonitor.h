//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSTimer;

@interface JCORETcpChannelMonitor : NSObject
{
    NSTimer *_sentTimer;
    unsigned short _rid;
    NSData *_data;
    CDUnknownBlockType _completion;
}

+ (void)monitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)receiveAckNotification:(id)arg1;
- (unsigned short)parseStatusCode:(id)arg1;
- (unsigned short)parseRid:(id)arg1;
- (void)onAckTimeout:(id)arg1;
- (void)stopSentTimer;
- (id)init;
- (void)dealloc;

@end
