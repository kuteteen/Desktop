//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class ApptentiveTask, NSMutableArray;

@interface ApptentiveTaskQueue : NSObject <NSCoding>
{
    ApptentiveTask *activeTask;
    NSMutableArray *tasks;
}

+ (void)releaseSharedTaskQueue;
+ (id)sharedTaskQueue;
+ (_Bool)serializedQueueExists;
+ (id)taskQueuePath;
+ (void)load;
- (void).cxx_destruct;
- (void)clear;
- (void)archive;
- (void)unsetActiveTask;
- (void)teardown;
- (void)setup;
- (void)startOnNextRunLoopIteration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)queueDescription;
- (void)stop;
- (void)start;
- (id)taskAtIndex:(unsigned long long)arg1 withTaskNameInSet:(id)arg2;
- (unsigned long long)countOfTasksWithTaskNamesInSet:(id)arg1;
- (id)taskAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)removeTasksOfClass:(Class)arg1;
- (_Bool)hasTaskOfClass:(Class)arg1;
- (void)addTask:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
