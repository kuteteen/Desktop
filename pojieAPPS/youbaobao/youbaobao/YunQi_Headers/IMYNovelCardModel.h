//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecommendBaseModel.h"

@class NSArray, NSString;
@protocol IMYNovelModel;

@interface IMYNovelCardModel : IMYRecommendBaseModel
{
    NSString *_r_text;
    NSArray<IMYNovelModel> *_items;
}

@property(retain, nonatomic) NSArray<IMYNovelModel> *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *r_text; // @synthesize r_text=_r_text;
- (void).cxx_destruct;
- (_Bool)isNeedFeedBackBtn;
- (void)cacluateNewStyleCellHeight:(id)arg1;
- (void)cacluateCellHeight:(id)arg1;

@end
