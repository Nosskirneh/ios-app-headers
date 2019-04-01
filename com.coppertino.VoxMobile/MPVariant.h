//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet;

@interface MPVariant : NSObject <NSCoding>
{
    _Bool _running;
    _Bool _finished;
    unsigned long long _ID;
    unsigned long long _experimentID;
    NSMutableOrderedSet *_actions;
    NSMutableArray *_tweaks;
}

+ (id)variantWithJSONObject:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tweaks; // @synthesize tweaks=_tweaks;
@property(retain, nonatomic) NSMutableOrderedSet *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) unsigned long long experimentID; // @synthesize experimentID=_experimentID;
@property(nonatomic) unsigned long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVariant:(id)arg1;
- (void)restart;
- (void)finish;
- (void)stop;
- (void)execute;
- (void)addTweakFromJSONObject:(id)arg1 andExecute:(_Bool)arg2;
- (void)addTweaksFromJSONObject:(id)arg1 andExecute:(_Bool)arg2;
- (void)removeActionWithName:(id)arg1;
- (void)addActionFromJSONObject:(id)arg1 andExecute:(_Bool)arg2;
- (void)addActionsFromJSONObject:(id)arg1 andExecute:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(unsigned long long)arg1 experimentID:(unsigned long long)arg2 actions:(id)arg3 tweaks:(id)arg4;
- (id)init;

@end

