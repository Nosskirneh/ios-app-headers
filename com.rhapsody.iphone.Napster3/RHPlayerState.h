//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHPlayContext, RHPlayableItem;

@interface RHPlayerState : NSObject
{
    RHPlayContext *_playContext;
    RHPlayableItem *_playableItem;
}

@property(readonly, nonatomic) RHPlayableItem *playableItem; // @synthesize playableItem=_playableItem;
@property(readonly, nonatomic) RHPlayContext *playContext; // @synthesize playContext=_playContext;
- (void).cxx_destruct;
- (id)initWithPlayContext:(id)arg1 playableItem:(id)arg2;

@end

