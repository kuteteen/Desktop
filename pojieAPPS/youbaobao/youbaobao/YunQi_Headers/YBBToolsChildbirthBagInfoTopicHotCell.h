//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, YBBToolsChildbirthBagInfoTopicModel;

@interface YBBToolsChildbirthBagInfoTopicHotCell : UITableViewCell
{
    UIImageView *_forumImageView;
    UILabel *_title;
    UILabel *_forumLabel;
    UILabel *_replyIcon;
    UILabel *_replyLabel;
    UIImageView *_iconView;
    YBBToolsChildbirthBagInfoTopicModel *_model;
}

@property(nonatomic) __weak YBBToolsChildbirthBagInfoTopicModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *replyLabel; // @synthesize replyLabel=_replyLabel;
@property(nonatomic) __weak UILabel *replyIcon; // @synthesize replyIcon=_replyIcon;
@property(nonatomic) __weak UILabel *forumLabel; // @synthesize forumLabel=_forumLabel;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIImageView *forumImageView; // @synthesize forumImageView=_forumImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCellWithModel:(id)arg1;
- (void)awakeFromNib;

@end
