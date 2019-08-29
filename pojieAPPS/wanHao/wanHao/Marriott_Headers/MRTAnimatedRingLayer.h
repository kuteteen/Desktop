//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface MRTAnimatedRingLayer : CAShapeLayer <CAAnimationDelegate>
{
    _Bool _animating;
    _Bool _lastAnimationWasDrawing;
}

@property(nonatomic) _Bool lastAnimationWasDrawing; // @synthesize lastAnimationWasDrawing=_lastAnimationWasDrawing;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)_updatePath;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateDrawing:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
