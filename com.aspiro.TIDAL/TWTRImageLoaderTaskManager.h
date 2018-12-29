//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRImageLoaderTaskManager-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TWTRImageLoaderTaskManager : NSObject <TWTRImageLoaderTaskManager>
{
    NSMutableDictionary *_currentTasks;
}

@property(retain, nonatomic) NSMutableDictionary *currentTasks; // @synthesize currentTasks=_currentTasks;
- (void).cxx_destruct;
- (id)removeTaskWithRequestID:(id)arg1;
- (void)addTask:(id)arg1 withRequestID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

