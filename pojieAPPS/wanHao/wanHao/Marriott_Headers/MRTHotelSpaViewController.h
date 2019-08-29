//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTHotelInfoViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface MRTHotelSpaViewController : MRTHotelInfoViewController <MFMailComposeViewControllerDelegate>
{
    NSArray *_sections;
}

+ (id)emailNotPresentTitle;
+ (id)cancelTitle;
+ (id)nearbySpasSectionTitle;
+ (id)onPropertySpaSectionTitle;
+ (id)spaCategory;
+ (id)moreDetails;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (CDUnknownBlockType)emailActionFromSpa:(id)arg1;
- (CDUnknownBlockType)makeReservationActionFromSpa:(id)arg1;
- (CDUnknownBlockType)phoneActionFromSpa:(id)arg1;
- (CDUnknownBlockType)websiteActionFromSpa:(id)arg1;
- (void)configureCell:(id)arg1 withSpa:(id)arg2;
- (void)handleSpasResponse:(id)arg1;
- (void)fetchSpaModels;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
