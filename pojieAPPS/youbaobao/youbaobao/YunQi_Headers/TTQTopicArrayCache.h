//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TTQTopicArrayCache : NSObject
{
    _Bool _isCancel;
    long long _topic_id;
    NSArray *_array;
}

@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property _Bool isCancel; // @synthesize isCancel=_isCancel;
@property long long topic_id; // @synthesize topic_id=_topic_id;
- (void).cxx_destruct;
- (void)start;

@end

