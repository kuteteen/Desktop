//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAOPBaseUtils.h"

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol IMYAOPCollectionViewDataSource, IMYAOPCollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate;

@interface IMYAOPCollectionViewUtils : IMYAOPBaseUtils <UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    id <IMYAOPCollectionViewDelegate> _delegate;
    id <IMYAOPCollectionViewDataSource> _dataSource;
    id <UICollectionViewDelegate> _origDelegate;
    id <UICollectionViewDataSource> _origDataSource;
    Class _collectionViewClass;
    long long _isUICalling;
}

+ (id)aopUtilsWithCollectionView:(id)arg1;
@property(nonatomic) long long isUICalling; // @synthesize isUICalling=_isUICalling;
@property(retain, nonatomic) Class collectionViewClass; // @synthesize collectionViewClass=_collectionViewClass;
@property(nonatomic) __weak id <UICollectionViewDataSource> origDataSource; // @synthesize origDataSource=_origDataSource;
@property(nonatomic) __weak id <UICollectionViewDelegate> origDelegate; // @synthesize origDelegate=_origDelegate;
@property(nonatomic) __weak id <IMYAOPCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IMYAOPCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setupAopClass:(Class)arg1;
- (Class)msgSendSuperClass;
- (Class)implAopViewClass;
- (void)injectCollectionView;
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)indexTitlesForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumColumnSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)visibleCellsWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *visibleInsertCells;
- (id)indexPathForCell:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)proxyRawCollectionView;
- (id)modelForRowAtIndexPath:(id)arg1;
- (id)allModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

