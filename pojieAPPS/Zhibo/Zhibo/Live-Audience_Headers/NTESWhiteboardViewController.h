//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMRTSManagerDelegate-Protocol.h"
#import "NTESTimerHolderDelegate-Protocol.h"

@class NIMAvatarImageView, NSLock, NSMutableString, NSString, NTESTimerHolder, NTESWhiteboardDrawView, UIButton, UILabel, UIView;

@interface NTESWhiteboardViewController : UIViewController <NIMRTSManagerDelegate, NTESTimerHolderDelegate>
{
    _Bool _isCaller;
    _Bool _mute;
    _Bool _speaker;
    _Bool _audioConnected;
    _Bool _dismissed;
    _Bool _needTerminateRTS;
    NTESWhiteboardDrawView *_myDrawView;
    NTESWhiteboardDrawView *_peerDrawView;
    UIButton *_acceptButton;
    UIButton *_rejectButton;
    UIView *_headerView;
    UIView *_footerView;
    UIButton *_muteButton;
    UIButton *_SpeakerButton;
    UIButton *_cancelButton;
    UIButton *_clearButton;
    UILabel *_hintTextLabel;
    NIMAvatarImageView *_avatarImageView;
    UILabel *_nameTextLabel;
    UIButton *_closeButton;
    UILabel *_closeLabel;
    UIButton *_cancelRequestButton;
    NSString *_sessionID;
    NSString *_peerID;
    unsigned long long _types;
    NSString *_info;
    NSMutableString *_cmds;
    NSLock *_cmdsLock;
    NTESTimerHolder *_sendCmdsTimer;
    unsigned long long _drawViewWidth;
    NTESTimerHolder *_callerWaitingTimer;
    unsigned long long _refPacketID;
}

@property(nonatomic) _Bool needTerminateRTS; // @synthesize needTerminateRTS=_needTerminateRTS;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) _Bool audioConnected; // @synthesize audioConnected=_audioConnected;
@property(nonatomic) unsigned long long refPacketID; // @synthesize refPacketID=_refPacketID;
@property(retain, nonatomic) NTESTimerHolder *callerWaitingTimer; // @synthesize callerWaitingTimer=_callerWaitingTimer;
@property(nonatomic) unsigned long long drawViewWidth; // @synthesize drawViewWidth=_drawViewWidth;
@property(retain, nonatomic) NTESTimerHolder *sendCmdsTimer; // @synthesize sendCmdsTimer=_sendCmdsTimer;
@property(retain, nonatomic) NSLock *cmdsLock; // @synthesize cmdsLock=_cmdsLock;
@property(retain, nonatomic) NSMutableString *cmds; // @synthesize cmds=_cmds;
@property(nonatomic) _Bool speaker; // @synthesize speaker=_speaker;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long types; // @synthesize types=_types;
@property(copy, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak UIButton *cancelRequestButton; // @synthesize cancelRequestButton=_cancelRequestButton;
@property(nonatomic) __weak UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *nameTextLabel; // @synthesize nameTextLabel=_nameTextLabel;
@property(nonatomic) __weak NIMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *hintTextLabel; // @synthesize hintTextLabel=_hintTextLabel;
@property(nonatomic) __weak UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *SpeakerButton; // @synthesize SpeakerButton=_SpeakerButton;
@property(nonatomic) __weak UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(nonatomic) __weak UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) NTESWhiteboardDrawView *peerDrawView; // @synthesize peerDrawView=_peerDrawView;
@property(retain, nonatomic) NTESWhiteboardDrawView *myDrawView; // @synthesize myDrawView=_myDrawView;
- (void).cxx_destruct;
- (void)fillUserSetting:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)clearWhiteboard;
- (void)sendWhiteboardCmd:(unsigned long long)arg1;
- (void)sendMessage:(id)arg1;
- (void)makeToast:(id)arg1;
- (void)dismiss;
- (void)dismissAfter:(double)arg1;
- (void)updateButton;
- (void)showDrawView;
- (void)switchToConnectedView;
- (void)switchToWaitingConnectView;
- (void)switchToCalleeView;
- (void)switchToCallerView;
- (void)sendRTSData:(id)arg1;
- (void)sendCmds;
- (void)addCmd:(id)arg1;
- (void)onPointCollected:(struct CGPoint)arg1 type:(unsigned long long)arg2;
- (void)termimateRTS;
- (void)responseRTS:(_Bool)arg1;
- (void)requestRTS;
- (void)onNTESTimerFired:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onRTSAudioNetStatus:(long long)arg1 user:(id)arg2;
- (void)onRTSRecordingInfo:(id)arg1 forSession:(id)arg2;
- (void)onRTSControl:(id)arg1 from:(id)arg2 forSession:(id)arg3;
- (void)onRTSReceive:(id)arg1 data:(id)arg2 from:(id)arg3 withIn:(long long)arg4;
- (void)onRTS:(id)arg1 service:(long long)arg2 status:(long long)arg3 error:(id)arg4;
- (void)onRTSResponsedByOther:(id)arg1 accepted:(_Bool)arg2;
- (void)onRTSTerminate:(id)arg1 by:(id)arg2;
- (void)onRTSResponse:(id)arg1 from:(id)arg2 accepted:(_Bool)arg3;
- (void)onCancelRequestButtonPressed:(id)arg1;
- (void)onClearLinesButtonPressed:(id)arg1;
- (void)onCancelButtonPressed:(id)arg1;
- (void)onCloseButtonPressed:(id)arg1;
- (void)onSpeakerButtonPressed:(id)arg1;
- (void)onMuteButtonPressed:(id)arg1;
- (void)onAcceptButtonPressed:(id)arg1;
- (void)onRejectButtonPressed:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSessionID:(id)arg1 peerID:(id)arg2 types:(unsigned long long)arg3 info:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

