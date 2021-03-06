//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LKParticleSystem : NSObject
{
    float _preheat;
    NSMutableArray *_emitterList;
    long long _drawIndex;
}

@property(nonatomic) long long drawIndex; // @synthesize drawIndex=_drawIndex;
@property(nonatomic) float preheat; // @synthesize preheat=_preheat;
@property(retain, nonatomic) NSMutableArray *emitterList; // @synthesize emitterList=_emitterList;
- (void).cxx_destruct;
- (void)undo;
- (void)stopEmit;
- (void)updateEmitPos:(union _GLKVector3)arg1;
- (void)startEmit:(union _GLKVector3)arg1;
- (void)emitParticle:(union _GLKVector3)arg1;
- (void)updateParticleAttributes;
- (void)update:(double)arg1;
- (_Bool)hasTouchElement;
- (void)setAudioEnable:(_Bool)arg1;
- (_Bool)hasAudio;
- (void)clearResource;
- (void)preloadResource;
- (void)loadFromFiles:(id)arg1;
- (void)loadFromPath:(id)arg1;
- (id)init;

@end

