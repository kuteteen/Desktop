//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (ClickStatSwizzle)
+ (_Bool)hookSendAction;
+ (_Bool)hookSendEvent;
+ (void)load;
- (_Bool)mmSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)mmSendEvent:(id)arg1;
@end
