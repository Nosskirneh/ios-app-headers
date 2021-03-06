//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKCoreDataImporter;

@interface EKManagedObjectMapper : NSObject
{
    EKCoreDataImporter *_importer;
}

+ (id)syncArrayOfObjectsFromExternalRepresentation:(id)arg1 withMapping:(id)arg2 fetchRequest:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)arrayOfObjectsFromExternalRepresentation:(id)arg1 withMapping:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fillObject:(id)arg1 fromExternalRepresentation:(id)arg2 withMapping:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)objectFromExternalRepresentation:(id)arg1 withMapping:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)mapperWithImporter:(id)arg1;
@property(retain, nonatomic) EKCoreDataImporter *importer; // @synthesize importer=_importer;
- (void).cxx_destruct;
- (id)syncArrayOfObjectsFromExternalRepresentation:(id)arg1 withMapping:(id)arg2 fetchRequest:(id)arg3;
- (id)arrayOfObjectsFromExternalRepresentation:(id)arg1 withMapping:(id)arg2;
- (id)arrayOfObjectsFromExternalRepresentation:(id)arg1 withRelationship:(id)arg2;
- (id)fillObject:(id)arg1 fromExternalRepresentation:(id)arg2 withMapping:(id)arg3;
- (id)objectFromExternalRepresentation:(id)arg1 withMapping:(id)arg2;

@end

