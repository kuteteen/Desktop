//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSDictionary;

@interface WAJSEventHandler_getSystemInfo : WAJSEventHandler_BaseEvent
{
    NSDictionary *_systemInfoDic;
    double _beginClock;
}

@property(nonatomic) double beginClock; // @synthesize beginClock=_beginClock;
@property(retain, nonatomic) NSDictionary *systemInfoDic; // @synthesize systemInfoDic=_systemInfoDic;
- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;

@end

