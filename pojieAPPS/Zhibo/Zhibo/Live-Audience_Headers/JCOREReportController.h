//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JPUSHHttpRequestDelegate-Protocol.h"

@class JPUSHReportCacheController, NSMutableArray;

@interface JCOREReportController : NSObject <JPUSHHttpRequestDelegate>
{
    NSMutableArray *_httpBlockedQueue;
    JPUSHReportCacheController *_reportCache;
}

@property(retain, nonatomic) JPUSHReportCacheController *reportCache; // @synthesize reportCache=_reportCache;
@property(retain, nonatomic) NSMutableArray *httpBlockedQueue; // @synthesize httpBlockedQueue=_httpBlockedQueue;
- (void).cxx_destruct;
- (id)getHttpNetworkErrorStringWith:(long long)arg1;
- (void)didNotReceivedFromRequest:(id)arg1 withReportFlag:(id)arg2 WithError:(id)arg3;
- (void)didReceivedHttpFeedback:(id)arg1;
- (id)getDefaultAddress:(int)arg1;
- (id)getBackUpAddress:(int)arg1;
- (id)setRequestManager:(id)arg1;
- (id)sharedArray:(id)arg1 and:(id)arg2;
- (id)reportAddressListForKey:(id)arg1 request:(id)arg2;
- (void)configAddressOfReport:(id)arg1;
- (void)startSendRequest:(id)arg1;
- (void)doSendHttpReport:(id)arg1;
- (void)sendHttpReport:(id)arg1;
- (void)sendHistoryReports;
- (void)sendAllBlockedHttpReports;
- (void)reportAPNSStateInWorkThread:(id)arg1;
- (void)reportAPNSState:(unsigned long long)arg1;
- (void)reportLocationInfo:(id)arg1;
- (void)reportBatteryInfo;
- (void)reportCrashLog;
- (void)reportDeviceInfo;
- (void)reportLaunch:(double)arg1;
- (void)reportActive:(double)arg1 with:(double)arg2;
- (void)resetReportCache;
- (void)initReportCache;
- (id)init;
- (void)dealloc;

@end

