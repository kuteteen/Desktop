//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSString;

@interface TTQRecommendHotSubjectItemModel : NSObject <YYModel>
{
    long long _subject_id;
    NSString *_name;
    long long _total_discuss;
    NSString *_redirect_url;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) long long total_discuss; // @synthesize total_discuss=_total_discuss;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long subject_id; // @synthesize subject_id=_subject_id;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

