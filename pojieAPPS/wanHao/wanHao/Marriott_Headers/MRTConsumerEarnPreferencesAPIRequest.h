//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@interface MRTConsumerEarnPreferencesAPIRequest : MRTAPIV2Request
{
}

- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)initForUpdateWithCustomerID:(id)arg1 currencyType:(id)arg2 partnerAccount:(id)arg3;
- (id)initForFetchWithCustomerID:(id)arg1;
- (id)initWithCustomerID:(id)arg1;

@end

