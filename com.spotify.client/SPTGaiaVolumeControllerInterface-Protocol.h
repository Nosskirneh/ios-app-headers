//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber;
@protocol SPTGaiaVolumeControllerObserver;

@protocol SPTGaiaVolumeControllerInterface <NSObject>
@property(readonly, nonatomic) NSNumber *currentVolume;
- (void)removeVolumeControllerObserver:(id <SPTGaiaVolumeControllerObserver>)arg1;
- (void)addVolumeControllerObserver:(id <SPTGaiaVolumeControllerObserver>)arg1;
- (void)requestVolumeChange:(float)arg1;
@end

