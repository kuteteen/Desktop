//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IMYEBCouponInfoModel;

@interface IMYEBCouponTabModel : NSObject
{
    NSString *_tab_name;
    long long _coupon_category_id;
    NSString *_bottom_title;
    NSArray<IMYEBCouponInfoModel> *_coupon_list;
}

@property(retain, nonatomic) NSArray<IMYEBCouponInfoModel> *coupon_list; // @synthesize coupon_list=_coupon_list;
@property(retain, nonatomic) NSString *bottom_title; // @synthesize bottom_title=_bottom_title;
@property(nonatomic) long long coupon_category_id; // @synthesize coupon_category_id=_coupon_category_id;
@property(retain, nonatomic) NSString *tab_name; // @synthesize tab_name=_tab_name;
- (void).cxx_destruct;

@end

