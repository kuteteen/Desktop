//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IMYWebShareRegister : NSObject
{
    NSArray *_keyArray;
    NSString *_key;
    NSDictionary *_jsMap;
    long long _level;
    CDUnknownBlockType _didGetShareInfo;
}

@property(copy, nonatomic) CDUnknownBlockType didGetShareInfo; // @synthesize didGetShareInfo=_didGetShareInfo;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSDictionary *jsMap; // @synthesize jsMap=_jsMap;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSArray *keyArray; // @synthesize keyArray=_keyArray;
- (void).cxx_destruct;
- (id)init;

@end

