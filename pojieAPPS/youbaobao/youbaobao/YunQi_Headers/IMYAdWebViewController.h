//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebViewController.h"

@class NSArray, UIColor, UIImage, UILabel, UIScrollView, UIView;

@interface IMYAdWebViewController : IMYVKWebViewController
{
    _Bool _navbarIsHide;
    _Bool _viewInAppear;
    UIView *_headerView;
    UIView *_barOverlay;
    UIView *_adBackgroundView;
    UIView *_barButtonView;
    UIScrollView *_coolScrollView;
    UIColor *_tintColor;
    NSArray *_leftBarButtons;
    NSArray *_rightBarButtons;
    UILabel *_barTitleLabel;
    UIImage *_originalNavBackgroundImage;
    UIImage *_originalNavShadowImage;
    double _keyBoardHeight;
}

@property(nonatomic) _Bool viewInAppear; // @synthesize viewInAppear=_viewInAppear;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(retain, nonatomic) UIImage *originalNavShadowImage; // @synthesize originalNavShadowImage=_originalNavShadowImage;
@property(retain, nonatomic) UIImage *originalNavBackgroundImage; // @synthesize originalNavBackgroundImage=_originalNavBackgroundImage;
@property(retain, nonatomic) UILabel *barTitleLabel; // @synthesize barTitleLabel=_barTitleLabel;
@property(retain, nonatomic) NSArray *rightBarButtons; // @synthesize rightBarButtons=_rightBarButtons;
@property(retain, nonatomic) NSArray *leftBarButtons; // @synthesize leftBarButtons=_leftBarButtons;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIScrollView *coolScrollView; // @synthesize coolScrollView=_coolScrollView;
@property(retain, nonatomic) UIView *barButtonView; // @synthesize barButtonView=_barButtonView;
@property(retain, nonatomic) UIView *adBackgroundView; // @synthesize adBackgroundView=_adBackgroundView;
@property(retain, nonatomic) UIView *barOverlay; // @synthesize barOverlay=_barOverlay;
@property(nonatomic) _Bool navbarIsHide; // @synthesize navbarIsHide=_navbarIsHide;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setShowCloseButton:(_Bool)arg1;
- (void)imyuri_setTopbarButtonWithURIAction:(id)arg1;
- (id)webMaskView;
- (void)imy_topLeftButtonTouchupInside;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutCaptionView;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setTopBarTintColor:(id)arg1 ratio:(double)arg2;
- (void)setNavigationTitle:(id)arg1;
- (void)imy_themeChanged;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

@end

