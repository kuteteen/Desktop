//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MRTProduct, NSArray, NSString, UIButton, UITableView, UIView;

@interface MRTRateVariationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isModifyingReservation;
    UIButton *_doneButton;
    UITableView *_tableView;
    UIView *_doneButtonContainer;
    MRTProduct *_selectedRoom;
    NSArray *_rates;
    NSArray *_uniqueRates;
}

@property(nonatomic) _Bool isModifyingReservation; // @synthesize isModifyingReservation=_isModifyingReservation;
@property(copy, nonatomic) NSArray *uniqueRates; // @synthesize uniqueRates=_uniqueRates;
@property(copy, nonatomic) NSArray *rates; // @synthesize rates=_rates;
@property(retain, nonatomic) MRTProduct *selectedRoom; // @synthesize selectedRoom=_selectedRoom;
@property(nonatomic) __weak UIView *doneButtonContainer; // @synthesize doneButtonContainer=_doneButtonContainer;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (id)rateVariationDoneButtonTitle;
- (id)rateVariationDescriptionText;
- (id)nightlyAverageText;
- (void)doneButtonPressed:(id)arg1;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (id)averageRate;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)analyticsPageName;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)cellTypeOrdering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

