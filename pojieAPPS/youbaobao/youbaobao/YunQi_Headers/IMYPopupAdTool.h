//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdTool.h"

@class IMYImagePopupAdView, RACDisposable;
@protocol IMYAlertDismissProtocol, IMYIAdvertiserModel, IMYIAdvertiserService;

@interface IMYPopupAdTool : IMYBaseAdTool
{
    _Bool _isDisplayAds;
    RACDisposable *_visibleDisposable;
    id <IMYIAdvertiserModel> _currentModel;
    id <IMYIAdvertiserService> _currentService;
    IMYImagePopupAdView *_adView;
    id <IMYAlertDismissProtocol> _adBox;
    long long _showAdCount;
}

+ (void)load;
@property(nonatomic) long long showAdCount; // @synthesize showAdCount=_showAdCount;
@property(nonatomic) _Bool isDisplayAds; // @synthesize isDisplayAds=_isDisplayAds;
@property(retain, nonatomic) id <IMYAlertDismissProtocol> adBox; // @synthesize adBox=_adBox;
@property(retain, nonatomic) IMYImagePopupAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <IMYIAdvertiserService> currentService; // @synthesize currentService=_currentService;
@property(nonatomic) __weak id <IMYIAdvertiserModel> currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) __weak RACDisposable *visibleDisposable; // @synthesize visibleDisposable=_visibleDisposable;
- (void).cxx_destruct;
- (id)positionKey:(long long)arg1;
- (void)setAdShowCountWithPosition:(long long)arg1 count:(long long)arg2;
- (long long)showAdCountWithPosition:(long long)arg1;
- (void)setHomeChapingConfig:(_Bool)arg1;
- (void)closeChapingAds;
- (void)showChapingAdsWithModel:(id)arg1 actionDone:(CDUnknownBlockType)arg2;
- (void)showChapingAds;
- (void)addAdService:(id)arg1;
- (id)initWithADInfo:(id)arg1;

@end
