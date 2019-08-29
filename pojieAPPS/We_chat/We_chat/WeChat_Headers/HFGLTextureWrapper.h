//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFGLTextureWrapper : NSObject
{
    unsigned int _glTexture;
    struct CGSize _size;
    struct HFGLTextureOptions _options;
    _Bool isPrivateTexture;
}

+ (id)textureWithLuminance:(char *)arg1 size:(struct CGSize)arg2;
+ (id)textureWithUIImage:(id)arg1;
+ (id)textureWithImage:(struct _Image *)arg1;
+ (id)textureWithImageName:(id)arg1 bundlePath:(id)arg2;
+ (id)textureWithImageName:(id)arg1;
+ (id)textureWithSize:(struct CGSize)arg1;
+ (struct HFGLTextureOptions)defaultOptions;
- (void)updateLuminance:(char *)arg1 size:(struct CGSize)arg2;
- (void)updateImage:(struct _Image *)arg1;
- (void)resetTexture;
@property(nonatomic) struct HFGLTextureOptions options;
- (void)deleteTexutre:(unsigned int *)arg1;
- (void)createTexture:(unsigned int *)arg1 option:(struct HFGLTextureOptions)arg2;
@property(nonatomic) struct CGSize size;
@property(nonatomic) unsigned int glTexture;
- (void)dealloc;
- (id)init;

@end
