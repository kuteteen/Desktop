//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBBHomeModel-Protocol.h"

@class NSArray, NSString;

@interface YBBHomeQuickEntryRowModel : NSObject <YBBHomeModel>
{
    NSString *cellClass;
    double rowHeight;
    NSArray *_items;
}

+ (id)modelWithArray:(id)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double rowHeight; // @synthesize rowHeight;
@property(copy, nonatomic) NSString *cellClass; // @synthesize cellClass;
- (void).cxx_destruct;
- (id)targetWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
