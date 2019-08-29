//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBToolsTYPagerController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAGradientLayer, NSString, UICollectionView, UIFont, UIImageView, UIView;
@protocol YBBToolsTYTabPagerControllerDelegate;

@interface YBBToolsTYTabPagerController : YBBToolsTYPagerController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    struct {
        unsigned int titleForIndex:1;
    } _tabDataSourceFlags;
    struct {
        unsigned int configreReusableCell:1;
        unsigned int didSelectAtIndexPath:1;
        unsigned int didScrollToTabPageIndex:1;
        unsigned int transitionFromeCellAnimated:1;
        unsigned int transitionFromeCellProgress:1;
    } _tabDelegateFlags;
    long long currentIndex;
    _Bool _cellContainXib;
    UIView *_pagerBarView;
    UIImageView *_pagerBarImageView;
    UICollectionView *_collectionViewBar;
    UIView *_progressView;
    unsigned long long _barStyle;
    double _collectionLayoutEdging;
    double _progressHeight;
    double _progressWidth;
    double _progressEdging;
    double _progressBottomEdging;
    double _cellWidth;
    double _cellSpacing;
    double _cellEdging;
    double _gradientWidth;
    double _animateDuration;
    UIFont *_normalTextFont;
    UIFont *_selectedTextFont;
    CDUnknownBlockType _didSelectIndexPathHandle;
    UIView *_separationLine;
    CAGradientLayer *_rightGradientLayer;
    Class _cellClass;
    NSString *_cellId;
}

@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(nonatomic) _Bool cellContainXib; // @synthesize cellContainXib=_cellContainXib;
@property(nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) __weak CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(nonatomic) __weak UIView *separationLine; // @synthesize separationLine=_separationLine;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndexPathHandle; // @synthesize didSelectIndexPathHandle=_didSelectIndexPathHandle;
@property(retain, nonatomic) UIFont *selectedTextFont; // @synthesize selectedTextFont=_selectedTextFont;
@property(retain, nonatomic) UIFont *normalTextFont; // @synthesize normalTextFont=_normalTextFont;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double cellEdging; // @synthesize cellEdging=_cellEdging;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double progressBottomEdging; // @synthesize progressBottomEdging=_progressBottomEdging;
@property(nonatomic) double progressEdging; // @synthesize progressEdging=_progressEdging;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) double progressHeight; // @synthesize progressHeight=_progressHeight;
@property(nonatomic) double collectionLayoutEdging; // @synthesize collectionLayoutEdging=_collectionLayoutEdging;
@property(nonatomic) unsigned long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) __weak UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UICollectionView *collectionViewBar; // @synthesize collectionViewBar=_collectionViewBar;
@property(nonatomic) __weak UIImageView *pagerBarImageView; // @synthesize pagerBarImageView=_pagerBarImageView;
@property(nonatomic) __weak UIView *pagerBarView; // @synthesize pagerBarView=_pagerBarView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (struct CGSize)boundingSizeWithString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 progress:(double)arg3;
- (void)transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setUnderLineFrameWithfromIndex:(long long)arg1 toIndex:(long long)arg2 progress:(double)arg3;
- (void)setUnderLineFrameWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutTabPagerView;
- (void)tabScrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)cellForIndex:(long long)arg1;
- (struct CGRect)cellFrameWithIndex:(long long)arg1;
- (void)registerCellClass:(Class)arg1 isContainXib:(_Bool)arg2;
- (void)updateContentView;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
@property(nonatomic) __weak id <YBBToolsTYTabPagerControllerDelegate> delegate;
- (void)addGradientLayer;
- (void)addUnderLineView;
- (void)addCollectionViewBar;
- (void)addPagerBarBgImageView;
- (void)addPagerBarView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)configireTabPropertys;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
