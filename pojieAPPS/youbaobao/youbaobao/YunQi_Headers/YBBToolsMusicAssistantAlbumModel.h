//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsMusicAssistantAlbumModel : NSObject
{
    _Bool _is_xima;
    _Bool _isDoubleLine;
    long long _ablumId;
    NSString *_title;
    NSString *_subTitle;
    NSString *_cover_url;
    long long _play_times;
    unsigned long long _type;
    unsigned long long _contentType;
    NSString *_jump_url;
    NSString *_redirectUrl;
    NSString *_alias;
}

+ (id)playtimesWithCount:(long long)arg1;
+ (void)initialize;
@property(nonatomic) _Bool isDoubleLine; // @synthesize isDoubleLine=_isDoubleLine;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool is_xima; // @synthesize is_xima=_is_xima;
@property(nonatomic) long long play_times; // @synthesize play_times=_play_times;
@property(copy, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long ablumId; // @synthesize ablumId=_ablumId;
- (void).cxx_destruct;

@end
