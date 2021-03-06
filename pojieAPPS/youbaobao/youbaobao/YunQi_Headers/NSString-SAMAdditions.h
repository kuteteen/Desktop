//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SAMAdditions)
+ (id)sam_stringWithUUID;
+ (id)sam_stringWithBase64String:(id)arg1;
- (struct _NSRange)sam_wordRangeAtIndex:(unsigned long long)arg1;
- (id)sam_composedSubstringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)sam_composedRangeWithRange:(struct _NSRange)arg1;
- (id)sam_base64EncodedString;
- (id)sam_stringByUnescapingFromURLQuery;
- (id)sam_stringByEscapingForURLQuery;
- (id)sam_unescapeHTML;
- (id)sam_escapeHTML;
- (long long)sam_compareToVersionString:(id)arg1;
- (id)sam_HMACDigestWithKey:(id)arg1 algorithm:(unsigned int)arg2;
- (id)sam_SHA256Digest;
- (id)sam_SHA1Digest;
- (id)sam_MD5Digest;
- (id)sam_SHA512Digest;
- (id)sam_SHA384Digest;
- (id)sam_SHA224Digest;
- (id)sam_MD4Digest;
- (id)sam_MD2Digest;
- (_Bool)sam_containsString:(id)arg1;
@end

