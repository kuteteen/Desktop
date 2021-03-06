//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UILabel, UIView;

@interface YBBHomeMotherLessonCollectionCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIView *_line;
    CDUnknownBlockType _selectItemAction;
    UIView *_seperationView;
    NSArray *_dataArray;
    long long _relatedIndex;
}

@property(nonatomic) long long relatedIndex; // @synthesize relatedIndex=_relatedIndex;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIView *seperationView; // @synthesize seperationView=_seperationView;
@property(copy, nonatomic) CDUnknownBlockType selectItemAction; // @synthesize selectItemAction=_selectItemAction;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToCenterAtIndex:(long long)arg1;
- (void)configureWithModel:(id)arg1 title:(id)arg2 relatedIndex:(long long)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

