//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YBBToolsAlbumPlayerCacheModel : NSObject
{
    unsigned long long _trackType;
    unsigned long long _contentType;
    unsigned long long _currentIndex;
    NSArray *_songlist;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *songlist; // @synthesize songlist=_songlist;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long trackType; // @synthesize trackType=_trackType;
- (void).cxx_destruct;

@end

