//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTableViewCell.h"

@class IMYYBOrderRewardItemModel, UILabel;

@interface IMYYBOrderRewardItemCell : IMYTableViewCell
{
    UILabel *_order_id_label;
    UILabel *_item_name_label;
    UILabel *_coin_amount_label;
}

+ (double)cellHeight;
+ (id)cellWithTableView:(id)arg1;
@property(nonatomic) __weak UILabel *coin_amount_label; // @synthesize coin_amount_label=_coin_amount_label;
@property(nonatomic) __weak UILabel *item_name_label; // @synthesize item_name_label=_item_name_label;
@property(nonatomic) __weak UILabel *order_id_label; // @synthesize order_id_label=_order_id_label;
- (void).cxx_destruct;
@property(retain, nonatomic) IMYYBOrderRewardItemModel *model;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
