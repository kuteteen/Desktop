//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface YBBHomeLuckyBagStyleModel : NSObject
{
    UIImage *_foregroundImage;
    UIImage *_backgroundImage;
    UIColor *_backgroundTextColor;
}

+ (id)createLuckyBagStyleWithCount:(long long)arg1;
+ (id)createLuckyBagStyle;
@property(retain, nonatomic) UIColor *backgroundTextColor; // @synthesize backgroundTextColor=_backgroundTextColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
- (void).cxx_destruct;

@end
