//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface PayIBGTransaction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buyBankName; // @dynamic buyBankName;
@property(retain, nonatomic) NSString *des; // @dynamic des;
@property(retain, nonatomic) NSMutableArray *discountArray; // @dynamic discountArray;
@property(retain, nonatomic) NSString *feeType; // @dynamic feeType;
@property(nonatomic) unsigned int modifyTimestamp; // @dynamic modifyTimestamp;
@property(nonatomic) unsigned long long originalTotalFee; // @dynamic originalTotalFee;
@property(retain, nonatomic) NSString *payStatusName; // @dynamic payStatusName;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(retain, nonatomic) NSString *spName; // @dynamic spName;
@property(nonatomic) unsigned int totalFee; // @dynamic totalFee;
@property(nonatomic) unsigned int tradeStatus; // @dynamic tradeStatus;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end
