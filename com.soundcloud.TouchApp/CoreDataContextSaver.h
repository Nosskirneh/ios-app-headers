//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface CoreDataContextSaver : NSObject
{
    NSManagedObjectContext *_context;
}

@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)saveContext:(id)arg1;
- (void)save;
- (void)saveWithSubscriber:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

