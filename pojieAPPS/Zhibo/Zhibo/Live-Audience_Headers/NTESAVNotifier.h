//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILocalNotification;

@interface NTESAVNotifier : NSObject
{
    _Bool _shouldStopVibrate;
    UILocalNotification *_currentNotification;
    long long _vibrateCount;
}

@property(nonatomic) long long vibrateCount; // @synthesize vibrateCount=_vibrateCount;
@property(nonatomic) _Bool shouldStopVibrate; // @synthesize shouldStopVibrate=_shouldStopVibrate;
@property(retain, nonatomic) UILocalNotification *currentNotification; // @synthesize currentNotification=_currentNotification;
- (void).cxx_destruct;
- (void)raiseNotification:(id)arg1;
- (void)vibrate;
- (void)willEnterForeground:(id)arg1;
- (void)stop;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)init;

@end

