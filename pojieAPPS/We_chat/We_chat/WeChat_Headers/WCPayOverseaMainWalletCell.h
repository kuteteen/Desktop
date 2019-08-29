//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView, WCPayOverseaPayFunctionObject;

@interface WCPayOverseaMainWalletCell : UICollectionViewCell
{
    _Bool _showNew;
    MMWebImageView *_m_iconView;
    MMWebImageView *_m_foregroundIconView;
    UILabel *_m_nameLabel;
    WCPayOverseaPayFunctionObject *_m_data;
    UIView *_m_wLine;
    UIView *_m_hLine;
}

@property(nonatomic) _Bool showNew; // @synthesize showNew=_showNew;
@property(retain, nonatomic) UIView *m_hLine; // @synthesize m_hLine=_m_hLine;
@property(retain, nonatomic) UIView *m_wLine; // @synthesize m_wLine=_m_wLine;
@property(retain, nonatomic) WCPayOverseaPayFunctionObject *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain, nonatomic) MMWebImageView *m_foregroundIconView; // @synthesize m_foregroundIconView=_m_foregroundIconView;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
- (void).cxx_destruct;
- (void)updateCellData:(id)arg1 showNew:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateLine;
- (void)updateNameLabel;
- (void)updateForegroundIconView;
- (void)updateIconView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
