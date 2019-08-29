//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface LKViewUtils : NSObject <UIAlertViewDelegate>
{
    _Bool isShowAnimation;
    _Bool isShowFullScreen;
    CDUnknownBlockType _yesbloak;
    CDUnknownBlockType _noblock;
    struct CGRect tempRect;
}

+ (void)resumeAnimation:(id)arg1;
+ (void)pauseAnimation:(id)arg1;
+ (void)animationWithWiggle:(id)arg1;
+ (void)showAlertViewYesOrNo:(id)arg1 message:(id)arg2 yes:(CDUnknownBlockType)arg3 no:(CDUnknownBlockType)arg4;
+ (void)showAlertView:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)showAlertView:(id)arg1;
+ (id)getImageFromView:(id)arg1;
+ (double)getTextSize:(id)arg1 font:(id)arg2;
+ (double)getTextHeight:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (void)setButton:(id)arg1 title:(id)arg2;
+ (void)clearTableViewFooter:(id)arg1;
+ (void)removeAllSubView:(id)arg1;
+ (id)AnimationLayer:(id)arg1 subType:(id)arg2;
+ (id)AnimationLayer:(id)arg1;
+ (id)AnimationFade;
+ (void)AnimationAlpha:(id)arg1 Alpha:(float)arg2;
+ (void)AnimationFrame:(id)arg1 frame:(struct CGRect)arg2 didEndEvent:(CDUnknownBlockType)arg3;
+ (void)AnimationFrame:(id)arg1 frame:(struct CGRect)arg2;
+ (void)MakeViewShaow:(id)arg1 offset:(struct CGSize)arg2;
+ (void)MakeViewRadiusAndShaow:(id)arg1 radius:(float)arg2;
+ (void)MakeViewBorder:(id)arg1;
+ (void)MakeViewRadiusAndBorder:(id)arg1;
+ (void)MakeViewRadius:(id)arg1 radius:(float)arg2;
+ (void)MakeViewRadiusAndShaow:(id)arg1;
+ (id)sharedShowImage;
+ (id)sharedViewUtils;
@property(copy, nonatomic) CDUnknownBlockType noblock; // @synthesize noblock=_noblock;
@property(copy, nonatomic) CDUnknownBlockType yesbloak; // @synthesize yesbloak=_yesbloak;
@property struct CGRect tempRect; // @synthesize tempRect;
@property _Bool isShowFullScreen; // @synthesize isShowFullScreen;
@property _Bool isShowAnimation; // @synthesize isShowAnimation;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
