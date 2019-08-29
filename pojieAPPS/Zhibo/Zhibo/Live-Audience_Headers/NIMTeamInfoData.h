//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIMGroupMemberProtocol-Protocol.h"

@class NSString;

@interface NIMTeamInfoData : NSObject <NIMGroupMemberProtocol>
{
    NSString *_teamId;
    NSString *_iconId;
    NSString *_teamName;
}

@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(copy, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(copy, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
- (void).cxx_destruct;
- (id)showName;
- (id)nick;
- (id)usrId;
- (id)sortKey;
- (id)memberId;
- (id)groupTitle;
- (id)initWithTeam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
