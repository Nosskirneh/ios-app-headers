//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EX2ActionQueue;

@protocol EX2Action <NSObject>
@property int actionState;
@property __weak EX2ActionQueue *actionQueue;
- (_Bool)cancelAction;
- (void)runAction;
@end

