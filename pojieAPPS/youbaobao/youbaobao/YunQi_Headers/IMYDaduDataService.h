//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYDaduDataService-Protocol.h"

@class IMYDaduModel, NSMutableArray, NSString;

@interface IMYDaduDataService : NSObject <IMYDaduDataService>
{
    NSMutableArray *_allData;
    NSMutableArray *_deleteData;
    NSMutableArray *_unSyncData;
    NSMutableArray *_unSyncImageData;
    NSMutableArray *_leadData;
    IMYDaduModel *_recentModel;
}

+ (void)removeImageDataDict;
+ (id)recordTimeString;
+ (id)canShowDataTypeString:(_Bool)arg1;
+ (void)fetchUnSyncImageData;
+ (void)fetchUnSyncData;
+ (void)fetchDeleteUnSyncData;
+ (void)fetchAllNormalData;
+ (void)createLeadData;
+ (void)fetchLeadData;
+ (void)fixImageNames:(id)arg1;
+ (void)fetchData;
+ (void)updateLocal:(id)arg1;
+ (id)sharedService;
+ (id)getRecentData;
+ (id)getLeadData;
+ (id)getAllData;
+ (id)unSyncNormalData;
+ (id)unSyncDeleteData;
+ (void)deleteData:(id)arg1;
+ (void)refreshData:(id)arg1;
+ (void)syncUnSync:(id)arg1;
+ (void)syncDelete:(id)arg1 data:(id)arg2;
+ (id)setupDaduData;
@property(retain, nonatomic) IMYDaduModel *recentModel; // @synthesize recentModel=_recentModel;
@property(retain, nonatomic) NSMutableArray *leadData; // @synthesize leadData=_leadData;
@property(retain, nonatomic) NSMutableArray *unSyncImageData; // @synthesize unSyncImageData=_unSyncImageData;
@property(retain, nonatomic) NSMutableArray *unSyncData; // @synthesize unSyncData=_unSyncData;
@property(retain, nonatomic) NSMutableArray *deleteData; // @synthesize deleteData=_deleteData;
@property(retain, nonatomic) NSMutableArray *allData; // @synthesize allData=_allData;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

