//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoStreamPlayerView.h"

@class CMessageWrap;

@interface C2CVideoStreamPlayerView : VideoStreamPlayerView
{
    CMessageWrap *m_oMessageWrap;
}

- (void).cxx_destruct;
- (_Bool)isStreamingPlayMode;
- (id)getFormalVideoPath;
- (void)genThumbIfNeed;
- (void)updateVideoArgs;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;

@end
