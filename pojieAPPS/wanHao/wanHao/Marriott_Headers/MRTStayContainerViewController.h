//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTContextButtonItem, MRTDigitalKeyFlowController, MRTReservation, MRTTitleSegmentedControl, NSArray, NSDate, NSString, UIView;

@interface MRTStayContainerViewController : UIViewController
{
    _Bool _isTitleSegmentedControlAnchored;
    _Bool _isStayServicesAvailable;
    MRTReservation *_reservation;
    MRTDigitalKeyFlowController *_digitalKeyFlowController;
    unsigned long long _defaultPage;
    NSString *_analyticsPageName;
    MRTContextButtonItem *_mobileKeyContextButtonItem;
    MRTContextButtonItem *_printKeyContextButtonItem;
    MRTContextButtonItem *_chatContextButtonItem;
    NSDate *_fetchDate;
    MRTTitleSegmentedControl *_titleSegmentedControl;
    long long _previousSegmentedControlIndex;
    UIView *_containerView;
    UIViewController *_currentChildViewController;
    NSArray *_viewControllers;
}

+ (id)coachMarkSkipText;
+ (id)coachMarkMessageText;
+ (void)resetAllCoachMarks;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property(nonatomic) _Bool isStayServicesAvailable; // @synthesize isStayServicesAvailable=_isStayServicesAvailable;
@property(nonatomic) _Bool isTitleSegmentedControlAnchored; // @synthesize isTitleSegmentedControlAnchored=_isTitleSegmentedControlAnchored;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long previousSegmentedControlIndex; // @synthesize previousSegmentedControlIndex=_previousSegmentedControlIndex;
@property(retain, nonatomic) MRTTitleSegmentedControl *titleSegmentedControl; // @synthesize titleSegmentedControl=_titleSegmentedControl;
@property(retain, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(retain, nonatomic) MRTContextButtonItem *chatContextButtonItem; // @synthesize chatContextButtonItem=_chatContextButtonItem;
@property(retain, nonatomic) MRTContextButtonItem *printKeyContextButtonItem; // @synthesize printKeyContextButtonItem=_printKeyContextButtonItem;
@property(retain, nonatomic) MRTContextButtonItem *mobileKeyContextButtonItem; // @synthesize mobileKeyContextButtonItem=_mobileKeyContextButtonItem;
@property(copy, nonatomic) NSString *analyticsPageName; // @synthesize analyticsPageName=_analyticsPageName;
@property(nonatomic) unsigned long long defaultPage; // @synthesize defaultPage=_defaultPage;
@property(retain, nonatomic) MRTDigitalKeyFlowController *digitalKeyFlowController; // @synthesize digitalKeyFlowController=_digitalKeyFlowController;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
- (void).cxx_destruct;
- (void)reportNoKeyDownloadedForPresentationMode:(long long)arg1;
- (id)stayServicesUnavailableMessage;
- (void)_updateTitlesAnimated:(_Bool)arg1;
- (void)_updateTitleColor;
- (void)_transitionToChildViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_titleSegmentedControlValueChanged:(id)arg1;
- (void)reservationChangedNotification:(id)arg1;
- (void)networkAvailabilityChanged:(id)arg1;
- (void)_networkAvailabilityChanged;
- (void)stayServicesChangedNotification:(id)arg1;
- (void)timeChangedNotification:(id)arg1;
- (void)_navigateToChildPage:(unsigned long long)arg1 withNextPath:(id)arg2;
- (void)navigateToPath:(id)arg1;
- (void)updateDefaultPage;
- (unsigned long long)pageForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForPage:(unsigned long long)arg1;
- (id)presentDigitalKeyHelpMode:(unsigned long long)arg1;
- (id)presentDigitalKeyHelp;
- (void)presentDigitalKeyForPresentationMode:(long long)arg1;
- (void)presentDigitalKeyPrint;
- (void)presentDigitalKeyUnlock;
- (id)presentChat;
- (void)adjustContextButtonsVisibilityForOneButtonItem:(id)arg1 contentOffset:(struct CGPoint)arg2 adjustsTitleAlpha:(_Bool)arg3;
- (id)contextButtonItems;
- (void)mrt_oneButtonDidLandOnStartup;
- (id)mobileKeyCoachMarkConfiguration;
- (_Bool)_mobileKeyCoachMarkIsCompleted;
- (void)_markMobileKeyCoachMarkAsComplete;
- (void)_closeCoachMark;
- (void)_handleCoachMarkSkipTap;
- (_Bool)_shouldShowMobileKeyCoachMark;
- (void)showMobileKeyCoachMarkIfNeeded;
- (id)oneButtonItem;
- (_Bool)shouldGetLatestStay;
- (void)fetchStayServicesForReservation:(id)arg1;
- (_Bool)digitalKeyHelpDisplayed;
- (void)setDigitalKeyHelpDisplayed:(_Bool)arg1;
- (void)willBePresented;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForOneButtonMenuConfiguration;
- (id)childViewControllerForOneButtonConfiguration;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)appNavigationIdentifier;
- (void)dealloc;

@end
