//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, UIView, UIViewController;

@protocol IMinimizeTaskDelegateInterface <NSObject>
- (void)onLeaveTaskDoneAndWillEnterAnother:(MinimizeTaskData *)arg1;
- (UIViewController *)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(MinimizeTaskData *)arg1;
- (void)onPositiveTaskCloseBtnClick:(MinimizeTaskData *)arg1 CloseFromState:(_Bool)arg2;
- (void)onRemoveTask:(MinimizeTaskData *)arg1;
- (void)onEnterTask:(MinimizeTaskData *)arg1 FromFloatingView:(UIView *)arg2 EnterTaskScene:(int)arg3;
@end
