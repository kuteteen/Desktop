//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "IMYREmoticonInputViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class HPGrowingTextView, IMYButton, NSString, UIControl;

@interface IMYNewsCommentView : UIView <UITextViewDelegate, HPGrowingTextViewDelegate, IMYREmoticonInputViewDelegate>
{
    _Bool _shouldSaveText;
    _Bool _shouldLogin;
    _Bool _shouldCustomVideoMaxCommentCount;
    unsigned long long _newsId;
    unsigned long long _review_id;
    unsigned long long _referenced_id;
    NSString *_placeholder;
    CDUnknownBlockType _webCallBack;
    CDUnknownBlockType _errorCallBack;
    CDUnknownBlockType _endEditing;
    long long _type;
    long long _position;
    UIView *_bottomView;
    HPGrowingTextView *_textView;
    UIView *_textViewContainer;
    IMYButton *_sendButton;
    IMYButton *_emojiButton;
    UIControl *_bg;
    UIView *_textViewEmojiCover;
}

+ (id)commentView;
@property(retain, nonatomic) UIView *textViewEmojiCover; // @synthesize textViewEmojiCover=_textViewEmojiCover;
@property(retain, nonatomic) UIControl *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) IMYButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) IMYButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType endEditing; // @synthesize endEditing=_endEditing;
@property(copy, nonatomic) CDUnknownBlockType errorCallBack; // @synthesize errorCallBack=_errorCallBack;
@property(copy, nonatomic) CDUnknownBlockType webCallBack; // @synthesize webCallBack=_webCallBack;
@property(nonatomic) _Bool shouldCustomVideoMaxCommentCount; // @synthesize shouldCustomVideoMaxCommentCount=_shouldCustomVideoMaxCommentCount;
@property(nonatomic) _Bool shouldLogin; // @synthesize shouldLogin=_shouldLogin;
@property(nonatomic) _Bool shouldSaveText; // @synthesize shouldSaveText=_shouldSaveText;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) unsigned long long referenced_id; // @synthesize referenced_id=_referenced_id;
@property(nonatomic) unsigned long long review_id; // @synthesize review_id=_review_id;
@property(nonatomic) unsigned long long newsId; // @synthesize newsId=_newsId;
- (void).cxx_destruct;
- (void)initViews;
- (void)didDelEmojiView:(id)arg1;
- (void)didTouchEmojiView:(id)arg1 touchedEmoji:(id)arg2;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)commentTextDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hide;
- (void)show;
- (void)send;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

