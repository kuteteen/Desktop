//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@class NSString;

@interface MRTTripSuiteNightAwardAPIRequest : MRTAPIV2Request
{
    NSString *_tripID;
}

@property(copy, nonatomic) NSString *tripID; // @synthesize tripID=_tripID;
- (void).cxx_destruct;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)dsapCachePopulationRequest;
- (id)initForCancelWithReservation:(id)arg1;
- (id)initForUpdateWithReservation:(id)arg1 andRoomTypes:(id)arg2;
- (id)initForFetchWithReservation:(id)arg1 withForce:(_Bool)arg2;
- (id)initWithReservation:(id)arg1 withForce:(_Bool)arg2;

@end
