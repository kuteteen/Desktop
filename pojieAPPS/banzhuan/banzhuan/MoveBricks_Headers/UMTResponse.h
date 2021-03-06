//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "UMTBase-Protocol.h"

@class NSString, UMTImprint;

@interface UMTResponse : NSObject <UMTBase, NSCoding>
{
    int __resp_code;
    NSString *__msg;
    UMTImprint *__imprint;
    _Bool __resp_code_isset;
    _Bool __msg_isset;
    _Bool __imprint_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetImprint;
- (_Bool)imprintIsSet;
@property(retain, nonatomic, getter=imprint, setter=setImprint:) UMTImprint *imprint;
- (void)unsetMsg;
- (_Bool)msgIsSet;
@property(retain, nonatomic, getter=msg, setter=setMsg:) NSString *msg;
- (void)unsetResp_code;
- (_Bool)resp_codeIsSet;
@property(nonatomic, getter=resp_code, setter=setResp_code:) int resp_code;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResp_code:(int)arg1 msg:(id)arg2 imprint:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

