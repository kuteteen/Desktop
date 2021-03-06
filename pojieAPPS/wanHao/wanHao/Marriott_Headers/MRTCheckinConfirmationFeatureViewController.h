//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTFixedSizeGridViewDataSource-Protocol.h"

@class MRTCheckinFeatures, MRTFixedSizeGridView, MRTReservation, NSArray, NSString;

@interface MRTCheckinConfirmationFeatureViewController : UIViewController <MRTFixedSizeGridViewDataSource>
{
    MRTReservation *_reservation;
    MRTCheckinFeatures *_features;
    NSArray *_viewModels;
    MRTFixedSizeGridView *_featuresGridView;
}

@property(retain, nonatomic) MRTFixedSizeGridView *featuresGridView; // @synthesize featuresGridView=_featuresGridView;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) MRTCheckinFeatures *features; // @synthesize features=_features;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
- (void).cxx_destruct;
- (id)fixedSizeGridView:(id)arg1 cellAtIndex:(long long)arg2;
- (long long)numberOfItemsInFixedSizeGridView:(id)arg1;
- (id)greenChoiceFeatureViewModel;
- (id)plantATreeFeatureViewModel;
- (id)eliteGiftFeatureViewModel;
- (id)parkingFeatureViewModel;
- (id)mobileKeyFeatureViewModel;
- (id)lateCheckoutFeatureViewModel;
- (id)currencyFeatureViewModel;
- (id)upgradeFeatureViewModel;
- (id)arrivalTimeFeatureViewModel;
- (void)configureFeaturesGridView;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

