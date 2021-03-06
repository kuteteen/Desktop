//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BVLogger : NSObject
{
    unsigned long long _logLevel;
}

+ (id)sharedLogger;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void)printMessage:(id)arg1 forLogLevel:(unsigned long long)arg2;
- (void)printErrors:(id)arg1;
- (void)printError:(id)arg1;
- (void)error:(id)arg1;
- (void)warning:(id)arg1;
- (void)info:(id)arg1;
- (void)verbose:(id)arg1;
- (void)analyticsMessage:(id)arg1;
- (id)init;

@end

