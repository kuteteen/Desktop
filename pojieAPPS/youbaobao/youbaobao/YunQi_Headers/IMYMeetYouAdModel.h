//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdvertiserModel.h"

@class NSString;

@interface IMYMeetYouAdModel : IMYBaseAdvertiserModel
{
    NSString *_meetyouAdId;
}

@property(copy, nonatomic) NSString *meetyouAdId; // @synthesize meetyouAdId=_meetyouAdId;
- (void).cxx_destruct;
- (void)cacheImageSizeWithImageURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (struct CGSize)imageSizeWithImageURL:(id)arg1 maxWidth:(long long)arg2;
- (_Bool)isMeetyouAd;
- (id)response;
- (id)jumpUrl;
- (long long)position;
- (id)fileSize;
- (id)videoDuration;
- (id)videoFinishTitle;
- (id)videoUrl;
- (id)images;
- (id)subtitle;
- (id)title;
- (id)tag;
- (id)name;
- (id)icon;
- (unsigned long long)style;
- (id)adId;
- (id)initWithRawData:(id)arg1 adInfo:(id)arg2;

@end
