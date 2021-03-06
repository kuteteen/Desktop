//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYTLHomeDateView, IMYTLHomeYunCellVM, IMYTLHomeYunCommentView, IMYTLHomeYunInfoView, IMYTLHomeYunPhotoView, IMYTLHomeYunPopView, IMYTLHomeYunStoryView, UIImageView, UIView;

@interface IMYTLHomeYunContainterCell : UITableViewCell
{
    _Bool _hideInputView;
    IMYTLHomeDateView *_dataView;
    IMYTLHomeYunStoryView *_storyView;
    IMYTLHomeYunPhotoView *_photoView;
    IMYTLHomeYunInfoView *_infoView;
    IMYTLHomeYunCommentView *_comentView;
    UIView *_comentSeparteView;
    UIImageView *_frameImageView;
    UIImageView *_frameBgImgView;
    UIImageView *_redDotImageView;
    UIView *_axisLineView;
    UIView *_adLogoView;
    IMYTLHomeYunCellVM *_cellModel;
    CDUnknownBlockType _scrolToBlock;
    CDUnknownBlockType _storyPressBlock;
    CDUnknownBlockType _imgPressBlock;
    CDUnknownBlockType _videoPressBlock;
    CDUnknownBlockType _tapMoreImageBlock;
    CDUnknownBlockType _tapShareEventBlock;
    CDUnknownBlockType _noIdentitySetupBlock;
    CDUnknownBlockType _tapFrameBlock;
    double _cellHeight;
    CDUnknownBlockType _sendCommentBlock;
    long long _maxPhotoCnt;
    IMYTLHomeYunPopView *_popView;
}

@property(retain, nonatomic) IMYTLHomeYunPopView *popView; // @synthesize popView=_popView;
@property(nonatomic) _Bool hideInputView; // @synthesize hideInputView=_hideInputView;
@property(nonatomic) long long maxPhotoCnt; // @synthesize maxPhotoCnt=_maxPhotoCnt;
@property(copy, nonatomic) CDUnknownBlockType sendCommentBlock; // @synthesize sendCommentBlock=_sendCommentBlock;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) CDUnknownBlockType tapFrameBlock; // @synthesize tapFrameBlock=_tapFrameBlock;
@property(copy, nonatomic) CDUnknownBlockType noIdentitySetupBlock; // @synthesize noIdentitySetupBlock=_noIdentitySetupBlock;
@property(copy, nonatomic) CDUnknownBlockType tapShareEventBlock; // @synthesize tapShareEventBlock=_tapShareEventBlock;
@property(copy, nonatomic) CDUnknownBlockType tapMoreImageBlock; // @synthesize tapMoreImageBlock=_tapMoreImageBlock;
@property(copy, nonatomic) CDUnknownBlockType videoPressBlock; // @synthesize videoPressBlock=_videoPressBlock;
@property(copy, nonatomic) CDUnknownBlockType imgPressBlock; // @synthesize imgPressBlock=_imgPressBlock;
@property(copy, nonatomic) CDUnknownBlockType storyPressBlock; // @synthesize storyPressBlock=_storyPressBlock;
@property(copy, nonatomic) CDUnknownBlockType scrolToBlock; // @synthesize scrolToBlock=_scrolToBlock;
@property(retain, nonatomic) IMYTLHomeYunCellVM *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIView *adLogoView; // @synthesize adLogoView=_adLogoView;
@property(retain, nonatomic) UIView *axisLineView; // @synthesize axisLineView=_axisLineView;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) UIImageView *frameBgImgView; // @synthesize frameBgImgView=_frameBgImgView;
@property(retain, nonatomic) UIImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(retain, nonatomic) UIView *comentSeparteView; // @synthesize comentSeparteView=_comentSeparteView;
@property(retain, nonatomic) IMYTLHomeYunCommentView *comentView; // @synthesize comentView=_comentView;
@property(retain, nonatomic) IMYTLHomeYunInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) IMYTLHomeYunPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) IMYTLHomeYunStoryView *storyView; // @synthesize storyView=_storyView;
@property(retain, nonatomic) IMYTLHomeDateView *dataView; // @synthesize dataView=_dataView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)currentVideoFrame;
- (_Bool)cacheCompleted;
- (_Bool)isPlaying;
- (void)clearVideo;
- (void)pauseVideo;
- (void)stopVideo;
- (void)resumeVideo;
- (void)playVideo;
- (void)cellScorl:(double)arg1;
- (void)commentHandle:(unsigned long long)arg1;
- (_Bool)deleteOtherEmojiComments:(unsigned long long)arg1;
- (void)sendNewEmoji:(unsigned long long)arg1;
- (void)emojCommentHandle:(unsigned long long)arg1;
- (void)handlePopViewPress:(unsigned long long)arg1;
- (_Bool)isTimelineHome;
- (void)sendFuckEvent:(id)arg1 delete:(_Bool)arg2;
- (void)commentBtnPressHandle;
- (id)getRedDotImage;
- (void)clearAssistantUI;
- (void)awakeFromNib;

@end

