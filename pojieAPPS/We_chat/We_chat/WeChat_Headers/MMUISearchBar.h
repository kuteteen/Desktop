//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@class NSMutableDictionary, UIView;

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
    _Bool m_bNonControllerBind;
    _Bool m_bForbidCenterPlaceLabel;
    NSMutableDictionary *_dicKVOHelper;
    UIView *_bottomLine;
    _Bool _bAnimatingCenterPlaceLabel;
    unsigned long long _bottomLineStyle;
    unsigned long long _eControlState;
}

@property(nonatomic) unsigned long long eControlState; // @synthesize eControlState=_eControlState;
@property(nonatomic) unsigned long long bottomLineStyle; // @synthesize bottomLineStyle=_bottomLineStyle;
@property(nonatomic) _Bool bAnimatingCenterPlaceLabel; // @synthesize bAnimatingCenterPlaceLabel=_bAnimatingCenterPlaceLabel;
@property(nonatomic) _Bool m_bForbidCenterPlaceLabel; // @synthesize m_bForbidCenterPlaceLabel;
@property(nonatomic) _Bool m_bNonControllerBind; // @synthesize m_bNonControllerBind;
@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)updateBottomLineStyle;
- (void)animateProgressMovePlaceLabelWhenActiveByX:(double)arg1;
- (void)observeTextField;
- (void)fixSearchBarBackgroundWhenActive;
- (void)fixPlaceLabelCenterAlign:(_Bool)arg1;
- (void)fixTipsCenterAlign;
- (void)fixOrientationBug;
- (void)fixLayoutOnActiveSearch;
- (void)fixSearchIconSize;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)safeRemoveKVOForObj:(id)arg1 forKeyPath:(id)arg2;
- (void)safeAddKVOForObj:(id)arg1 forKeyPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)handleCursorObserveForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFakeCursor;
- (id)genFakeCursor;
- (void)animateFakeCursor;

@end

