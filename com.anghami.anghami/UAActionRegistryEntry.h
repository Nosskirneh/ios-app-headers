//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, UAAction;

@interface UAActionRegistryEntry : NSObject
{
    UAAction *_action;
    CDUnknownBlockType _predicate;
    NSMutableDictionary *_situationOverrides;
    NSMutableArray *_mutableNames;
    Class _actionClass;
}

+ (id)entryForActionClass:(Class)arg1 predicate:(CDUnknownBlockType)arg2;
+ (id)entryForAction:(id)arg1 predicate:(CDUnknownBlockType)arg2;
@property(nonatomic) Class actionClass; // @synthesize actionClass=_actionClass;
@property(retain, nonatomic) NSMutableArray *mutableNames; // @synthesize mutableNames=_mutableNames;
@property(retain, nonatomic) NSMutableDictionary *situationOverrides; // @synthesize situationOverrides=_situationOverrides;
@property(copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) UAAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *names; // @dynamic names;
- (id)description;
- (void)addSituationOverride:(long long)arg1 withAction:(id)arg2;
- (id)actionForSituation:(long long)arg1;
- (id)initWithActionClass:(Class)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)initWithAction:(id)arg1 predicate:(CDUnknownBlockType)arg2;

@end

