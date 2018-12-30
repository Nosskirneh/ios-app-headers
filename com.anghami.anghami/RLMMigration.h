//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RLMRealm, RLMSchema;

@interface RLMMigration : NSObject
{
    struct Schema *_schema;
    NSMutableDictionary *deletedObjectIndices;
    RLMRealm *_oldRealm;
    RLMRealm *_realm;
}

@property(retain, nonatomic) RLMRealm *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) RLMRealm *oldRealm; // @synthesize oldRealm=_oldRealm;
- (void).cxx_destruct;
- (void)renamePropertyForClass:(id)arg1 oldName:(id)arg2 newName:(id)arg3;
- (_Bool)deleteDataForClassName:(id)arg1;
- (void)deleteObjectsMarkedForDeletion;
- (void)deleteObject:(id)arg1;
- (id)createObject:(id)arg1 withObject:(id)arg2;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)enumerateObjects:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) RLMSchema *newSchema;
@property(readonly, nonatomic) RLMSchema *oldSchema;
- (id)initWithRealm:(id)arg1 oldRealm:(id)arg2 schema:(struct Schema *)arg3;

@end
