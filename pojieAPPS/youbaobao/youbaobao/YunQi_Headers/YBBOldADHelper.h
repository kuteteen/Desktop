//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYAdSignal, NSMutableArray, NSMutableDictionary, NSString;
@protocol IMYITableViewAdManager;

@interface YBBOldADHelper : NSObject
{
    _Bool _shouldSide;
    _Bool _toolIconShow;
    IMYAdSignal *_toolIconAdSignal;
    NSMutableDictionary *_adsManagers;
    id <IMYITableViewAdManager> _adManager;
    NSString *_lastRawIds;
    NSMutableArray *_adBubblesItems;
}

+ (id)sharedADHomeHelper;
@property(retain, nonatomic) NSMutableArray *adBubblesItems; // @synthesize adBubblesItems=_adBubblesItems;
@property(retain, nonatomic) NSString *lastRawIds; // @synthesize lastRawIds=_lastRawIds;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) NSMutableDictionary *adsManagers; // @synthesize adsManagers=_adsManagers;
@property(nonatomic) _Bool toolIconShow; // @synthesize toolIconShow=_toolIconShow;
@property(retain, nonatomic) IMYAdSignal *toolIconAdSignal; // @synthesize toolIconAdSignal=_toolIconAdSignal;
@property(nonatomic) _Bool shouldSide; // @synthesize shouldSide=_shouldSide;
- (void).cxx_destruct;
- (void)requestHomeAds:(unsigned long long)arg1 position:(long long)arg2;
- (void)requestHomeAds:(unsigned long long)arg1;
- (void)clearAdManager;
- (void)initHomeAds:(unsigned long long)arg1 viewController:(id)arg2 dataResult:(CDUnknownBlockType)arg3 reloadBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

