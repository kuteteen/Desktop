//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTBaseView.h"

#import "UITextFieldDelegate-Protocol.h"

@class LTTextField, NSString, UIButton, UILabel;

@interface BindAccountView : LTBaseView <UITextFieldDelegate>
{
    _Bool _isShowPwd;
    LTTextField *_usernameText;
    LTTextField *_userpwdText;
    UIButton *_showPwd;
    UIButton *_nextStepBtn;
    UIButton *_registerBtn;
    UILabel *_tintLable;
}

@property(retain, nonatomic) UILabel *tintLable; // @synthesize tintLable=_tintLable;
@property(retain, nonatomic) UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(retain, nonatomic) UIButton *nextStepBtn; // @synthesize nextStepBtn=_nextStepBtn;
@property(nonatomic) _Bool isShowPwd; // @synthesize isShowPwd=_isShowPwd;
@property(retain, nonatomic) UIButton *showPwd; // @synthesize showPwd=_showPwd;
@property(retain, nonatomic) LTTextField *userpwdText; // @synthesize userpwdText=_userpwdText;
@property(retain, nonatomic) LTTextField *usernameText; // @synthesize usernameText=_usernameText;
- (void).cxx_destruct;
- (void)registerBtnClick;
- (void)nextStepBtnClick;
- (void)showPwdClick;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)interfacePortrait;
- (void)createViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
