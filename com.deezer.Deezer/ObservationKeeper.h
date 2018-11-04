//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ObservationKeeperDelegate;

@interface ObservationKeeper : NSObject
{
    NSObject *observedObject;
    NSArray *keyPathes;
    id <ObservationKeeperDelegate> delegate;
    CDUnknownBlockType _changeBlock;
}

+ (id)observationKeeperWithObservedProperty:(id)arg1 forObject:(id)arg2;
+ (id)observationKeeperWithObservedProperty:(id)arg1 forObject:(id)arg2 change:(CDUnknownBlockType)arg3;
+ (id)observationKeeperWithObservedProperty:(id)arg1 forObject:(id)arg2 delegate:(id)arg3;
+ (id)observationKeeperWithObservedProperties:(id)arg1 forObject:(id)arg2 delegate:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property(nonatomic) __weak id <ObservationKeeperDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSArray *keyPathes; // @synthesize keyPathes;
@property(retain, nonatomic) NSObject *observedObject; // @synthesize observedObject;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservation;
- (void)dealloc;
- (id)initWithObservedProperties:(id)arg1 forObject:(id)arg2;

@end

