//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTRewardsAccountTableCell.h"

@class UILabel;

@interface MRTRewardsPromotionsCell : MRTRewardsAccountTableCell
{
    UILabel *_titleLabel;
}

+ (id)sectionTitle;
+ (_Bool)isVisibleInController:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)resetValuesWithConsumer:(id)arg1 inViewController:(id)arg2;
- (void)cellWasSelectedInController:(id)arg1;
- (_Bool)canBeSelectedInController:(id)arg1;

@end
