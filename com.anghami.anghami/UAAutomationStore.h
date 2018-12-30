//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString;

@interface UAAutomationStore : NSObject
{
    NSManagedObjectContext *_managedContext;
    NSString *_storeName;
}

+ (id)automationStoreWithConfig:(id)arg1;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSManagedObjectContext *managedContext; // @synthesize managedContext=_managedContext;
- (void).cxx_destruct;
- (id)createTriggerDataFromTriggers:(id)arg1 scheduleStart:(id)arg2;
- (id)createDelayDataFromDelay:(id)arg1 scheduleStart:(id)arg2;
- (id)createScheduleDataFromSchedule:(id)arg1;
- (void)fetchTriggersWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSchedulesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSchedulesWithPredicate:(id)arg1;
- (void)saveSchedule:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)protectedDataAvailable;
- (id)initWithConfig:(id)arg1;

@end

