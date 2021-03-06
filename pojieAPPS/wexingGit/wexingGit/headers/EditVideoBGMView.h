//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditVideoBGMPlayerDelegate-Protocol.h"
#import "EditVideoBGMSearchViewDelegate-Protocol.h"
#import "MMMusicPickerScrollViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVAsset, EditVideoBGMFetchFeedbackLogic, EditVideoBGMPlayer, EditVideoBGMSearchView, MMMusicPickerScrollView, MMUIButton, NSMutableArray, NSString, UIView;
@protocol EditVideoBgmViewDelegate;

@interface EditVideoBGMView : MMUIView <MMMusicPickerScrollViewDelegate, UIGestureRecognizerDelegate, EditVideoBGMSearchViewDelegate, EditVideoBGMPlayerDelegate>
{
    _Bool _isPreviewVideoMute;
    _Bool _isMusicOn;
    _Bool _isLastInputModeDictation;
    _Bool _isClickSearchMusic;
    id <EditVideoBgmViewDelegate> _delegate;
    AVAsset *_avAsset;
    EditVideoBGMPlayer *_bgmPlayer;
    NSMutableArray *_preImageArray;
    unsigned long long _requestID;
    NSMutableArray *_musicList;
    long long _curMusicIndex;
    UIView *_contentView;
    UIView *_responseView;
    MMMusicPickerScrollView *_musicPickerView;
    MMUIButton *_musicOnOffBtn;
    EditVideoBGMSearchView *_searchView;
    EditVideoBGMFetchFeedbackLogic *_fetchBgmFeedBackLogic;
    unsigned long long _musicAddBySearchCount;
    NSMutableArray *_searchMusicTagForAddedMusics;
}

+ (void)kvReportBgmDataFor:(unsigned long long)arg1 musicSid:(unsigned int)arg2;
+ (unsigned int)getNetWorkType;
@property(retain, nonatomic) NSMutableArray *searchMusicTagForAddedMusics; // @synthesize searchMusicTagForAddedMusics=_searchMusicTagForAddedMusics;
@property(nonatomic) unsigned long long musicAddBySearchCount; // @synthesize musicAddBySearchCount=_musicAddBySearchCount;
@property(nonatomic) _Bool isClickSearchMusic; // @synthesize isClickSearchMusic=_isClickSearchMusic;
@property(retain, nonatomic) EditVideoBGMFetchFeedbackLogic *fetchBgmFeedBackLogic; // @synthesize fetchBgmFeedBackLogic=_fetchBgmFeedBackLogic;
@property(retain, nonatomic) EditVideoBGMSearchView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) _Bool isLastInputModeDictation; // @synthesize isLastInputModeDictation=_isLastInputModeDictation;
@property(retain, nonatomic) MMUIButton *musicOnOffBtn; // @synthesize musicOnOffBtn=_musicOnOffBtn;
@property(retain, nonatomic) MMMusicPickerScrollView *musicPickerView; // @synthesize musicPickerView=_musicPickerView;
@property(retain, nonatomic) UIView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long curMusicIndex; // @synthesize curMusicIndex=_curMusicIndex;
@property(nonatomic) _Bool isMusicOn; // @synthesize isMusicOn=_isMusicOn;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(nonatomic) _Bool isPreviewVideoMute; // @synthesize isPreviewVideoMute=_isPreviewVideoMute;
@property(retain, nonatomic) NSMutableArray *preImageArray; // @synthesize preImageArray=_preImageArray;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) __weak id <EditVideoBgmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMSearchViewFinish:(id)arg1 searchKey:(id)arg2;
- (void)onEditVideoBGMSearchViewCancel;
- (void)inputModeDidChange:(id)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)MMMusicPickerScrollViewBtnClick;
- (void)MMMusicPickerScrollViewDidSelectMusic:(long long)arg1;
- (id)genEditVideoBGMSelectMusicInfo;
- (void)onTap:(id)arg1;
- (void)onOriginSoundOnOffBtnClick:(id)arg1;
- (void)onMusicOnOffBtnClick:(id)arg1;
- (void)onSearchBtnClick:(id)arg1;
- (void)changeMusicPlayState:(_Bool)arg1 enterSearch:(_Bool)arg2;
- (void)replayMusic;
- (void)playMusic;
- (void)processGetMusicsResp:(unsigned long long)arg1 andMusics:(id)arg2;
- (void)refetchMusic;
- (void)fetchMusic;
- (id)getVideoPreViewImageFromAVAsset:(id)arg1 withAtTime:(float)arg2;
- (void)setupAsset:(id)arg1;
- (void)addPanGesture;
- (void)addTapGesture;
- (void)addOriginSoundOnOffBtn;
- (void)addMusicOnOffBtn;
- (void)addVoiceOverResponseView;
- (void)addMusicPickerView;
- (void)addSearchBtn;
- (void)addBackgoundView;
- (void)addContentView;
- (void)initView;
- (void)reportFetchBgmFeedback:(_Bool)arg1;
- (void)kvReportBgmData;
- (void)returnToThisView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

