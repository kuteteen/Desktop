//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol IMYIAttachment;

@protocol IMYIContent <NSObject>
@property(copy, nonatomic) NSDictionary *ext;
@property(copy, nonatomic) NSString *descriptionText;
@property(nonatomic) unsigned long long contentType;
@property(copy, nonatomic) NSString *url;
@property(retain, nonatomic) id <IMYIAttachment> attachment;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *text;
@end

