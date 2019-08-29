//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;

@interface YQYouzanURLProtocol : NSURLProtocol <NSURLConnectionDataDelegate>
{
    NSMutableData *_responseData;
    NSURLConnection *_connection;
}

+ (void)setOrderNoJS:(id)arg1;
+ (void)setGetOrderNoPath:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)convertToJsonData:(id)arg1;
- (id)orderNo:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
