//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString, TTQPublisherModel;

@interface TTQHotCommentModel : NSObject <YYJSONHelperProtocol>
{
    _Bool _has_praise;
    long long _hotCommentID;
    long long _topic_id;
    long long _b_forum_id;
    NSArray *_images;
    NSString *_content;
    long long _praise_num;
    TTQPublisherModel *_publisher;
    NSString *_user_screen_name;
    NSString *_redirect_url;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) _Bool has_praise; // @synthesize has_praise=_has_praise;
@property(copy, nonatomic) NSString *user_screen_name; // @synthesize user_screen_name=_user_screen_name;
@property(retain, nonatomic) TTQPublisherModel *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) long long praise_num; // @synthesize praise_num=_praise_num;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) long long b_forum_id; // @synthesize b_forum_id=_b_forum_id;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(nonatomic) long long hotCommentID; // @synthesize hotCommentID=_hotCommentID;
- (void).cxx_destruct;

@end

