//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface CoreDataContext : NSManagedObjectContext
{
    _Bool _shouldAssertOnSave;
}

@property(nonatomic) _Bool shouldAssertOnSave; // @synthesize shouldAssertOnSave=_shouldAssertOnSave;
- (_Bool)save:(id *)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 canSave:(_Bool)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1;

@end
