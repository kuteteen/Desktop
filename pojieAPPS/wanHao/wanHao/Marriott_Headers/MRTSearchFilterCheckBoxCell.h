//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTCheckBox, MRTStyledLabel, UIImageView;

@interface MRTSearchFilterCheckBoxCell : UITableViewCell
{
    _Bool _isEnabled;
    _Bool _isSelected;
    MRTCheckBox *_checkBox;
    MRTStyledLabel *_nameLabel;
    UIImageView *_iconImageView;
    MRTStyledLabel *_descriptionLabel;
    CDUnknownBlockType _tapCheckboxBlock;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) CDUnknownBlockType tapCheckboxBlock; // @synthesize tapCheckboxBlock=_tapCheckboxBlock;
@property(nonatomic, setter=setEnabled:) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) __weak MRTStyledLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak MRTStyledLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak MRTCheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void).cxx_destruct;
- (void)toggleCheckBox;
- (void)tapCheckbox:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithTitleText:(id)arg1 descriptionText:(id)arg2 iconName:(id)arg3 isSelected:(_Bool)arg4 isEnabled:(_Bool)arg5 tapCheckboxBlock:(CDUnknownBlockType)arg6;
- (void)awakeFromNib;

@end
