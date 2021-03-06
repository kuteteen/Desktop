//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTSignInViewController.h"

@interface MRTSPGSignInViewController : MRTSignInViewController
{
    _Bool _isDisplayingSPGLegacyNewNumber;
    _Bool _hasValidTouchIDAuth;
}

@property(nonatomic) _Bool hasValidTouchIDAuth; // @synthesize hasValidTouchIDAuth=_hasValidTouchIDAuth;
@property(nonatomic) _Bool isDisplayingSPGLegacyNewNumber; // @synthesize isDisplayingSPGLegacyNewNumber=_isDisplayingSPGLegacyNewNumber;
- (id)removalLegacyMemberNumberDetailText;
- (void)transitionToSPG11StateWithNewAccountNumber:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (_Bool)showsTouchIDAfterSignInButtonTap;
- (void)touchIDAuthWasSuccessful;
- (void)handleSuccessfulSignInWithLoginResponse:(id)arg1 password:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)analyticsPageName;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

