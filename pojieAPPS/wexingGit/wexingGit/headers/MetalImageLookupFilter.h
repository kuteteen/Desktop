//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MetalImageTwoInputFilter.h"

@protocol MTLBuffer;

@interface MetalImageLookupFilter : MetalImageTwoInputFilter
{
    float _intensity;
    id <MTLBuffer> _buffer;
}

@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
- (void).cxx_destruct;
- (void)assembleRenderEncoder:(id)arg1;
- (void)updateContentBuffer;
- (id)init;

@end
