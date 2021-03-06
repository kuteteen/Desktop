//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTRewardsAccountTableCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MRTConsumer, MRTGradientView, NSString, UICollectionView, UIPageControl;

@interface MRTRewardsProgressContainerCell : MRTRewardsAccountTableCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isScrollingTappedCollectionView;
    MRTGradientView *_gradientViewLeft;
    MRTGradientView *_gradientViewRight;
    UIPageControl *_pageControl;
    UICollectionView *_collectionView;
    MRTConsumer *_consumer;
}

@property(retain, nonatomic) MRTConsumer *consumer; // @synthesize consumer=_consumer;
@property(nonatomic) _Bool isScrollingTappedCollectionView; // @synthesize isScrollingTappedCollectionView=_isScrollingTappedCollectionView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak MRTGradientView *gradientViewRight; // @synthesize gradientViewRight=_gradientViewRight;
@property(nonatomic) __weak MRTGradientView *gradientViewLeft; // @synthesize gradientViewLeft=_gradientViewLeft;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateRewardsProgressContainerCellColors;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)pageControlChanged:(id)arg1;
- (long long)currentPage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateConstraints;
- (void)_updatePageIndicatorColors;
- (void)_updateBackgroundGradientColors;
- (void)dealloc;
- (void)consumerChanged;
- (void)updateAccessibility;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

