//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFSessionMessageContentView.h"

@class UIButton, UIView, YSFAttributedLabel;

@interface YSFSessionInviteEvaluationContentView : YSFSessionMessageContentView
{
    YSFAttributedLabel *_textLabel;
    UIButton *_evaluationButton;
    UIView *_panel;
}

@property(retain, nonatomic) UIView *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) UIButton *evaluationButton; // @synthesize evaluationButton=_evaluationButton;
@property(retain, nonatomic) YSFAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)onEvaluate:(id)arg1;
- (id)initSessionMessageContentView;

@end

