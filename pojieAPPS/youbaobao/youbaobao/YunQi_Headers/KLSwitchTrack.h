//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface KLSwitchTrack : UIView
{
    _Bool _on;
    UIColor *_contrastColor;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIView *_contrastView;
    UIView *_onView;
}

@property(retain, nonatomic) UIView *onView; // @synthesize onView=_onView;
@property(retain, nonatomic) UIView *contrastView; // @synthesize contrastView=_contrastView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(retain, nonatomic) UIColor *contrastColor; // @synthesize contrastColor=_contrastColor;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;
- (void)shrinkContrastView;
- (void)growContrastView;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 onColor:(id)arg2 offColor:(id)arg3 contrastColor:(id)arg4;

@end

