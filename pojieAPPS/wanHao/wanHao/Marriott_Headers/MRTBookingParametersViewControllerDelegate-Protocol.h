//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRTBookingParametersViewController, NSString;

@protocol MRTBookingParametersViewControllerDelegate <NSObject>

@optional
- (void)bookingParametersViewControllerDidClearDates:(MRTBookingParametersViewController *)arg1;
- (void)bookingParametersViewControllerOptionsDidChange:(MRTBookingParametersViewController *)arg1;
- (void)bookingParametersViewController:(MRTBookingParametersViewController *)arg1 didChangeLocationText:(NSString *)arg2 finishedEditing:(_Bool)arg3;
- (void)bookingParametersViewControllerDidTapLocationButton:(MRTBookingParametersViewController *)arg1;
- (void)bookingParametersViewControllerDidTapDateButton:(MRTBookingParametersViewController *)arg1;
- (NSString *)bookingContext;
@end

