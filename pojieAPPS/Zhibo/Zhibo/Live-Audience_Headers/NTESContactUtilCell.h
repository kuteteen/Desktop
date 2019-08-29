//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NTESBadgeView;
@protocol NTESContactItem, NTESContactUtilCellDelegate;

@interface NTESContactUtilCell : UITableViewCell
{
    id <NTESContactUtilCellDelegate> _delegate;
    NTESBadgeView *_badgeView;
    id <NTESContactItem> _data;
}

@property(retain, nonatomic) id <NTESContactItem> data; // @synthesize data=_data;
@property(retain, nonatomic) NTESBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak id <NTESContactUtilCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addDelegate:(id)arg1;
- (void)onPressUtilImage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshWithContactItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
