//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EX2Action-Protocol.h"

@class EX2ActionQueue, NSString;

@interface EX2ActionBlock : NSObject <EX2Action>
{
    int _runType;
    int _actionState;
    CDUnknownBlockType _actionBlock;
    EX2ActionQueue *_actionQueue;
}

+ (id)block:(CDUnknownBlockType)arg1;
@property int actionState; // @synthesize actionState=_actionState;
@property __weak EX2ActionQueue *actionQueue; // @synthesize actionQueue=_actionQueue;
@property int runType; // @synthesize runType=_runType;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (_Bool)cancelAction;
- (void)runAction;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

