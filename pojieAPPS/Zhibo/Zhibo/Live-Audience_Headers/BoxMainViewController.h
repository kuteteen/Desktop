//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface BoxMainViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    int _pape;
    double headerViewHeight;
    _Bool noMoreData;
    _Bool loading;
    UICollectionView *_collectionView;
    NSMutableArray *_dataSource;
    NSArray *_bannerModelArray;
}

@property(retain, nonatomic) NSArray *bannerModelArray; // @synthesize bannerModelArray=_bannerModelArray;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)nearbySignal;
- (void)setupLoadMoreFooter;
- (void)setupRefreshHeader;
- (void)startFresh;
- (void)setupUI;
- (void)registerClass;
- (void)longPressCollectionView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

