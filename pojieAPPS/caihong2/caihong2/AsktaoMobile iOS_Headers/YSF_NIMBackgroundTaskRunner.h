//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YSF_NIMBackgroundTaskRunner : NSObject
{
    unsigned long long _backgroundTaskID;
}

@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end
