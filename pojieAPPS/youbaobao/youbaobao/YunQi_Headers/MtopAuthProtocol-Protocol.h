//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol MtopAuthProtocol <NSObject>
+ (id)sharedInstantce;
- (void)markInvalidAuth;
- (_Bool)isProcessingAuth;
- (NSDictionary *)currentSession;
- (void)authWithAuthOption:(int)arg1 extraInfo:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSDictionary *))arg3 cancelationHandler:(void (^)(void))arg4;
- (void)authWithAuthOption:(int)arg1 completionHandler:(void (^)(_Bool, NSDictionary *))arg2 cancelationHandler:(void (^)(void))arg3;
- (_Bool)isValidAuth;
@end

