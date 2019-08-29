//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYEBBrandDetailModel, IMYRoundButton, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel;

@interface IMYEBBrandSingleCell : UITableViewCell
{
    UILabel *_discountLabel;
    UILabel *_titleLabel;
    UILabel *_rightTitleLabel;
    IMYRoundButton *_moodsButton;
    UIImageView *_contentImageView;
    UIImageView *_custonTagImageView;
    UILabel *_customTagLabel;
    NSLayoutConstraint *_leftTitleLayoutConstraint;
    IMYEBBrandDetailModel *_model;
    NSMutableArray *_tagImageViews;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSMutableArray *tagImageViews; // @synthesize tagImageViews=_tagImageViews;
@property(retain, nonatomic) IMYEBBrandDetailModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NSLayoutConstraint *leftTitleLayoutConstraint; // @synthesize leftTitleLayoutConstraint=_leftTitleLayoutConstraint;
@property(nonatomic) __weak UILabel *customTagLabel; // @synthesize customTagLabel=_customTagLabel;
@property(nonatomic) __weak UIImageView *custonTagImageView; // @synthesize custonTagImageView=_custonTagImageView;
@property(nonatomic) __weak UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak IMYRoundButton *moodsButton; // @synthesize moodsButton=_moodsButton;
@property(nonatomic) __weak UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
- (void).cxx_destruct;
- (void)TAGImageDownloadFinished;
- (void)awakeFromNib;
- (void)setFrame:(struct CGRect)arg1;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
