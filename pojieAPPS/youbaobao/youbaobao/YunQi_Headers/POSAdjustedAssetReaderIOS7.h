//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "POSAssetReader-Protocol.h"

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface POSAdjustedAssetReaderIOS7 : NSObject <POSAssetReader>
{
    NSData *_imageData;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (void).cxx_destruct;
- (long long)read:(char *)arg1 fromOffset:(long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)prepareForNewOffset:(long long)arg1;
- (_Bool)hasBytesAvailableFromOffset:(long long)arg1;
- (void)openAsset:(id)arg1 fromOffset:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
