//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYYBOrderRewardItemModel : NSObject
{
    NSString *_order_id;
    NSString *_item_name;
    long long _coin_amount;
}

@property(nonatomic) long long coin_amount; // @synthesize coin_amount=_coin_amount;
@property(copy, nonatomic) NSString *item_name; // @synthesize item_name=_item_name;
@property(copy, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
- (void).cxx_destruct;

@end
