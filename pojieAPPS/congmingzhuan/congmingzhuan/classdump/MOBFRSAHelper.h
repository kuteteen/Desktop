//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MOBFRSAKey;

@interface MOBFRSAHelper : NSObject
{
    MOBFRSAKey *_key;
}

@property(retain, nonatomic) MOBFRSAKey *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)recoveryPaddingBlock:(const char *)arg1 size:(int)arg2 destBytes:(char **)arg3 outSize:(int *)arg4;
- (_Bool)decodeBlockWithBytes:(const char *)arg1 size:(int)arg2 destBytes:(char **)arg3 outSize:(int *)arg4;
- (id)decryptWithData:(id)arg1;
- (_Bool)paddingBlockWithBytes:(const char *)arg1 size:(int)arg2 blockSize:(int)arg3 destBytes:(char **)arg4;
- (_Bool)encodeBlockWithBytes:(const char *)arg1 offset:(int)arg2 size:(int)arg3 blockSize:(int)arg4 destBytes:(char **)arg5 outSize:(int *)arg6;
- (id)encryptWithData:(id)arg1;
- (_Bool)genKey;
- (id)initWithKeySize:(int)arg1 publicKey:(id)arg2 privateKey:(id)arg3 modulus:(id)arg4;
- (id)initWithKeySize:(int)arg1;
- (id)init;

@end

