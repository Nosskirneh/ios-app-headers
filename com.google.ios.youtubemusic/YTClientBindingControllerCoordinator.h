//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;

@interface YTClientBindingControllerCoordinator : NSObject
{
    GIMMe *_gimme;
    struct NSHashTable *_observers;
    struct NSHashTable *_modelsPendingCleanup;
    unsigned long long _scheduledCleanupCounter;
}

@property(nonatomic) unsigned long long scheduledCleanupCounter; // @synthesize scheduledCleanupCounter=_scheduledCleanupCounter;
@property(retain, nonatomic) NSHashTable *modelsPendingCleanup; // @synthesize modelsPendingCleanup=_modelsPendingCleanup;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)scheduleCleanupOfModel:(id)arg1;
- (void)notifyObserversOfChangesInModel:(id)arg1;
- (void)removeClientBindingObserver:(id)arg1;
- (void)addClientBindingObserver:(id)arg1;
- (id)init;

@end

