//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class MOBFImageLoadSession, NSData, NSError, UIImage;

@protocol MOBFImageLoadSessionDelegate <NSObject>
- (NSData *)session:(MOBFImageLoadSession *)arg1 willCacheWebImage:(NSData *)arg2;
- (void)session:(MOBFImageLoadSession *)arg1 didImageLoadFail:(NSError *)arg2;
- (void)session:(MOBFImageLoadSession *)arg1 didImageLoaded:(UIImage *)arg2 imageData:(NSData *)arg3;
@end

