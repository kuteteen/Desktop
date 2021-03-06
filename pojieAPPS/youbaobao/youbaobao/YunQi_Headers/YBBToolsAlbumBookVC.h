//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYYQAlbumBookContainerViewDelegate-Protocol.h"
#import "YBBToolsAlbumPBookPlayerDelegate-Protocol.h"

@class NSString, YBBToolsAlbumBookContainerView, YBBToolsAlbumPBookPlayer;

@interface YBBToolsAlbumBookVC : IMYPublicBaseViewController <IMYYQAlbumBookContainerViewDelegate, YBBToolsAlbumPBookPlayerDelegate>
{
    _Bool _autoPageUp;
    _Bool _playNext;
    _Bool _changeToNext;
    _Bool _playing;
    _Bool _loadAudioFail;
    NSString *_albumId;
    long long _presentedOrientation;
    YBBToolsAlbumBookContainerView *_containerView;
    YBBToolsAlbumPBookPlayer *_pbookPlayer;
    long long _currentPlayIndex;
}

@property(nonatomic, getter=isloadAudioFail) _Bool loadAudioFail; // @synthesize loadAudioFail=_loadAudioFail;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) long long currentPlayIndex; // @synthesize currentPlayIndex=_currentPlayIndex;
@property(nonatomic) _Bool changeToNext; // @synthesize changeToNext=_changeToNext;
@property(nonatomic) _Bool playNext; // @synthesize playNext=_playNext;
@property(nonatomic) _Bool autoPageUp; // @synthesize autoPageUp=_autoPageUp;
@property(retain, nonatomic) YBBToolsAlbumPBookPlayer *pbookPlayer; // @synthesize pbookPlayer=_pbookPlayer;
@property(retain, nonatomic) YBBToolsAlbumBookContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long presentedOrientation; // @synthesize presentedOrientation=_presentedOrientation;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (void)requestPictureBookDetail;
- (void)initUI;
- (void)hysteriaPlayerDidFailed:(id)arg1;
- (void)playerWillChangedAtIndex:(long long)arg1;
- (void)playerDidReachEnd:(id)arg1;
- (void)playerRateChanged:(_Bool)arg1;
- (void)albumBPCView:(id)arg1 selectedFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)albumBPCView:(id)arg1 didControlByEvent:(unsigned long long)arg2;
- (void)backAction;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

