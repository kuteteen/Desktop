//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIContentBuilder-Protocol.h"

@class NSString;

@interface IMYQQContentBuilder : NSObject <IMYIContentBuilder>
{
}

+ (void)buildMessageContent:(id)arg1 shareType:(long long)arg2 withSuccess:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
+ (id)URLWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

