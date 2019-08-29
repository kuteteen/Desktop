//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYVKWebViewDelegate-Protocol.h"

@class IMYVKWebView, IMYVKWebViewController, NJKWebViewProgressView, NSString;

@interface YBBOldMergeFoodsVC : IMYPublicBaseViewController <IMYVKWebViewDelegate>
{
    _Bool _isNoFirst;
    long long _type;
    long long _day;
    long long _age;
    long long _mode;
    IMYVKWebView *_webView;
    NJKWebViewProgressView *_progressView;
    double _showProgressValue;
    IMYVKWebViewController *_webVC;
}

@property(nonatomic) _Bool isNoFirst; // @synthesize isNoFirst=_isNoFirst;
@property(retain, nonatomic) IMYVKWebViewController *webVC; // @synthesize webVC=_webVC;
@property(nonatomic) double showProgressValue; // @synthesize showProgressValue=_showProgressValue;
@property(retain, nonatomic) NJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IMYVKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)isNavigationBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
