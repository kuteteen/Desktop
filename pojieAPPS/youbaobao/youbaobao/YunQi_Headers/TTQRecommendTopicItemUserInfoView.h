//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ReactiveTableViewCell-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMYAvatarImageView, NSString, TTQTopicModel, UIButton, UILabel;

@interface TTQRecommendTopicItemUserInfoView : UIView <UIGestureRecognizerDelegate, ReactiveTableViewCell>
{
    IMYAvatarImageView *_avatarBtn;
    UILabel *_nameLabel;
    UILabel *_babyInfoLabel;
    UIButton *_feedBackBtn;
    UIView *_tagIconView;
    TTQTopicModel *_data;
}

@property(retain, nonatomic) TTQTopicModel *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *tagIconView; // @synthesize tagIconView=_tagIconView;
@property(retain, nonatomic) UIButton *feedBackBtn; // @synthesize feedBackBtn=_feedBackBtn;
@property(retain, nonatomic) UILabel *babyInfoLabel; // @synthesize babyInfoLabel=_babyInfoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) IMYAvatarImageView *avatarBtn; // @synthesize avatarBtn=_avatarBtn;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)feedbackTouchUpInside:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)jumpToUserInfoPage:(id)arg1;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

