//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/JCORETcpConnectProtocol-Protocol.h>

@class JCORESocketConfig, NSString;

@interface JCORETcpConnectModel : NSObject <JCORETcpConnectProtocol>
{
    unsigned char protocolType;
    unsigned short statusCode;
    JCORESocketConfig *socketConfig;
}

@property(retain, nonatomic) JCORESocketConfig *socketConfig; // @synthesize socketConfig;
@property(nonatomic) unsigned short statusCode; // @synthesize statusCode;
@property(nonatomic) unsigned char protocolType; // @synthesize protocolType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
