//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface YSFHTMLDocument : NSObject
{
    NSMutableArray *_tagElements;
    NSString *_plainText;
}

@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(readonly, nonatomic) NSArray *tagElements; // @synthesize tagElements=_tagElements;
- (void).cxx_destruct;
- (void)addTagElement:(id)arg1;
- (id)init;

@end
