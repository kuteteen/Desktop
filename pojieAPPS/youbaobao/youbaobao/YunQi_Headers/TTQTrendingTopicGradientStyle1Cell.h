//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewCell.h"

@class CAGradientLayer, TTQHome5TopicModel, TTQTopicInfoView, UIImageView, UILabel, UIView;

@interface TTQTrendingTopicGradientStyle1Cell : TTQTableViewCell
{
    UIImageView *_topicImageView;
    UILabel *_topicTitleLabel;
    UILabel *_topicDesLabel;
    UIImageView *_replyImageView;
    UILabel *_replyCountLabel;
    UILabel *_arrowLabel;
    CAGradientLayer *_gradientLayer;
    TTQTopicInfoView *_infoView;
    UIView *_separateLine;
    TTQHome5TopicModel *_bindedModel;
}

@property(retain, nonatomic) TTQHome5TopicModel *bindedModel; // @synthesize bindedModel=_bindedModel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) TTQTopicInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *replyCountLabel; // @synthesize replyCountLabel=_replyCountLabel;
@property(retain, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property(retain, nonatomic) UILabel *topicDesLabel; // @synthesize topicDesLabel=_topicDesLabel;
@property(retain, nonatomic) UILabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIImageView *topicImageView; // @synthesize topicImageView=_topicImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)feedbackTouchUpInside:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)setInfoViewConfiguration:(id)arg1;
- (id)infoViewConfiguration;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)setupUserTrackWithPagePrefix:(id)arg1;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;

@end
