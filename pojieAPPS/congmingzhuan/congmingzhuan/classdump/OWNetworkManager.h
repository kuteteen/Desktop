//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/MMLANScannerDelegate-Protocol.h>

@class MMLANScanner, NSMutableArray, NSString;

@interface OWNetworkManager : NSObject <MMLANScannerDelegate>
{
    MMLANScanner *_lanScanner;
    NSMutableArray *_tracerouteResultArray;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *tracerouteResultArray; // @synthesize tracerouteResultArray=_tracerouteResultArray;
@property(retain, nonatomic) MMLANScanner *lanScanner; // @synthesize lanScanner=_lanScanner;
- (void).cxx_destruct;
- (unsigned int)IPv4Pton:(id)arg1;
- (id)IPv4Ntop:(unsigned int)arg1;
- (id)getMacAddress;
- (void)lanScanDidFinishScanningWithStatus:(int)arg1;
- (void)lanScanDidFindNewDevice:(id)arg1;
- (void)lanScanDidFailedToScan;
- (void)startTraceRoute;
- (void)startScanLAN;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
