//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MTLManagedObjectAdapter : NSObject
{
    Class _modelClass;
    NSDictionary *_managedObjectKeysByPropertyKey;
    NSDictionary *_relationshipModelClassesByPropertyKey;
}

+ (id)managedObjectFromModel:(id)arg1 insertingIntoContext:(id)arg2 processedObjects:(struct __CFDictionary *)arg3 error:(id *)arg4;
+ (id)managedObjectFromModel:(id)arg1 insertingIntoContext:(id)arg2 error:(id *)arg3;
+ (id)modelOfClass:(Class)arg1 fromManagedObject:(id)arg2 processedObjects:(struct __CFDictionary *)arg3 error:(id *)arg4;
+ (id)modelOfClass:(Class)arg1 fromManagedObject:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSDictionary *relationshipModelClassesByPropertyKey; // @synthesize relationshipModelClassesByPropertyKey=_relationshipModelClassesByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *managedObjectKeysByPropertyKey; // @synthesize managedObjectKeysByPropertyKey=_managedObjectKeysByPropertyKey;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (id)uniquingPredicateForModel:(id)arg1;
- (void)mergeValuesOfModel:(id)arg1 forKeysFromManagedObject:(id)arg2;
- (void)mergeValueOfModel:(id)arg1 forKey:(id)arg2 fromManagedObject:(id)arg3;
- (id)managedObjectKeyForKey:(id)arg1;
- (id)entityAttributeTransformerForKey:(id)arg1;
- (id)managedObjectFromModel:(id)arg1 insertingIntoContext:(id)arg2 processedObjects:(struct __CFDictionary *)arg3 error:(id *)arg4;
- (id)modelFromManagedObject:(id)arg1 processedObjects:(struct __CFDictionary *)arg2 error:(id *)arg3;
- (id)initWithModelClass:(Class)arg1;
- (id)init;

@end

