//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataContextSaver, NSManagedObjectContext, NSString;

@interface YouDeleteCommand : NSObject <BasicCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_coreDataContextSaver;
}

@property(readonly, nonatomic) CoreDataContextSaver *coreDataContextSaver; // @synthesize coreDataContextSaver=_coreDataContextSaver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)fetchYouEntities;
- (void)deleteAllYouEntities;
- (id)execute;
- (id)initWithContext:(id)arg1 coreDataContextSaver:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
