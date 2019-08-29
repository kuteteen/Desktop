//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber;
@protocol OS_dispatch_queue, OS_dispatch_source, UATimerDelegate;

@interface UATimer : NSObject
{
    _Bool _timeout;
    _Bool _respondDelegate;
    id <UATimerDelegate> _delegate;
    double _duration;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDecimalNumber *_timeoutDcm;
}

+ (id)roundPlain3DecimalHandler;
+ (id)systemUpTimeDecimal;
@property(retain, nonatomic) NSDecimalNumber *timeoutDcm; // @synthesize timeoutDcm=_timeoutDcm;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(nonatomic) _Bool respondDelegate; // @synthesize respondDelegate=_respondDelegate;
@property(readonly, nonatomic, getter=isTimeout) _Bool timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <UATimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer;
- (id)init;

@end
