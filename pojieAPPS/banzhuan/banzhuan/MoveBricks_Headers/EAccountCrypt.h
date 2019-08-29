//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAccountCrypt : NSObject
{
}

+ (id)hexStringForData:(id)arg1;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)dataForHexString:(id)arg1;
+ (id)AES128DecryptWithKey:(id)arg1 gIv:(id)arg2 decrypData:(id)arg3;
+ (id)decrypt:(id)arg1 password:(id)arg2;
+ (id)AES128EncryptWithKey:(id)arg1 gIv:(id)arg2 messageData:(id)arg3;
+ (id)hex:(id)arg1 useLower:(_Bool)arg2;
+ (id)encrypt:(id)arg1 password:(id)arg2;

@end
