//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYLineChartConfig, NSArray;

@protocol IMYBGCLineChartService <NSObject>
+ (NSArray *)largeDashYData:(NSArray *)arg1 type:(unsigned long long)arg2;
+ (NSArray *)largeDashXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2;
+ (NSArray *)largeLineYData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 type:(unsigned long long)arg3;
+ (NSArray *)largeLineXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 width:(double)arg3;
+ (NSArray *)monthFirstDashYData:(NSArray *)arg1 type:(unsigned long long)arg2;
+ (NSArray *)monthFirstDashXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2;
+ (void)refreshConfig:(IMYLineChartConfig *)arg1 withRecords:(NSArray *)arg2 type:(unsigned long long)arg3 index:(long long)arg4;
+ (NSArray *)monthFirstLineYData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 type:(unsigned long long)arg3;
+ (NSArray *)monthFirstLineXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 width:(double)arg3 type:(unsigned long long)arg4;
+ (NSArray *)recentAreaYData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 type:(unsigned long long)arg3;
+ (NSArray *)recentAreaXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2;
+ (NSArray *)recentLineYData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 type:(unsigned long long)arg3;
+ (NSArray *)recentLineXData:(NSArray *)arg1 config:(IMYLineChartConfig *)arg2 type:(unsigned long long)arg3;
+ (void)recentAxisCustomX:(IMYLineChartConfig *)arg1 records:(NSArray *)arg2 xData:(NSArray *)arg3 width:(double)arg4 type:(unsigned long long)arg5;
@end
