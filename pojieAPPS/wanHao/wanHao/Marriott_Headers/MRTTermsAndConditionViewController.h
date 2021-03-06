//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTStyledButton, MRTStyledLabel, UIView;

@interface MRTTermsAndConditionViewController : UIViewController
{
    MRTStyledLabel *_termsAndConditionsTitleLabel;
    MRTStyledLabel *_termsAndConditionsDescriptionLabel;
    MRTStyledButton *_linkOneButton;
    MRTStyledButton *_linkTwoButton;
    MRTStyledButton *_dismissButton;
    UIView *_backgroundView;
}

@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak MRTStyledButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak MRTStyledButton *linkTwoButton; // @synthesize linkTwoButton=_linkTwoButton;
@property(nonatomic) __weak MRTStyledButton *linkOneButton; // @synthesize linkOneButton=_linkOneButton;
@property(nonatomic) __weak MRTStyledLabel *termsAndConditionsDescriptionLabel; // @synthesize termsAndConditionsDescriptionLabel=_termsAndConditionsDescriptionLabel;
@property(nonatomic) __weak MRTStyledLabel *termsAndConditionsTitleLabel; // @synthesize termsAndConditionsTitleLabel=_termsAndConditionsTitleLabel;
- (void).cxx_destruct;
- (void)dismissButtonClicked:(id)arg1;
- (void)linkTwoButtonClicked:(id)arg1;
- (void)linkOneButtonClicked:(id)arg1;
- (void)viewDidLoad;

@end

