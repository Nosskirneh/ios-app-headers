//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, RHPlayableItem;

@interface RHCurrentPlayableContext : NSObject
{
    NSMutableArray *_previousPlayables;
    RHPlayableItem *_currentPlayable;
    NSMutableArray *_nextPlayables;
}

@property(readonly, nonatomic) NSMutableArray *nextPlayables; // @synthesize nextPlayables=_nextPlayables;
@property(retain, nonatomic) RHPlayableItem *currentPlayable; // @synthesize currentPlayable=_currentPlayable;
@property(readonly, nonatomic) NSMutableArray *previousPlayables; // @synthesize previousPlayables=_previousPlayables;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

