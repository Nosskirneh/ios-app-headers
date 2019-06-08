//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSFetchRequest, NSManagedObjectContext, NSPredicate, NSString, RHDataController, ZDSDeferred;

@protocol RHPlayEventEntity
+ (NSString *)serviceContextType;
+ (ZDSDeferred *)processPayload:(id)arg1 dataController:(RHDataController *)arg2 forContextTypes:(NSArray *)arg3;
+ (id)insertInManagedObjectContext:(NSManagedObjectContext *)arg1;
+ (NSFetchRequest *)fetchRequestWithPredicate:(NSPredicate *)arg1 context:(NSManagedObjectContext *)arg2;
+ (NSArray *)objectsInContext:(NSManagedObjectContext *)arg1 error:(id *)arg2 matching:(NSString *)arg3;
+ (id)firstObjectInContext:(NSManagedObjectContext *)arg1 error:(id *)arg2 matching:(NSString *)arg3;
+ (NSFetchRequest *)fetchRequestInContext:(NSManagedObjectContext *)arg1 matching:(NSString *)arg2;
@end

