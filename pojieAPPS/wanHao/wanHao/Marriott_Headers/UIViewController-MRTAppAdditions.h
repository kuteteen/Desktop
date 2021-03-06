//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTDigitalKeyHelpPageDelegate-Protocol.h"

@class NSString;

@interface UIViewController (MRTAppAdditions) <MRTDigitalKeyHelpPageDelegate>
- (void)mrt_createProactiveChatIfNeededForReservation:(id)arg1 pageName:(id)arg2;
- (void)digitalKeyHelpPageViewController:(id)arg1 didFinishWithResult:(unsigned long long)arg2;
- (void)mrt_presentPrivacyPolicy;
- (id)mrt_presentDigitalKeyHelpViewControllerForReservation:(id)arg1 keyFlowController:(id)arg2 helpMode:(unsigned long long)arg3;
- (id)mrt_presentDigitalKeyUnlockViewControllerForReservation:(id)arg1;
- (void)mrt_presentDigitalKeyPrintViewControllerForReservation:(id)arg1;
- (void)mrt_presentDigitalKeyViewController;
- (id)mrt_presentChatViewControllerForReservation:(id)arg1 withTintColor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mrt_toggleSavedHotelContextButtonItem:(id)arg1 property:(id)arg2 pageName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mrt_updateSavedHotelContextButtonItem:(id)arg1 withProperty:(id)arg2;
- (id)mrt_savedHotelContextButtonItemWithProperty:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)mrt_directionsContextButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (id)mrt_printKeyContextButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (id)mrt_mobileKeyContextButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (id)mrt_chatContextButtonItemWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

