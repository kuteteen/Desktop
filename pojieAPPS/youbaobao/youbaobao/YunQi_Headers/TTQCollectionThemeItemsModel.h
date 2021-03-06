//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString, TTQPublisherModel;

@interface TTQCollectionThemeItemsModel : NSObject <YYJSONHelperProtocol>
{
    long long _themeItemID;
    long long _topic_id;
    NSString *_title;
    NSString *_image;
    long long _play_count;
    long long _praise_count;
    NSString *_redirect_url;
    NSString *_thumb_gif;
    long long _view_time;
    long long _sort_num;
    long long _type;
    long long _thumb_gif_type;
    TTQPublisherModel *_publisher;
    unsigned long long _image_type;
}

+ (void)initialize;
@property(nonatomic) unsigned long long image_type; // @synthesize image_type=_image_type;
@property(retain, nonatomic) TTQPublisherModel *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) long long thumb_gif_type; // @synthesize thumb_gif_type=_thumb_gif_type;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long sort_num; // @synthesize sort_num=_sort_num;
@property(nonatomic) long long view_time; // @synthesize view_time=_view_time;
@property(copy, nonatomic) NSString *thumb_gif; // @synthesize thumb_gif=_thumb_gif;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) long long praise_count; // @synthesize praise_count=_praise_count;
@property(nonatomic) long long play_count; // @synthesize play_count=_play_count;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(nonatomic) long long themeItemID; // @synthesize themeItemID=_themeItemID;
- (void).cxx_destruct;
- (void)calculateThemeCellSizeWithCellWidth:(double)arg1 titleWidth:(double)arg2;
@property(nonatomic) struct CGSize cellSize;
@property(nonatomic) double titleHeight;
@property(nonatomic) double infoAreaHeight;
- (id)testLabel;

@end

