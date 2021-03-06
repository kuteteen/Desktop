//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "BaseRoomBottomToolbarDelegate-Protocol.h"
#import "FDActionSheetDelegate-Protocol.h"
#import "GiftPopUpViewControllerDelegaet-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "ZPWebSocketDelegate-Protocol.h"

@class BaseRoomBottomToolbar, BaseRoomContenView, BaseRoomEditingToolbar, BlockView, GiftPopUpViewController, NSMutableArray, NSString, NSTimer, UIButton, UIImage, UISwipeGestureRecognizer, UIView, UserModel;

@interface BaseRoomViewController : UIViewController <UIGestureRecognizerDelegate, BaseRoomBottomToolbarDelegate, ZPWebSocketDelegate, FDActionSheetDelegate, UIAlertViewDelegate, GiftPopUpViewControllerDelegaet, AVAudioPlayerDelegate>
{
    UIImage *_anchorImage;
    _Bool _isOPView;
    _Bool _socketReconnectTip;
    unsigned long long _privateType;
    unsigned long long _userType;
    NSString *_userID;
    UIView *_liveView;
    BaseRoomContenView *_contentView;
    UIView *_rootView;
    BaseRoomBottomToolbar *_bottomToolbar;
    BaseRoomEditingToolbar *_editingToolbar;
    UserModel *_anchorInfoData;
    GiftPopUpViewController *_giftPopUpVC;
    BlockView *_blockView;
    CDUnknownBlockType _blockLiveBlock;
    CDUnknownBlockType _blockStreamBlock;
    UISwipeGestureRecognizer *_recognizerRight;
    UISwipeGestureRecognizer *_recognizerLeft;
    NSTimer *_mTimer;
    NSString *_textFieldCache;
    UIButton *_closeRoomBtn;
    NSMutableArray *_audioPlayPool;
    id _scheduleTask;
}

+ (void)load;
@property(retain, nonatomic) id scheduleTask; // @synthesize scheduleTask=_scheduleTask;
@property(retain, nonatomic) NSMutableArray *audioPlayPool; // @synthesize audioPlayPool=_audioPlayPool;
@property(nonatomic) _Bool socketReconnectTip; // @synthesize socketReconnectTip=_socketReconnectTip;
@property(retain, nonatomic) UIButton *closeRoomBtn; // @synthesize closeRoomBtn=_closeRoomBtn;
@property(copy, nonatomic) NSString *textFieldCache; // @synthesize textFieldCache=_textFieldCache;
@property(nonatomic) _Bool isOPView; // @synthesize isOPView=_isOPView;
@property(retain, nonatomic) NSTimer *mTimer; // @synthesize mTimer=_mTimer;
@property(retain, nonatomic) UISwipeGestureRecognizer *recognizerLeft; // @synthesize recognizerLeft=_recognizerLeft;
@property(retain, nonatomic) UISwipeGestureRecognizer *recognizerRight; // @synthesize recognizerRight=_recognizerRight;
@property(copy, nonatomic) CDUnknownBlockType blockStreamBlock; // @synthesize blockStreamBlock=_blockStreamBlock;
@property(copy, nonatomic) CDUnknownBlockType blockLiveBlock; // @synthesize blockLiveBlock=_blockLiveBlock;
@property(retain, nonatomic) BlockView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) GiftPopUpViewController *giftPopUpVC; // @synthesize giftPopUpVC=_giftPopUpVC;
@property(retain, nonatomic) UserModel *anchorInfoData; // @synthesize anchorInfoData=_anchorInfoData;
@property(retain, nonatomic) BaseRoomEditingToolbar *editingToolbar; // @synthesize editingToolbar=_editingToolbar;
@property(retain, nonatomic) BaseRoomBottomToolbar *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) BaseRoomContenView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned long long privateType; // @synthesize privateType=_privateType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)userSocketLogoutWithResidenceTime:(long long)arg1 pullStramStatus:(unsigned long long)arg2;
- (void)clearRoom;
- (void)clickcloseRoomBtn:(_Bool)arg1;
- (void)clickClose;
- (void)onLoginUserKicked;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)showUserInfopPopupViewWithUserID:(id)arg1 Poptype:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)showUserInfoPopViewWithUserID:(id)arg1 userInfo:(id)arg2;
- (void)banGesture;
- (void)clickedBaseRoomBottombarBtn:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)addNotification;
- (void)handleSwipeFrom:(id)arg1;
- (void)addGesture;
- (void)editingToolbarSendMessage:(id)arg1 isBarrage:(_Bool)arg2;
- (void)kickOffline:(id)arg1;
- (void)webSocketExitUser:(id)arg1;
- (void)webSocketReceiveDataDict:(id)arg1;
- (void)loginWebSocket;
- (void)webSocketStartReConnection;
- (void)webSocketConnectionSuccess;
- (void)getNowPrivateLimit:(id)arg1;
- (void)configWithAnchorData;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)eventHandle;
- (void)countDownToCloseRoom;
- (void)autoCloseRoomConfig;
- (void)setUI;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)appDidEnterPlayGround;
- (void)appDidEnterBackground;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

