//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataModelProvider;

@interface CoreDataMappingModelProvider : NSObject
{
    CoreDataModelProvider *_coreDataModelProvider;
}

@property(readonly, nonatomic) CoreDataModelProvider *coreDataModelProvider; // @synthesize coreDataModelProvider=_coreDataModelProvider;
- (void).cxx_destruct;
- (id)nextMappingModelFromCoreDataModel:(id)arg1 withResultingToCoreDataModel:(inout id *)arg2;
- (id)inferredMappingModelFromCoreDataModel:(id)arg1 toDataModel:(id)arg2 error:(inout id *)arg3;
- (id)initWithCoreDataModelProvider:(id)arg1;
- (id)initWithPersistentStoreManager:(id)arg1;

@end

