//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BVConversationsRequest.h"

@class NSMutableArray, NSString;

@interface BVProductDisplayPageRequest : BVConversationsRequest
{
    NSString *_productId;
    NSMutableArray *_includes;
    NSMutableArray *_PDPContentTypeStatistics;
    NSMutableArray *_reviewSorts;
    NSMutableArray *_questionSorts;
    NSMutableArray *_answerSorts;
}

@property(retain) NSMutableArray *answerSorts; // @synthesize answerSorts=_answerSorts;
@property(retain) NSMutableArray *questionSorts; // @synthesize questionSorts=_questionSorts;
@property(retain) NSMutableArray *reviewSorts; // @synthesize reviewSorts=_reviewSorts;
@property(retain) NSMutableArray *PDPContentTypeStatistics; // @synthesize PDPContentTypeStatistics=_PDPContentTypeStatistics;
@property(retain) NSMutableArray *includes; // @synthesize includes=_includes;
@property(retain) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)statisticsToParams:(id)arg1;
- (id)includesToParams:(id)arg1;
- (id)sortParams:(id)arg1 withKey:(id)arg2;
- (id)createParams;
- (id)endpoint;
- (void)load:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)sortIncludedAnswers:(long long)arg1 order:(long long)arg2;
- (id)sortIncludedQuestions:(long long)arg1 order:(long long)arg2;
- (id)sortIncludedReviews:(long long)arg1 order:(long long)arg2;
- (id)includeStatistics:(long long)arg1;
- (id)includeContent:(long long)arg1 limit:(int)arg2;
- (id)initWithProductId:(id)arg1;

@end

