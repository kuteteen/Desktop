//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPUImageFilter.h"

@class AxialTransfer;

@interface NightEnhanceFilter : CPUImageFilter
{
    float param;
    AxialTransfer *at;
    double scale;
}

- (void).cxx_destruct;
- (id)filterprocess;
- (id)nightProcessGPU:(id)arg1;
- (id)main;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)init;

@end

