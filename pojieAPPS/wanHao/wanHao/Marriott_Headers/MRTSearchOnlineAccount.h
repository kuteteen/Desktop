//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTAddress, MRTName, NSString;

@interface MRTSearchOnlineAccount : MRTObject
{
    NSString *_rewardsNumber;
    MRTName *_name;
    MRTAddress *_address;
}

@property(copy, nonatomic) MRTAddress *address; // @synthesize address=_address;
@property(copy, nonatomic) MRTName *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *rewardsNumber; // @synthesize rewardsNumber=_rewardsNumber;
- (void).cxx_destruct;
- (id)serializationPropertyNames;
- (_Bool)isValid;
- (_Bool)isRewardsNumberValid:(id)arg1;
- (_Bool)validateRewardsNumber:(id *)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
