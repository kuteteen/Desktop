//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBBaseViewController.h"

#import "IMYEBFavouritesViewDelegate-Protocol.h"

@class IMYCaptionView, IMYEBFavouritesView, IYMEBFavouritesVM, NSString, UIView;

@interface IMYEBFavouritesViewController : IMYEBBaseViewController <IMYEBFavouritesViewDelegate>
{
    _Bool _hasNewFavourite;
    _Bool _isEditing;
    _Bool _isDeleting;
    _Bool _isDataInited;
    NSString *_push_item_id;
    IMYEBFavouritesView *_favouritesView;
    UIView *_infoView;
    IYMEBFavouritesVM *_favouritesVM;
    IMYCaptionView *_captionView;
}

@property(nonatomic) _Bool isDataInited; // @synthesize isDataInited=_isDataInited;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool hasNewFavourite; // @synthesize hasNewFavourite=_hasNewFavourite;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) IYMEBFavouritesVM *favouritesVM; // @synthesize favouritesVM=_favouritesVM;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) IMYEBFavouritesView *favouritesView; // @synthesize favouritesView=_favouritesView;
@property(copy, nonatomic) NSString *push_item_id; // @synthesize push_item_id=_push_item_id;
- (void).cxx_destruct;
- (void)showBottomView;
- (void)hideBottomView;
- (void)onBeginEdit:(_Bool)arg1;
- (void)onStopEdit:(_Bool)arg1;
- (void)onDeleteItems:(id)arg1;
- (void)onSelectItem:(id)arg1;
- (void)onLookForSimilarItemsOfItem:(id)arg1;
- (void)onDeleteItem:(id)arg1;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (void)hideInfoView;
- (void)showInfoViewWithText:(id)arg1 buttonTitle:(id)arg2 onButtonPressed:(CDUnknownBlockType)arg3 fullScrren:(_Bool)arg4;
- (void)updateParentControllerTab;
- (void)updateParentControllerTopRightButton;
- (void)showNotLogin;
- (void)showNoActiveItem;
- (void)showNoFavourites;
- (void)buildFavouritesView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)onNewFavourite:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

