//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_PSDElement.h"

@class NSString;

@interface _PSDEventElement : _PSDElement
{
    NSString *_eventId;
    NSString *_label;
    long long _counter;
}

+ (id)toType;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)toJSONObject;
- (void)accept:(id)arg1;

@end

